/*
** EPITECH PROJECT, 2018
** 104intersection_2018
** File description:
** main
*/

#include "intersection.h"
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

void deltaposforzero(double_p d)
{
    double xp1 = d.xp + d.root1 * d.xv;
    double yp1 = d.yp + d.root1 * d.yv;
    double zp1 = d.zp + d.root1 * d.zv;

    printf("1 intersection point :\n");
    printf ("(%.3f, %.3f, %.3f)\n", xp1,yp1,zp1);
}

int my_str_isnum(char *str)
{
    int i = 0;

    if (str[i] == '-')
        i++;
    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9' || str[i] == '.')
            i++; 
        else
            return (1);
    }
    return (0);
}

double_p init(double_p d, char **av)
{
    d.xp = atof(av[2]);
    d.yp = atof(av[3]);
    d.zp = atof(av[4]);
    d.xv = atof(av[5]);
    d.yv = atof(av[6]);
    d.zv = atof(av[7]);
    d.p = atof(av[8]);
    return (d);
}

void deltapos(double_p d)
{
    double xp1 = d.xp + d.root1 * d.xv;
    double yp1 = d.yp + d.root1 * d.yv;
    double zp1 = d.zp + d.root1 * d.zv;
    double xp2 = d.xp + d.root2 * d.xv;
    double yp2 = d.yp + d.root2 * d.yv;
    double zp2 = d.zp + d.root2 * d.zv;
    printf("2 intersection points :\n");
    printf ("(%.3f, %.3f, %.3f)\n", xp1,yp1,zp1);
    printf ("(%.3f, %.3f, %.3f)\n", xp2,yp2,zp2);
}

void print_inf_cy(double_p d)
{
    printf("There is an infinite number of intersection points.\n");
    exit(0);
}

void cylindre(double_p d, double r)
{
    double a = pow(d.xv,2) + pow(d.yv, 2);
    double b = (2*d.xp*d.xv)+(2*d.yp*d.yv);
    double c = (pow(d.xp, 2)+pow(d.yp, 2))-pow(d.p,2);
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No intersection point.\n");
        exit(0);
    }
    if (delta == 0 ) {
        if (a == 0)
            print_inf_cy(d);
        d.root1 = (-b / (2*a));
        deltaposforzero(d);
        exit(0);
    }
    if (delta > 0) {
        if (a == 0)
            print_inf_cy(d);
        d.root1 = (-b + sqrt(delta)) / (2 * a);
        d.root2 = (-b - sqrt(delta)) / (2 * a);
        deltapos(d);
    }
}

void cone(double_p d, double r)
{
    double angle = d.p * 3.141592653589793 / 180;
    double a = pow(d.xv,2)+pow(d.yv,2)-(pow(d.zv,2)*pow(tan(angle),2));
    double b = (2*d.xp*d.xv) + (2*d.yp*d.yv) - (2*d.zp*d.zv*pow(tan(angle),2));
    double c = pow(d.xp, 2) + pow(d.yp, 2) - pow(d.zp,2)*pow(tan(angle),2);
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No intersection point.\n");
        exit(0);
    }
    if (delta == 0 ) {
        if (a == 0)
            print_inf_cy(d);
        d.root1 = (-b / (2*a));
        deltaposforzero(d);
        exit(0);
    }
    if (delta > 0) {
        if (a == 0)
            print_inf_cy(d);
        d.root1 = (-b + sqrt(delta)) / (2 * a);
        d.root2 = (-b - sqrt(delta)) / (2 * a);
        deltapos(d);
    }
}

void sphere(double_p d , double r)
{
    double a = pow(d.xv, 2) + pow(d.yv, 2) + pow(d.zv, 2);
    double b = (2 * d.xp * d.xv) + (2 * d.yp * d.yv) + (2 * d.zp * d.zv);
    double c = (pow(d.xp, 2) + pow(d.yp, 2) + pow(d.zp, 2)) - pow(r, 2);
    double delta = b * b - 4 * a * c;

    if (delta < 0) {
        printf("No intersection point.\n");
        exit(0);
    }
    if (delta == 0 ) {
        d.root1 = (-b / (2*a));
        deltaposforzero(d);
        exit(0);
    }
    if (delta > 0) {
        d.root1 = (-b + sqrt(delta)) / (2 * a);
        d.root2 = (-b - sqrt(delta)) / (2 * a);
        deltapos(d);
    }
}

void print_sphere(double_p d)
{
    printf("Sphere of radius %.0f\n", d.p);
    printf("Line passing through the point (%.0f, %.0f, %.0f) ",d.xp,d.yp,d.zp);
    printf("and parallel to the vector (%.0f, %.0f, %.0f)\n",d.xv,d.yv,d.zv);
}

void print_cylindre(double_p d)
{
    printf("Cylindre of radius %.0f\n", d.p);
    printf("Line passing through the point (%.0f, %.0f, %.0f) ",d.xp,d.yp,d.zp);
    printf("and parallel to the vector (%.0f, %.0f, %.0f)\n",d.xv,d.yv,d.zv);
}

void print_cone(double_p d)
{
    printf("Cone with a %.0f degree angle\n", d.p);
    printf("Line passing through the point (%.0f, %.0f, %.0f) ",d.xp,d.yp,d.zp);
    printf("and parallel to the vector (%.0f, %.0f, %.0f)\n",d.xv,d.yv,d.zv);
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac != 9 || av[1][0] < 1 && av[1][0] > 3) {
        printf("Usage : \n      ./104intersection opt xp yp zp xv yv zv p \n");
        printf("\n DESCRIPTION : \n     opt               surface option : 1 for a sphere, 2 for a cylinder, 3 for a cone \n     (xp, yp, zp)      coordinates of a point by which the light ray passes through \n     (xv, yv, zv)      coordinates of a vector parallel to the light ray \n     p                 parameter: radius of the sphere, radius of the cylinder, or \n                       angle formed by the cone and the Z-axis \n");
        return (84);
    }
    while (i < ac) {
        if (my_str_isnum(av[i]) == 1) {
            printf("Le %dème argument n'est pas un nombre !\n", i);
            return (84);
        }
        else
            i++;
    }
    
    double_p d = init(d, av);
    if (av[1][0] == '1') {
        print_sphere(d);
        sphere(d, d.p);
        return (0);
    }
    else if (av[1][0] == '3') {
        print_cone(d);
        cone(d, d.p);
        return (0);
    }
    else if (av[1][0] == '2') {
        print_cylindre(d);
        cylindre(d, d.p);
        return (0);
    }
    else
        return (84);
    return (0);
}
