//By Rafa

package btc;

import java.util.Scanner;

public class Calculator {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		
		
		int dias;
		double valor, rendaDiaria, rendaMes, rendaLucro = 0;
		Scanner entrada;		
		
		entrada = new Scanner(System.in);		
		
		System.out.println("Digite o valor inicial: ");
		valor = entrada.nextDouble();		
		System.out.println("Digite a quantidade de dias:");
		dias = entrada.nextInt();
		
		for(int i = 0; i < dias; i++) {
			rendaDiaria = valor/25;
			
			rendaLucro += rendaDiaria;			
		 	
			if(rendaLucro >= 5) {
				valor += rendaLucro;				
				rendaLucro = 0;
			}
		}
		System.out.println("=========================================");
		System.out.println("Valor final: " + valor);
	}

}
