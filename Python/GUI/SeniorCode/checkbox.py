# -*- coding: utf-8 -*-
"""
Created on Wed Jun 26 12:39:44 2019

@author: STUDENT
"""

from tkinter import *
master = Tk()
var1 = IntVar()
Checkbutton(master, text="Coder", variable=var1).grid(row=0, sticky=W)
var2 = IntVar()
Checkbutton(master, text="Decoder", variable=var2).grid(row=1, sticky=W)
mainloop()