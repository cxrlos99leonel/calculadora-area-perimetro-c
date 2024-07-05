#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <windows.h>

int main ()
{
    int optmain, optar, optper;
    float lq, areaquad, perquad; //variaveis do quadrado
    float larg, alt, arearet, perret; //variaveis do retangulo
    float raio, pi=3.14159, areacirc, percirc; //variaveis do circulo


    setlocale(LC_ALL, "Portuguese");

    printf("C�lculos com formas geom�tricas...\n\n");

    printf("Op��es:\n");
    printf("[1] Calcular �rea\n");
    printf("[2] Calcular per�metro\n");
    printf("[3] Sair\n\n");

    printf("Digite a op��o desejada: ");
    scanf("%d", &optmain);

    switch(optmain)
    {
        case 1: printf("\nOp��es para calcular a �rea:\n");
                printf("[1] Quadrado\n");
                printf("[2] Ret�ngulo\n");
                printf("[3] C�rculo\n");
                printf("[4] Sair\n\n");

                printf("Digite a op��o desejada: ");
                scanf("%d", &optar);

                switch(optar)
                {
                    case 1: printf("\nCalculando a �rea de um quadrado...\n");
                            printf("Digite o tamanho do lado do quadrado: ");
                            scanf("%f", &lq);
                            areaquad = lq * lq;
                            printf("A �rea do quadrado de lado %5.1f � %5.1f\n\n", lq, areaquad);
                            system("pause");
                            break;


                    case 2: printf("\nCalculando a �rea de um ret�ngulo...\n");
                            printf("Digite a largura do ret�ngulo: ");
                            scanf("%f", &larg);
                            printf("Digite a altura do ret�ngulo: ");
                            scanf("%f", &alt);
                            arearet = larg * alt;
                            printf("A �rea do ret�ngulo de largura %5.1f e altura %5.1f � %5.1f\n\n", larg, alt, arearet);
                            system("pause");
                            break;

                    case 3: printf("\nCalculando a �rea de um c�rculo...\n");
                            printf("Digite o tamanho do raio do c�rculo: ");
                            scanf("%f", &raio);
                            areacirc = (raio * raio) * pi;
                            printf("A �rea do c�rculo de raio %5.1f � %5.1f\n\n", raio, areacirc);
                            system("pause");
                            break;

                    case 4: printf("Saindo...\n\n");
                            system("pause");
                            break;
                }
//====================================================================
        case 2: printf("\nOp��es para calcular o per�metro:\n");
                printf("[1] Quadrado\n");
                printf("[2] Ret�ngulo\n");
                printf("[3] C�rculo\n");
                printf("[4] Sair\n\n");

                printf("Digite a op��o desejada: ");
                scanf("%d", &optper);

                switch(optper)
                {
                    case 1: printf("\nCalculando o per�metro de um quadrado...\n");
                            printf("Digite o tamanho do lado do quadrado: ");
                            scanf("%f", &lq);
                            perquad = lq * 4;
                            printf("O per�metro do quadrado de lado %5.1f � %5.1f\n\n", lq, perquad);
                            system("pause");
                            break;

                    case 2: printf("\nCalculando o per�metro de um ret�ngulo...\n");
                            printf("Digite a largura do ret�ngulo: ");
                            scanf("%f", &larg);
                            printf("Digite a altura do ret�ngulo: ");
                            scanf("%f", &alt);
                            perret = (larg * 2) + (alt * 2);
                            printf("O per�metro do ret�ngulo de largura %5.1f e altura %5.1f � %5.1f\n\n", larg, alt, perret);
                            system("pause");
                            break;

                    case 3: printf("\nCalculando o per�metro de um c�rculo...\n");
                            printf("Digite o tamanho do raio do c�rculo: ");
                            scanf("%f", &raio);
                            percirc = 2 * pi * raio;
                            printf("O per�metro do c�rculo de raio %5.1f � %5.1f\n\n", raio, percirc);
                            system("pause");
                            break;

                    case 4: printf("Saindo...\n\n");
                            system("pause");
                            break;
                }
//====================================================================
        case 3: printf("\nSaindo...\n\n");
                system("pause");
                break;
    }

}
