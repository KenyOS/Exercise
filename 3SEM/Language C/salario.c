	#include <stdio.h>
	
	int main()
	{
		float base, novo;
		int tempo;
		printf("Digite o salario base: ");
		scanf("%f", &base);
		
		printf("\ndigite o tempo de empresa: ");
		scanf("%d", &tempo);
		
	if(tempo <= 2)
		novo = base * 1.00;
	else if(tempo <= 5)
			novo = base * 1.05;
		else if (tempo <= 10)
			novo = base * 1.07;
				else
				novo = base* 1.09;
	
	printf("O novo salario: R$0.2f \n", novo);
	}
