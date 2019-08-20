import java.util.ArrayList;
import java.util.HashSet;
import java.util.List;
import java.util.Set;

public class Disciplina {
	private String nome;
	private String professor;
	//Criar uma Lista Aula
	private List<Aula> listaAula;
	//Interface Set - conjunto de alunos - Lista de Aluno
	
	private Set<Aluno> listaAluno;
	public Disciplina(String nome, String professor) {
		super();
		this.nome = nome;
		this.professor = professor;
		this.listaAula = new ArrayList<Aula>();
		this.listaAluno = new HashSet<Aluno>();
	}
	
	public boolean estaMatriculado(Aluno aluno) {
		return listaAluno.contains(aluno);
	}
	
	public void matricularAluno(Aluno aluno) {
		this.listaAluno.add(aluno);
	}

	public void adicionarAula(Aula aula) {
		this.listaAula.add(aula);
	}
	
	public int getDuracaoTotal() {
		int aux = 0;
		for(Aula aula : listaAula) {
			aux += aula.getDuracao();
		}
		
	}
	
	
}
