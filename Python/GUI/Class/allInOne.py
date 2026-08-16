from tkinter import *
from tkinter import messagebox

root = Tk()
root.geometry("200x300")
root.title("Tkinter Example")

# Label
w = Label(root, text="Hello Tkinter!")
w.pack()

# Frame for Buttons
frame = Frame(root)
frame.pack()

def write_slogan():
    print("Tkinter is easy to use!")

button = Button(frame, text="QUIT", fg="red", command=root.destroy)
button.pack(side=LEFT)

slogan = Button(frame, text="Hello", command=write_slogan)
slogan.pack(side=LEFT)

# Frame for checkbuttons 
check_frame = Frame(root)
check_frame.pack(pady=10)

var1 = IntVar()
Checkbutton(check_frame, text="Coder", variable=var1).grid(row=0, sticky=W)

var2 = IntVar()
Checkbutton(check_frame, text="Decoder", variable=var2).grid(row=1, sticky=W)

# Listbox section
lbl = Label(root, text="A list of favourite countries...")
lbl.pack()

listbox = Listbox(root)
listbox.insert(1,"India")
listbox.insert(2, "USA")
listbox.insert(3, "Japan")
listbox.insert(4, "Australia")
listbox = Listbox(root, height=4)   # <–– limits growth
listbox.insert(1,"India")
listbox.insert(2, "USA")
listbox.insert(3, "Japan")
listbox.insert(4, "Australia")
listbox.pack()

t = Label(root, text="ThankYOu!", fg="red")
t.pack()


# # Message Boxes
# # messagebox.showerror("Error", "Something Wrong In Your VS Code Compiler")
# # messagebox.showwarning("Warning","Your System is Under Attack")
# # messagebox.showinfo("Information","Collected all data from your system")

# t = Label(root, text="ThankYOu!", fg="red", font=("Arial", 14, "bold"))
# t.pack()

root.mainloop()