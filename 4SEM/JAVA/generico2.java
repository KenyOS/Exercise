
public class Teste {

	public static void main(String[] args) {
		
		Integer[] v1 = {89, 99, 73, 4};
		Double[] v2 = {5.25, 10.0, 77.2, 9.99};
		
		//imprimir(v2);
		System.out.println(maior(5, 6, 2));
		System.out.println(maior(5.5, 0.6, 0.2));
		System.out.println(maior("Ana", "ANA", "ana"));
	}
	
	public static <T> void imprimir(T[] vetor) {
		for(T e : vetor) {
			System.out.printf("%s", e);
		}
	}

	public static <T extends Comparable<T>> T maior(T x, T y, T z) {
		T aux = x;
		if(y.compareTo(aux) > 0) {
			aux = y;
		}
		if(z.compareTo(aux) > 0) {
			aux = z;
		}
		
		return aux;
	}
}
