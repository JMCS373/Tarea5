#include <stdio.h>

int main () 
{
double num1, num2;
printf("escriba el primer numero:");
scanf("%lf",&num1);

printf("escriba el segundo numero:");
scanf("%lf",&num2);

double suma = num1+num2;
double resta = num1-num2;
double multiplicacion = num1*num2;

printf("Resultados:\n");
printf("suma: %.2lf\n", suma);
printf("resta: %.2lf\n", resta);
printf("multiplicacion: %.2lf\n", multiplicacion);

if (num2 == 0) 
{
    printf("Error,no se puede dividir entre 0\n");
}
else
{
   double division = num1/num2;
   printf("division: %.2lf\n",division); 
}

return 0;

}