#include <stdio.h>
#include <stdlib.h>
/*
Calcula el Area de un circulo cuyo radio es de 9.9cm. Tome pi = 3.14*/
int main() {
    double pi = 3.14; 
    double radius = 9.9;
    double area = pi * radius * radius;
    system("cls");
    printf("The area of the given Circle is %lf \n", area );
    return 0;
}