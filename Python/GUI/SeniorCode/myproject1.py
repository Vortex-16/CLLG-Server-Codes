# -*- coding: utf-8 -*-
"""
Created on Thu Jun 27 12:06:01 2019

@author: STUDENT
"""

from tkinter import *  
import tkinter as tk 
#from PIL import ImageTk, Image
from tkinter import ttk,messagebox
 


top = tk.Tk() 


top.geometry('800x600')
top.config(bg = "#ffffff")
#img1 = ImageTk.PhotoImage(Image.open("DSC_2648.bmp"))
#img2 = ImageTk.PhotoImage(Image.open("IMG_1494.bmp"))

lb1=tk.Label(top,text="My First Project", bg = '#ffffff',fg= '#5500ff',bd=10,
            font = 'ALGERIAN 30 bold italic',justify = tk.LEFT,padx = 10).pack()
''' creating canvas '''
canvas = Canvas(top,width=400, height=300)
canvas.pack(expand = NO, fill = BOTH)
''' creating combo '''
csefcombo = ttk.Combobox(top, values=["MDU","AH","SSK","SMA","DC","BDU","AP",
                                          "SDE","GY","Quit"])
csefcombo.current(0)
#value =tk.StringVar()


itfcombo = ttk.Combobox(top, values=["AKS","AGH","ARC","RG","NK","SSR","KDA","AB",
                                         "SU","AD","SL","RCH","Quit"])
itfcombo.current(0)
#value =tk.StringVar()




#canvas.create_image(300,300,image = img, anchor = S)

menu =Menu(top)


it = Menu(menu)
def menucommand():
    print("menu")
    
def itfaculty():
    #labelTop = tk.Label(top,text = "Facalty (IT)")
    #labelTop.grid(column=20, row=20)

   # itfcombo = ttk.Combobox(top, values=["AKS","AGH","ARC","RG","NK","SSR","KDA","AB",
    #                                     "SU","AD","SL","RCH","Quit"]) 
    #global itfcombo
    #itfcombo.current(0)
    #value =tk.StringVar()
    #canvas.create_image(300,300,image = img1, anchor = S)'''
    canvas.create_image(300,300,image = img1, anchor = S)
    def on_select(event=None):  
        messagebox.showinfo("Faculty",itfcombo.get())
        print(itfcombo.get())
        if "Quit"==itfcombo.get():
            itfcombo.pack_forget() 
        
   
    itfcombo.bind('<<ComboboxSelected>>',on_select)
    itfcombo.pack()
   
    top.mainloop()

    
   
"""start combo cse"""
def csefaculty():
   
    
    '''csefcombo = ttk.Combobox(top, values=["MDU","AH","SSK","SMA","DC","BDU","AP",
                                          "SDE","GY","Quit"])
    global csefcombo
    csefcombo.current(0)
    value =tk.StringVar()
    canvas.create_image(300,300,image = img2, anchor = S)'''
    canvas.create_image(300,300,image = img2, anchor = S)
    def on_select(event=None):  
        messagebox.showinfo("Faculty",csefcombo.get())
        print(csefcombo.get())
        
        if "Quit"==csefcombo.get():
            csefcombo.pack_forget()
        
        
   
    csefcombo.bind('<<ComboboxSelected>>',on_select)
    csefcombo.pack()
    
    top.mainloop()
    csefcombo.pack_forget()
    
"""end combo cse"""
    
menu.add_cascade(label="Department of Information Technology", menu=it)
it.add_command(label = "Faculty", command = itfaculty)
it.add_command(label = "Technial Assistant", command = menucommand)
it.add_separator()
it.add_command(label = "Exit", command = top.quit)



cse = Menu(menu)
menu.add_cascade(label="Department of Computer Science and Engineering", menu=cse)
cse.add_command(label = "Faculty", command = csefaculty)
cse.add_command(label = "Technial Assistant", command = menucommand)
cse.add_separator()
cse.add_command(label = "Exit", command = top.quit)


top.config(menu = menu)
top.mainloop()



