#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char infixa[50],pilha[50],posfixa[50];
    char aux;
    int larg=0,cont=0,cont2=0,cont3=0,solt=0;

    printf("Digite a expressao: ");
    fflush(stdin);
    scanf("%s",infixa);

    larg=strlen(infixa);

//  printf("\n %d",larg);

    while(cont<larg){
        if(isdigit(infixa[cont])){

			
            posfixa[cont2]=infixa[cont];
            cont2++;
            posfixa[cont2] = 0;
            printf("entrou digito\n");

        }else{
            printf("entrou operador\n");
            if(infixa[cont] == '*' && infixa[cont] == '/'){
                printf("entrou operacao multiplicacao ou divisao\n");
                if(cont3!=0){

                    aux=pilha[cont3];
                    cont3--;
                        if(aux != '+' && aux != '-'){
                        posfixa[cont2]=aux;
                        cont2++;
                    }else{

                    pilha[cont3]=aux;
                    cont3++;
                    }

                }else{
                        pilha[cont3]=infixa[cont];
                        cont3++;
                }   

            }else{
                if(cont3==0){
                    pilha[cont3]=infixa[cont];
                    printf("pilha ta vazia \n");
                    cont3++;
                }else{
                    printf("pilha nao ta vazia \n");
                    aux=pilha[cont3];
                    cont3--;
                    posfixa[cont2]=aux;
                    cont2++;
                }
                pilha[cont3]=infixa[cont];
                cont3++;
            }

        }

        cont++;

    }
        while(cont3!=0){
            aux=pilha[cont3];
            cont3--;
            posfixa[cont2]=aux;
            cont2++;

        }
        printf("%s",posfixa);
}
