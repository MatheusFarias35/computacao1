#include <stdio.h>
int main(){

    int forc;
    int armamento;
    float mult_critic;
    float dano;


printf("Digite a forca do personagem:\n");
scanf("%d",&forc);
printf("Digite o nivel da arma:\n");
scanf("%d",&armamento);
printf("Digite o multiplicador de critico:\n");
scanf("%f",&mult_critic);

dano=forc*armamento*mult_critic;

if(dano>5000){
printf("DANO CRITICO MASSIVO!\n");
}
else if(dano>=1000 && dano<5000){
printf("DANO CRITICO!\n");
}
else if(dano<1000){
printf("DANO NORMAL\n");
}
printf("o Dano obtido foi de:%.2f",dano);

return 0;

}
