
public class TesteDisciplina {
	public static void main(String[] args) {
		Disciplina disciplina = new Disciplina("POO", "Ismael");
		
		//Criar um novo Aluno
		disciplina.matricularAluno(new Aluno(10, "Selmini"));
		disciplina.matricularAluno(new Aluno(10, "Daniela"));
		disciplina.matricularAluno(new Aluno(10, "Patricia"));
		
		disciplina.imprimirAluno();
	}
}
