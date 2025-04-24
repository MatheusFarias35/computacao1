#include <stdio.h>
 int main()
 {
     int numero_base, inicio_intervalo, fim_intervalo, soma=0, i;


 printf("digite o numero base:");
 scanf("%d", &numero_base);

 printf("digite o valor do inicio:");
 scanf("%d", &inicio_intervalo);

 printf("digite o valor do fim:");
 scanf("%d", &fim_intervalo);

 if(inicio_intervalo>fim_intervalo){
    printf("o valor inicial do intervalo deve ser menor ou igual ao valor final.\n");

 }

 for(i=inicio_intervalo;i<=fim_intervalo;i++){
     if(i % numero_base ==0){
    printf("%d\n",i);
    soma+=i;
  }
}
printf("Soma dos multiplos: %d\n", soma);

return 0;
 }
