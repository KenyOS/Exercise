#include <stdio.h>
#include <stdlib.h>

#define NCLIENTES 2 //####TESTE###
//#define NCLIENTES 200

struct Cad_Cliente{
	char nome[50], escolaridade[2];
	float renda;	
};

typedef struct Cad_Cliente TipoCliente;

TipoCliente dados[NCLIENTES];
    
float inferior()
{
	  float inferior;
	  inferior = dados[0].renda;
	  int i;
	  char nome_inferior[50];
	  int count;
	  
	  for(i=0;i<NCLIENTES;i++)
	  {
	      //Escolaridade Superior e renda menor que R$ 5.000,00
		if(dados[i].escolaridade == 's' && dados[i].renda < 5000)
		{
			nome_inferior[i] = dados[i].nome;
			count++;
		}
	  }
	  return(nome_inferior);
}

int main(){
	
	int i;
	for(i=0;i<NCLIENTES;i++){
			 printf("Digite o nome do cliente:\n");
			 scanf("%s",dados[i].nome);
			 __fpurge(stdin);
			 printf("Digite a renda \n");
			 scanf("%f",&dados[i].renda);
			 __fpurge(stdin);
			 printf("Informe a escolaridade: \n (f) Fundamental \n (m) Medio \n (s) Superior \n");
			 scanf("%c", &dados[i].escolaridade);
			 __fpurge(stdin);
			 }

	
    }

}
