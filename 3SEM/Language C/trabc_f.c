#include <stdio.h>
#include <stdlib.h>

#define NCLIENTES 2 //####TESTE###
//#define NCLIENTES 200

struct Cad_Cliente{
	char nome[50], escolaridade;
	float renda;	
}; 

typedef struct Cad_Cliente TipoCliente;

TipoCliente dados[NCLIENTES];

int Le_Registros(TipoCliente dados[NCLIENTES])
{   	
    int i;
    for(i=0; i<NCLIENTES; i++){
			 printf("Digite o nome do cliente:\n");
			 scanf("%s",dados[i].nome);
			 fflush(stdin);
			 printf("Digite a renda \n");
			 scanf("%f",&dados[i].renda);
			 fflush(stdin);
			 printf("Informe a escolaridade: \n (f) Fundamental \n (m) Medio \n (s) Superior \n");
			 scanf("%c", &dados[i].escolaridade);
			 fflush(stdin);
	}
  return(i);
}
    
char Renda_Inferior_5mil()
{
	  float inferior;
	  inferior = dados[0].renda;
	  int i;
	  char nomes_ate_5mil[50];
	  int count;
	  
	  for(i=0;i<NCLIENTES;i++)
    {
      //Escolaridade Superior e renda menor que R$ 5.000,00
      if(dados[i].escolaridade == 's' || dados[i].escolaridade =='S' && dados[i].renda < 5000)
      {
        nomes_ate_5mil[i] = dados[i].nome;
        count++;
      }
		},
	  return(nome_inferior);
}

float Maior_e_Menor_Renda()
{
	  float pos_maior;
	  maior = dados[0].renda;
	  int i;
	  for(i=0;i<NCLIENTES;i++){
			if(dados[i].renda > pos_maior){
				pos_maior = dados[i].renda;
				}
    }
    

	  return(pos_maior, &pos_menor);
}

int main(){

