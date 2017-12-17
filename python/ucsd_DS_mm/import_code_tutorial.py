# -*- coding: utf-8 -*-
"""
Created on Tue Jul 18 20:36:58 2017
importing the code from a different file
@author: surya
"""
import class_tutorial as cls_t

def main():
    print("creating employees","\n")
    e_lst = []
    for i in range(0,2):
        e_lst.append(cls_t.Employee('Surya'+str(i),'Paruchuri'+str(i),i))
    for i in range(0,2):
        print(e_lst[i].__dict__,"\n")
    print("creating managers ","\n")
    m_list  = []
    for i in range (0,2):
        m_list.append(cls_t.Manager('Surya'+str(i),'Paruchuri_manager_'+str(i),200+i,'DSP_Firmware_developer','QTI','Jermi'))
    for i in m_list:
        print(i.__dict__,"\n")
    
    
if __name__ == '__main__':
    main()
