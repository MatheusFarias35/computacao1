#include <stdio.h>

int main()
{
    float altura, largura, area, tinta;

printf("digite a altura da parede:");
scanf("%f",&altura);

printf("digite a largura da parede");
scanf("%f",&largura);

area = altura * largura;
printf("%f * %f = %f", altura, largura, area);

tinta = area/2;
tinta = ceil(tinta);

printf("a quantidade de tinta necessaria em litros: %.2f ", tinta);

return 0;




}
