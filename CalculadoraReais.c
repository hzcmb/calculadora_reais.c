//HENZO CAVERZAN MELO BECERRA 21011454
#include <stdio.h>
#include <stdlib.h>

main ()

{
    int E, E2;
    float N1, N2, NN, S, P;
    char X='\0';

    printf("\n\n===========CALCULADORA DE REAIS===========\n");
    printf("\nPara SOMAR digite: 1");
    printf("\nPara SUBTRAIR digite: 2");
    printf("\nPara MULTIPLICAR digite: 3");
    printf("\nPara DIVIDIR digite: 4");
    printf("\nPara ENCERRAR o programa digite outro numero.\n");
    printf("\nEscolha a conta para o programa calcular: ");
    scanf("%d", &E);

    if((E<1) || (E>4))
        {
        printf("\nPROGRAMA ENCERRADO\n");
        return 0;
        }
        else
            {
            printf ("\nDigite o primeiro numero: ");
            scanf  ("%f",&N1);
            printf ("\nDigite o segundo numero: ");
            scanf  ("%f",&N2);
            }

    switch(E)
        {
        case 1: S=N1+N2;
        printf("\n\nA soma dos dois numeros e: %.2f\n\n", S);
        break;
        case 2: S=N1-N2;
        printf("\n\nA subtracao dos dois numeros e: %.2f\n\n", S);
        break;
        case 3: S=N1*N2;
        printf("\n\nA multiplicacao dos dois numeros e: %.2f\n\n", S);
        break;
        case 4:
            if((N1==0) || (N2==0))
                {
                printf("\nDivisao por Zero\n");
                printf("\nPROGRAMA ENCERRADO\n");
                return 0;
                }
                else
                    {
                    S=N1/N2;
                    printf("\n\nA divisao dos dois numeros e: %.2f\n\n", S);
                    break;
                    }
        }

    while(X!='=')
        {
        printf("Para continuar o programa, digite qualquer tecla.\nPara parar o programa, digite: =");
        X=getch();
            if(X=='=')
            {
                printf("\n\nPROGRAMA ENCERRADO\n");
                return 0;
            }
            else
            {
            printf("\n\nPara SOMAR digite: 1");
            printf("\nPara SUBTRAIR digite: 2");
            printf("\nPara MULTIPLICAR digite: 3");
            printf("\nPara DIVIDIR digite: 4");
            printf("\nPara ENCERRAR o programa digite outro numero.\n");
            printf("\nEscolha a conta para o programa calcular: ");
            scanf("%d", &E2);
            }

            if((E2<1) || (E2>4))
            {
            printf("\nPROGRAMA ENCERRADO\n");
            return 0;
            }
                else
                {
                printf("\nUltimo resultado: %.2f", S);
                printf("\nDigite um novo valor: ");
                scanf("%f", &NN);
                }

            switch(E2)
                {
                case 1: S=S+NN;
                printf("\n\nA soma dos dois numeros e: %.2f\n\n", S);
                break;
                case 2: S=S-NN;
                printf("\n\nA subtracao dos dois numeros e: %.2f\n\n", S);
                break;
                case 3: S=S*NN;
                printf("\n\nA multiplicacao dos dois numeros e: %.2f\n\n", S);
                break;
                case 4:
                    if((S==0) || (NN==0))
                        {
                        printf("\nDivisao por Zero\n");
                        printf("\nPROGRAMA ENCERRADO\n");
                        return 0;
                        }
                        else
                            {
                            S=S/NN;
                            printf("\n\nA divisao dos dois numeros e: %.2f\n\n", S);
                            break;
                            }
                }
        }
    return 0;
}
