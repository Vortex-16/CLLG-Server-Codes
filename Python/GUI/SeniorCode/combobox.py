# -*- coding: utf-8 -*-
"""
Created on Wed Jun 26 12:28:46 2019

@author: STUDENT
"""

import tkinter as tk
from tkinter import ttk
 
app = tk.Tk() 
app.geometry('200x100')

labelTop = tk.Label(app,
                    text = "Choose your favourite month")
labelTop.grid(column=0, row=0)

comboExample = ttk.Combobox(app, 
                            values=[
                                    "January", 
                                    "February",
                                    "March",
                                    "April"])
""" pprint(dict(comboExample)) """
comboExample.grid(column=0, row=1)
comboExample.current(2)

print(comboExample.current(), comboExample.get())

app.mainloop()
