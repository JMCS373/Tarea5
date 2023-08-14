#include <stdio.h> /*librerias incluidas*/

int main (){ /*inicio del programa*/
char primero, ultimo; /* indica el nombre de los valores que van a entrar*/
printf("introduzca su primera y ultima inicial:");
scanf("%c %c" , &primero,&ultimo);
printf("Hola, %c. %c. \n",primero,ultimo);

char arbol[] = "José";
printf("%s\n", arbol);

return 0;
}