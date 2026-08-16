# -*- coding: utf-8 -*-
"""
Created on Wed Jun 26 12:07:54 2019

@author: STUDENT
"""

from tkinter import *  
import tkinter as tk 

top = Tk()  
  
top.geometry("200x250")  
  
lbl = Label(top,text = "A list of favourite countries...")  
  
listbox = Listbox(top)  

  
listbox.insert(1,"India")  
  
listbox.insert(2, "USA")  
  
listbox.insert(3, "Japan")  
  
listbox.insert(4, "Austrelia")  
value ="Select Your Country From The List: "
def CurSelet(evt):
    global value
    value=str((listbox.get(listbox.curselection())))
    #print(value)
    #return value
#value = str(listbox.get(ACTIVE))
listbox.bind('<<ListboxSelect>>',CurSelet)
#value = CurSelet
def abc():
    print(value)

button =tk.Button(top,text="add", fg="blue", command=abc)
lbl.pack() 
listbox.pack()    
 
button.pack()  

  

top.mainloop()  