#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Wed Oct 20 14:09:36 2021

@author: vini_cordeiro
"""
import numpy as np

def pattern():
    radius = int(input('Radius of the circle: '))
    for x in range(-radius, radius + 1):
        for y in range(-radius, radius + 1):
            if np.sqrt(x**2 + y**2) <= radius:
                print('*', end = '   ')
            else:
                print(' ', end = '   ')
        print('\n')
        
if __name__ == '__main__':
    pattern()
