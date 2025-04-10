#include <stdio.h>

int main()
{

    int freq;
    float n1, n2, n3, media;

    printf("Digite a primeira nota:\n");
    scanf("%f",&n1);
    printf("Digite a segunda nota:\n");
    scanf("%f",&n2);
    printf("Digite a terceira nota:\n");
    scanf("%f", &n3);
    printf("Digite a frequencia:\n");
    scanf("%d", &freq);

    media= (n1 + n2 + n3) /3;
    printf("media: %f ",media);

    if(media >= 8.0 && freq >= 75)
    {
        printf("Passou com Distincao\n");
    }
    else if(media >= 6.0 && freq >= 75)
    {
        printf("Passou Direto\n");
    }
    else if(media >= 4.0 && media < 6.0 && freq >= 75  || media >= 6.0 && freq < 75  || media >= 4.0 && freq > 50  && freq < 75)
    {
        printf("Vai para final\n");
    }

    else
    {
        printf("Reprovado direto\n");
    }


    return 0;

}

