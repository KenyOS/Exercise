package t1;
import java.util.ArrayList;

public class Pilha<T> {
	private ArrayList<T> lista = new ArrayList<>();
	
	public void push(T valor) {
		lista.add(valor);
	}
	
	public T pop() {
		return lista.remove(lista.size()-1);
	}
}
