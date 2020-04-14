/******************************************************************************

Datos de entrada
reales a = 0, b = 0, c = 0, x1 = 0, x2 = 0;

Proceso
Escribir "Ingrese el valor de a: "
Leer a
Escribir "Ingrese el valor de b: "
Leer b
Escribir "Ingrese el valor de c: "
Leer c

x1 = (-b + sqrt(pow(b, 2) - 4 * a * c))/2*a;
x2 = (-b - sqrt(pow(b, 2) - 4 * a * c))/2*a;

Datos de salida
escribir las respuestas son:
x1
x2

*******************************************************************************/
#include <stdio.h> //declaracion de libreria input y output
#include <math.h> //declaracion de libreria funciones matematicas

void main()
{
    int a, b, c, d; // declaracion de variables de entrada
    int x1, x2; //decalracion de variables de salida
    printf("Ingrese el valor de a: "); //escribir texto
    scanf("%d", &a); //recibir entrada del usuario
    printf("Ingrese el valor de b: ");//escribir texto
    scanf("%d", &b); //recibir entrada del usuario
    printf("Ingrese el valor de c: ");//escribir texto
    scanf("%d", &c); //recibir entrada del usuario
    d = (b*b) - 4*a*c; // calcular el discriminante
    x1 = (-b+sqrt(d))/(2*a); //emplear formula con signo +
    x2 = (-b-sqrt(d))/(2*a); //emplear formula con signo -
    
    printf("Las respuestas son:\n"); //escribir texto
    printf("x1: %d\n", x1); //escribir respuesta 1
    printf("x2: %d\n", x2); //escribir respuesta 2
}

