# -*- coding: utf-8 -*-
"""
Created on Wed Jun 26 12:28:46 2019

@author: STUDENT
"""

import tkinter as tk
from tkinter import ttk,messagebox
 
app = tk.Tk() 
app.geometry('250x125')

labelTop = tk.Label(app,
                    text = "Choose your favourite month")
labelTop.grid(column=0, row=0)

comboExample = ttk.Combobox(app, values=["January","February","March","April"])
""" pprint(dict(comboExample)) """
comboExample.grid(column=0, row=1)
comboExample.current(1)
value =tk.StringVar()
def click():  
    messagebox.showinfo("Month",comboExample.get())
    print(comboExample.get())
     # action.configure(text="chosen month is : "+ comboExample.get())  
#button Creation  
action = ttk.Button(app, text="Click", command=click)  
action.grid(column=1,row=3)  
'''def cityselection(comboExample):
    value = comboExample.current()
    #comboExample.selected=event
    print(value)

comboExample.bind('<<ComboboxSelected>>',cityselection)'''

print(comboExample.current(), comboExample.get())

app.mainloop()




