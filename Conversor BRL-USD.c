/* CONVERSOR DE GRANA */
#include <stdio.h>
#include<stdlib.h>
int main ()
{
int DOLAR; // variavel que vai receber e guardar o valor em dolares.
int REAL; // variavel que vai receber e guardar o valor em reais.
int GRANA; // variavel que vai receber e guardar a quantidade de grana debaixo do colchão.
DOLAR = 5.29;
printf ("Digite o valor em REAIS: \n"); // Pede para que o usuário digite o valor em reais.
scanf ("%d", &REAL);
GRANA = ((REAL * DOLAR));
// converte de real para dolar
printf("A quantidade de grana em dolar e: %d", GRANA);
}
// informa a quantidade de grana em dolar