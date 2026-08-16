# -*- coding: utf-8 -*-
"""
Created on Wed Jun 26 12:41:14 2019

@author: STUDENT
"""

import tkinter
from tkinter import messagebox

# hide main window
root = tkinter.Tk()
root.withdraw()

# message box display
messagebox.showerror("Error", "Something Wrong In Your VS Code Compiler")
messagebox.showwarning("Warning","Your System is Under Attack")
messagebox.showinfo("Information","Collected all data from your system")
