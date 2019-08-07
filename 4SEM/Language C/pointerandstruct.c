#INCOMPLETE
#include <stdio.h>

struct Cad_Aluno {
	char nome[50];
	float nota1, nota2, media;
};
	typedef struct Cad_Aluno TipoAluno;
	
	void le_registro(TipoAluno *p_aluno )
	{
	printf("Digite a nota 1\n");
	scanf("%d", &p_aluno->nota1);
	printf("Digite a nota 2\n");
	scanf("%d", &p_aluno->nota2);
	printf("Digite o nome do Aluno\n");
	scanf("%s", &p_aluno->nome);
	}
	
	void calcula_media(TipoAluno aluno) {
	p_aluno->media = (p_aluno->nota1+p_aluno-:nota2)/2;
	}
	
	void escreve(TipoAluno aluno) {
		printf(" Nome e"
	}
	
	int main() {
	TipoAluno aluno;
	le_registro(&aluno);
	escreve(aluno)
	}
};
