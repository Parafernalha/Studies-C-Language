/* CALCULADORA DE VOLUMES DE CILINDROS */
#include <stdio.h>
#include<stdlib.h>
int main ()
{
int altura; // variavel que vai receber e guardar o valor da altura
int raio; // variavel que vai receber e guardar o valor do raio
int volume; // variavel que vai receber e guardar o volume do cilindro
int pi;

pi = 3, 141592;
printf ("Digite o valor da altura: \n"); // Pede para que o usuário digite o valor da altura
printf ("Digite o valor do raio: \n");
// Pede para que o usuário digite o valor do raio
scanf ("%d", &altura);
scanf ("%d", &raio);
volume = ((pi * raio * altura));
// Cálcula o valor do volume
printf("O valor do volume e: %d", volume);
}
// informa o valor do volume