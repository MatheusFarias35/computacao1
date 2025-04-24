#include <stdio.h>
int main(){

    int num=0;
    int i=1;
    int mult;

printf("digite o numero:\n");
scanf("%d",&num);


while(i<11){
mult=i*num;
printf("%d*%d=%d\n",i,num,mult);
i=i+1;
}

return 0;

}
