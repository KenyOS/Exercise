
#define NCLIENTES 200

struct Cad_Cliente{
	char nome[50], escolaridade[15];
	float renda;	
};

typedef struct Cad_Cliente TipoCliente;

int Le_Registros(TipoCliente clientes[NCLIENTES])
    
int n=0;
char clientes[], resp;
do{
printf("digite nome do cliente:");
fflush(stdin);
gets(cliente[n].nome);
printf("digite Nivel de Escolaridade do cliente:");
fflush(stdin);
gets(cliente[n].escolaridade);
printf("digite a renda:");
scanf("%f", &cliente[n].renda);
n++;

system("cls");
	
}
while(resp == 'S' || resp == 's'){
return (n)
}

int main(){
	TipoCliente clientes[NCLIENTES];
}
