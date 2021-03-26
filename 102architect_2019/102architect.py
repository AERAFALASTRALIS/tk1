#!/usr/bin/python3

import sys
import math

def translation(i, j, x, y) :
    
    print("Translation by the vector (", int(i), ", ", int(j), ")", sep = "")

def homothety(m, n, x, y) :

    print("Homothety by the ratios ", int(m), " and ", int(n), "", sep = "")

def rotation(alpha, x, y) :

    print("Rotation at a ", int(alpha), " degree angle", sep = "")

def symmetry(alpha, x, y) :

    print("Symmetry about an axis inclined with an angle of ", int(alpha), " degrees", sep = "")


def main() :
    
    try :
        x = sys.argv[1]
        y = sys.argv[2]
        fx = int(x)
        fy = int(y)
        
    except IndexError :
        sys.exit(84)
        
    matrice = [1.00, 0.00, 0.00,
               0.00, 1.00, 0.00,
               0.00, 0.00, 1.00]
    
    i = 4

    for i in range(len(sys.argv)) :
        if sys.argv[i] == "-t" :
            translation(float(sys.argv[i + 1]), float(sys.argv[i + 2]), float(x), float(y))
            matrice[2] = float(sys.argv[i + 1]) + matrice[2]
            matrice[5] = float(sys.argv[i + 2]) + matrice[5]
        if sys.argv[i] == "-h" :
            homothety(float(sys.argv[i + 1]), float(sys.argv[i + 2]), float(x), float(y))
            matrice[0] = float(sys.argv[i + 1]) * matrice[0]
            matrice[4] = float(sys.argv[i + 2]) * matrice[4]
        if sys.argv[i] == "-r" :
            rotation(float(sys.argv[i + 1]), int(x), int(y))
            matrice[0] = math.cos(float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[1] = -math.sin(float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[3] = math.sin(float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[4] = matrice[0]
        if sys.argv[i] == "-s" :
            symmetry(float(sys.argv[i + 1]), int(x), int(y))
            matrice[0] = math.cos(2 * float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[1] = math.sin(2 * float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[3] = math.sin(2 * float(sys.argv[i + 1]) / 180 * math.pi)
            matrice[4] = -matrice[0]



    print("%.2f"%matrice[0], "\t%.2f"%matrice[1], "\t%.2f"%matrice[2], sep = "")
    print("%.2f"%matrice[3], "\t%.2f"%matrice[4], "\t%.2f"%matrice[5], sep = "")
    print("%.2f"%matrice[6], "\t%.2f"%matrice[7], "\t%.2f"%matrice[8], sep = "")
    n = matrice[0] * fx + matrice[1] * fy + matrice[2]
    t = matrice[3] * fx + matrice[4] * fy + matrice[5]
    print("(%.2f"%fx,", %.2f"%fy ,") => (%.2f"%n,", %.2f"%t,")", sep = "")

main()
