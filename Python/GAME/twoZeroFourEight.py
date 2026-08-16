import random
import os
import time

# Directions: up, down, left, right
DIRS = ['up', 'down', 'left', 'right']

# Initialize the board with 4x4 grid of zeros
def initialize_board():
    board = [[0] * 4 for _ in range(4)]
    add_new_tile(board)
    return board

# Function to add a new tile (2 or 4) randomly on the board
def add_new_tile(board):
    empty_cells = [(r, c) for r in range(4) for c in range(4) if board[r][c] == 0]
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

    return merged + [0] * (4 - len(merged)), score_delta

# Function to move and merge the board in a particular direction
def move(board, direction):
    score_delta = 0
    if direction == 'up':
        for c in range(4):
            col = [board[r][c] for r in range(4)]
            new_col, score = compress_and_merge(col)
            for r in range(4):
                board[r][c] = new_col[r]
            score_delta += score
    elif direction == 'down':
        for c in range(4):
            col = [board[3-r][c] for r in range(4)]
            new_col, score = compress_and_merge(col)
            for r in range(4):
                board[3-r][c] = new_col[r]
            score_delta += score
    elif direction == 'left':
        for r in range(4):
            new_row, score = compress_and_merge(board[r])
            board[r] = new_row
            score_delta += score
    elif direction == 'right':
        for r in range(4):
            new_row, score = compress_and_merge(board[r][::-1])
            board[r] = new_row[::-1]
            score_delta += score

    return score_delta

# Function to check if the game is over
def is_game_over(board):
    for r in range(4):
        for c in range(4):
            if board[r][c] == 0:
                return False
            if c < 3 and board[r][c] == board[r][c + 1]:
                return False
            if r < 3 and board[r][c] == board[r + 1][c]:
                return False
    return True

# Function to print the board
def print_board(board, score):
    os.system('clear')  # Clear the terminal screen
    print(f"2048 Game\nScore: {score}")
    for row in board:
        print('\t'.join(str(x) if x != 0 else '.' for x in row))
        print()

# Function to save the current board state (for undo)
def save_state(board):
    return [row[:] for row in board]

# Main game loop
def play_game():
    board = initialize_board()
    score = 0
    history = [save_state(board)]  # Save the initial state for undo
    while True:
        print_board(board, score)
        if is_game_over(board):
            print(f"Game Over! Your final score is: {score}")
            break

        move_input = input("Use w/a/s/d to move (w=up, a=left, s=down, d=right) or u for undo: ").lower()
        
        if move_input == 'w':
            score_delta = move(board, 'up')
        elif move_input == 'a':
            score_delta = move(board, 'left')
        elif move_input == 's':
            score_delta = move(board, 'down')
        elif move_input == 'd':
            score_delta = move(board, 'right')
        elif move_input == 'u':  # Undo functionality
            if len(history) > 1:
                history.pop()
                board = history[-1]
                print("Undo successful!")
                continue
            else:
                print("No moves to undo!")
                continue
        else:
            print("Invalid move! Use w/a/s/d or u for undo.")
            continue

        score += score_delta
        add_new_tile(board)
        history.append(save_state(board))
        time.sleep(0.1)

# Run the game
if __name__ == "__main__":
    play_game()

