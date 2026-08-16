import random
import os
import curses
import time

# Constants for grid size and tile colors
GRID_SIZE = 4
TILE_COLORS = {
    0: '\033[48;5;235m',  # Empty cells background color
    2: '\033[48;5;237m',
    4: '\033[48;5;239m',
    8: '\033[48;5;214m',
    16: '\033[48;5;208m',
    32: '\033[48;5;202m',
    64: '\033[48;5;196m',
    128: '\033[48;5;220m',
    256: '\033[48;5;118m',
    512: '\033[48;5;65m',
    1024: '\033[48;5;33m',
    2048: '\033[48;5;15m',
}
TEXT_COLORS = {
    0: '\033[38;5;235m',  # Empty cells text color (invisible)
    2: '\033[38;5;230m',
    4: '\033[38;5;230m',
    8: '\033[38;5;0m',
    16: '\033[38;5;0m',
    32: '\033[38;5;0m',
    64: '\033[38;5;0m',
    128: '\033[38;5;0m',
    256: '\033[38;5;0m',
    512: '\033[38;5;0m',
    1024: '\033[38;5;0m',
    2048: '\033[38;5;0m',
}

# Initialize the board with a 4x4 grid
def initialize_board():
    board = [[0] * GRID_SIZE for _ in range(GRID_SIZE)]
    add_new_tile(board)
    return board

# Function to add a new tile (2 or 4) randomly on the board
def add_new_tile(board):
    empty_cells = [(r, c) for r in range(GRID_SIZE) for c in range(GRID_SIZE) if board[r][c] == 0]
    if empty_cells:
        r, c = random.choice(empty_cells)
        board[r][c] = random.choice([2, 4])

# Function to compress and merge a single row or column
def compress_and_merge(line):
    non_zero = [x for x in line if x != 0]
    merged = []
    skip = False
    score_delta = 0

    for i in range(len(non_zero)):
        if skip:
            skip = False
            continue
        if i < len(non_zero) - 1 and non_zero[i] == non_zero[i + 1]:
            merged.append(non_zero[i] * 2)
            score_delta += non_zero[i] * 2
            skip = True
        else:
            merged.append(non_zero[i])

    return merged + [0] * (GRID_SIZE - len(merged)), score_delta

# Function to move and merge the board in a particular direction
def move(board, direction):
    score_delta = 0
    if direction == 'up':
        for c in range(GRID_SIZE):
            col = [board[r][c] for r in range(GRID_SIZE)]
            new_col, score = compress_and_merge(col)
            for r in range(GRID_SIZE):
                board[r][c] = new_col[r]
            score_delta += score
    elif direction == 'down':
        for c in range(GRID_SIZE):
            col = [board[GRID_SIZE - 1 - r][c] for r in range(GRID_SIZE)]
            new_col, score = compress_and_merge(col)
            for r in range(GRID_SIZE):
                board[GRID_SIZE - 1 - r][c] = new_col[r]
            score_delta += score
    elif direction == 'left':
        for r in range(GRID_SIZE):
            new_row, score = compress_and_merge(board[r])
            board[r] = new_row
            score_delta += score
    elif direction == 'right':
        for r in range(GRID_SIZE):
            new_row, score = compress_and_merge(board[r][::-1])
            board[r] = new_row[::-1]
            score_delta += score

    return score_delta

# Function to check if the game is over
def is_game_over(board):
    for r in range(GRID_SIZE):
        for c in range(GRID_SIZE):
            if board[r][c] == 0:
                return False
            if c < GRID_SIZE - 1 and board[r][c] == board[r][c + 1]:
                return False
            if r < GRID_SIZE - 1 and board[r][c] == board[r + 1][c]:
                return False
    return True

# Function to print the board
def print_board(stdscr, board, score):
    stdscr.clear()  # Clear the terminal screen
    stdscr.addstr(0, 0, f"2048 Game\nScore: {score}", curses.A_BOLD)
    for r in range(GRID_SIZE):
        for c in range(GRID_SIZE):
            value = board[r][c]
            color = TILE_COLORS.get(value, '\033[48;5;235m')
            text_color = TEXT_COLORS.get(value, '\033[38;5;235m')
            stdscr.addstr(r + 1, c * 7, f"{str(value).center(5)}", curses.color_pair(value))
    stdscr.refresh()

# Main game loop
def play_game(stdscr):
    curses.curs_set(0)  # Hide the cursor
    stdscr.timeout(100)  # Set a timeout to handle key events
    board = initialize_board()
    score = 0
    while True:
        print_board(stdscr, board, score)
        if is_game_over(board):
            stdscr.addstr(6, 0, f"Game Over! Final score: {score}", curses.A_BOLD)
            stdscr.refresh()
            stdscr.getch()  # Wait for user input before exiting
            break

        key = stdscr.getch()  # Get the key pressed by the user

        if key == curses.KEY_UP:
            score_delta = move(board, 'up')
        elif key == curses.KEY_DOWN:
            score_delta = move(board, 'down')
        elif key == curses.KEY_LEFT:
            score_delta = move(board, 'left')
        elif key == curses.KEY_RIGHT:
            score_delta = move(board, 'right')
        else:
            continue

        score += score_delta
        add_new_tile(board)
        time.sleep(0.1)

# Run the game
if __name__ == "__main__":
    curses.wrapper(play_game)
