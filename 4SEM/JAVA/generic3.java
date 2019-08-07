package t1;

public class T1 {
	
	public static void main(String[] args) {
		
		Integer[] v1 = {100, 120, 2, 5};
		System.out.println(maior(v1));
		
	}
	
	public static <T extends Comparable<T>> T maior(T[] vetor) {
		T aux = vetor[0];
		
		for(T valor : vetor) {
			if(valor.compareTo(aux) > 0) {
			aux = valor;
			}
		}
		return aux;
	}
}
