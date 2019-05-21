#include <stdio.h>
#include <stdlib.h>

#define NCLIENTES 2 //####TESTE###
//#define NCLIENTES 200

struct Cad_Cliente{
	char nome[50], escolaridade;
	float renda;	
}; 

typedef struct Cad_Cliente TipoCliente;

TipoCliente clientes[NCLIENTES];

void Le_Registros(TipoCliente clientes[NCLIENTES], int *num)
{   
    *num = 0;
    int i;
    for(i=0; i<NCLIENTES; i++){
			 printf("Digite o nome do cliente:\n");
			 scanf("%s",clientes[*num].nome);
			 fflush(stdin);
			 printf("Digite a renda \n");
			 scanf("%f",&clientes[*num].renda);
			 fflush(stdin);
			 printf("Informe a escolaridade: \n (f) Fundamental \n (m) Medio \n (s) Superior \n");
			 scanf("%c", &clientes[*num].escolaridade);
			 fflush(stdin);
	}
}
    
void Renda_Inferior_5mil(TipoCliente clientes[NCLIENTES], int *num, char Nomes_ate_5mil[NCLIENTES], int *cont)
{
	  float inferior;
	  inferior = clientes[0].renda;
	  int i;
	  *cont=0;
	  
	  for(i=0;i<NCLIENTES;i++)
    {
      //Escolaridade Superior e renda menor que R$ 5.000,00
      if(clientes[i].escolaridade == 's' || clientes[i].escolaridade =='S' && clientes[i].renda < 5000)
      {
        *cont++;
      }
		};
}

void Maior_e_Menor_Renda(TipoCliente clientes[NCLIENTES], int *num, float pos_maior, float pos_menor)
{
	  int i = 0;
	  pos_menor = clientes[i].renda;
      pos_maior = clientes[i].renda;
	  
	  for(i=0;i<*num;i++){
			if(clientes[i].renda > pos_maior){
				pos_maior = clientes[i].renda;
				}
      }
       for(i=0;i<*num;i++){
			if(clientes[i].renda < pos_menor){
				pos_menor = clientes[i].renda;
				}
      }
    

}

void Exibir_Nomes(char Nomes_ate_5mil[NCLIENTES], int *cont)
{
   int i;
   if(*cont != 0) {
       printf("\n\n Clientes que possuem a renda inferior a 5mil e possuem a escolaridade superior \n");
       for(i = 0; i < *cont; i++){
	       printf("Nome do cliente: %i \n", Nomes_ate_5mil[i]);
       }
   }
}

int main()
{
    TipoCliente clientes[NCLIENTES];
	int *num, *cont;
	float pos_maior, pos_menor;
	char Nomes_ate_5mil[NCLIENTES];
	
	Le_Registros(clientes, &num);
	
	Renda_Inferior_5mil(clientes, &num, Nomes_ate_5mil, &cont);
	
	Maior_e_Menor_Renda(clientes, &num, pos_maior, pos_menor);
	
	Exibir_Nomes(Nomes_ate_5mil, &cont);	
}
