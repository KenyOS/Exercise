package t1;

public class TestePilha {
	
	public static void main(String[] args) {
		
		Pilha<String> pilha = new Pilha<>();
		pilha.push("selmini");
		pilha.push("ana");
		pilha.push("josé");
		
		System.out.println(pilha.pop());
		System.out.println(pilha.pop());
	}
}
