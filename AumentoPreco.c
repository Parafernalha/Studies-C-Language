/* AUMENTO DE PREÇO */
#include<stdio.h>
#include<stdlib.h>
int main ()
{
float ValorProduto;
float ValorAtual;
#define Valor_min 0
#define aumento_max1 50
#define aumento_max2 100
#define aumento_max3 1000000000000000000000000000000000000
printf ("Qual e o valor do produto?\n");
scanf ("%f" , &ValorProduto);
if (ValorProduto>Valor_min && ValorProduto<aumento_max1){
ValorAtual = ((ValorProduto/100)*5+ValorProduto);
printf ("O valor do produto sofreu um aumento de: 5 porcento\n");
printf("O valor atual do item e: %f", ValorAtual);
}
else if (ValorProduto>aumento_max1 && ValorProduto<=aumento_max2)
{
ValorAtual = ((ValorProduto/100)*10+ValorProduto);
printf ("O valor do produto sofreu um aumento de: 10 porcento\n");
printf ("O valor atual do item e: \n%f", ValorAtual);
}
else if (ValorProduto>=aumento_max2)
{
ValorAtual = ((ValorProduto/100)*15+ValorProduto);
printf ("O valor do produto sofreu um aumento de: 15 porcento\n");
printf("O valor atual do item e: \n%f", ValorAtual);
}
}