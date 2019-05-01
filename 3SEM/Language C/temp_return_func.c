#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 30

int le_temp(float temp[N]) {
	int i=0, resp;
	do {
	printf("Digite a Temperatura: ");
	scanf("%f", &temp[i);
	i++;
	printf("Digite 1 para continuar");
	scanf("%d", &resp);	
	}while(i<N && resp==1)
	return(i)
}
	
void Max_Min(float temp[N], int n, float *maxima, float *minima)
{
	int i;
	*maxima = temp[0];
	*minima = *maxima;
	for(i=1;i<n;i++) {
		if (temp[i] > *maxima)
			*maxima = temp[i];
		if (temp[i] < *minima)
			*minima = temp[i];
	}
}

int main() {
	float temp[N];
	int n;
	float max, min;
	n = le_temp(temp);
	
	
}
