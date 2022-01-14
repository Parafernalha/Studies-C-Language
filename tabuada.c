#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
int main()
{
int Multiplicador = 0;
printf("\nDigite a tabuada que você deseja \n\t\t\t\n>>> ");
scanf("%i", &Multiplicador);
for(int x = 1; x<=10; ++x){
printf("%ix%i = %i\n", x, Multiplicador, x * Multiplicador);
}
return 0;
}