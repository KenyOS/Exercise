public class Teste {

	public static void main(String[] args) {
		
		Integer[] v1 = {89, 99, 73, 4};
		Double[] v2 = {5.25, 10.0, 77.2, 9.99};
		
		imprimir(v2);
	}
	
	public static <T> void imprimir(T[] vetor) {
		for(T e : vetor) {
			System.out.printf("%s", e);
		}
	}
}
