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

    printf("Cálculos com formas geométricas...\n\n");

    printf("Opções:\n");
    printf("[1] Calcular área\n");
    printf("[2] Calcular perímetro\n");
    printf("[3] Sair\n\n");

    printf("Digite a opção desejada: ");
    scanf("%d", &optmain);

    switch(optmain)
    {
        case 1: printf("\nOpções para calcular a área:\n");
                printf("[1] Quadrado\n");
                printf("[2] Retângulo\n");
                printf("[3] Círculo\n");
                printf("[4] Sair\n\n");

                printf("Digite a opção desejada: ");
                scanf("%d", &optar);

                switch(optar)
                {
                    case 1: printf("\nCalculando a área de um quadrado...\n");
                            printf("Digite o tamanho do lado do quadrado: ");
                            scanf("%f", &lq);
                            areaquad = lq * lq;
                            printf("A área do quadrado de lado %5.1f é %5.1f\n\n", lq, areaquad);
                            system("pause");
                            break;


                    case 2: printf("\nCalculando a área de um retângulo...\n");
                            printf("Digite a largura do retângulo: ");
                            scanf("%f", &larg);
                            printf("Digite a altura do retângulo: ");
                            scanf("%f", &alt);
                            arearet = larg * alt;
                            printf("A área do retângulo de largura %5.1f e altura %5.1f é %5.1f\n\n", larg, alt, arearet);
                            system("pause");
                            break;

                    case 3: printf("\nCalculando a área de um círculo...\n");
                            printf("Digite o tamanho do raio do círculo: ");
                            scanf("%f", &raio);
                            areacirc = (raio * raio) * pi;
                            printf("A área do círculo de raio %5.1f é %5.1f\n\n", raio, areacirc);
                            system("pause");
                            break;

                    case 4: printf("Saindo...\n\n");
                            system("pause");
                            break;
                }
//====================================================================
        case 2: printf("\nOpções para calcular o perímetro:\n");
                printf("[1] Quadrado\n");
                printf("[2] Retângulo\n");
                printf("[3] Círculo\n");
                printf("[4] Sair\n\n");

                printf("Digite a opção desejada: ");
                scanf("%d", &optper);

                switch(optper)
                {
                    case 1: printf("\nCalculando o perímetro de um quadrado...\n");
                            printf("Digite o tamanho do lado do quadrado: ");
                            scanf("%f", &lq);
                            perquad = lq * 4;
                            printf("O perímetro do quadrado de lado %5.1f é %5.1f\n\n", lq, perquad);
                            system("pause");
                            break;

                    case 2: printf("\nCalculando o perímetro de um retângulo...\n");
                            printf("Digite a largura do retângulo: ");
                            scanf("%f", &larg);
                            printf("Digite a altura do retângulo: ");
                            scanf("%f", &alt);
                            perret = (larg * 2) + (alt * 2);
                            printf("O perímetro do retângulo de largura %5.1f e altura %5.1f é %5.1f\n\n", larg, alt, perret);
                            system("pause");
                            break;

                    case 3: printf("\nCalculando o perímetro de um círculo...\n");
                            printf("Digite o tamanho do raio do círculo: ");
                            scanf("%f", &raio);
                            percirc = 2 * pi * raio;
                            printf("O perímetro do círculo de raio %5.1f é %5.1f\n\n", raio, percirc);
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
