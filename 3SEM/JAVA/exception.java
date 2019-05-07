import static javax.swing.JOptionPane.*;
import static java.lang.Integer.parseInt;

public class Teste {
	public static void main(String[] args) {
		int valor1, valor2;
		double resultado;
		
		try {
			valor1 = parseInt(showInputDialog("Informe o primeiro valor"));
			valor2 = parseInt(showInputDialog("Informe o segundo valor"));
			resultado = (double)valor1 / valor2;
			showMessageDialog(null, "Resultado = " +resultado);
		}
		catch(NumberFormatException e) {
			showMessageDialog(null, "Você deve digitar um número\n" +e);
		}
		catch(ArithmeticException e) {
			showMessageDialog(null, "Não existe divisão por zero\n" +e);
		}
	}
}
