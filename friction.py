# -*- coding: utf-8 -*-
"""
Created on Tue Mar 26 16:11:34 2019

@author: Michael
"""

#program to find coefficients of static and kinetic friction
#fs denotes static force, fk denotes kinetic force

#felt
fs1 = [0.8,1.2,1.5]
fk1 = [0.6,1.0,1.3]
n1 = [3.2487,5.67714,8.11636]

#cork
fs2 = [1.8,2.3,3.9]
fk2 = [1.4,2.0,3.2]
n2 = [3.32024,5.74868,8.1879]

def find():
    sum = 0
    for i in range(0,3):
        sum += fs1[i]/n1[i]
    print("miu s of felt: ", round(sum/3,2))

    sum = 0
    for i in range(0,3):
        sum += fs2[i]/n2[i]
    print("miu s of cork: ", round(sum/3,2))

    sum = 0
    for i in range(0,3):
        sum += fk1[i]/n1[i]
    print("miu k of felt: ", round(sum/3,2))

    sum = 0
    for i in range(0,3):
        sum += fk2[i]/n2[i]
    print("miu k of cork: ", round(sum/3,2))

if (__name__ == "__main__"):
    find()
