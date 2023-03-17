package ex1;

import javax.swing.JOptionPane;

public class Mensagens {

	public static void main(String[] args) {
		System.out.println("teste");
		//Entrada
		String texto = JOptionPane.showInputDialog("Digite seu nome completo:");
		//Processamento
		String nomes[] = texto.split(" ");
		texto = "Seu primeiro nome possui "+nomes[0].length()+" letras\n";
		if(nomes.length > 2)
			texto += "Seu nome do meio possui "+nomes[1].length()+"letras\n";
		else
			texto += "Você não possui nome do meio";
		texto += "Seu ultimo nome possui "+nomes[nomes.length-1].length()+" letras\n";
		
		//saida
		JOptionPane.showMessageDialog(null, texto);
	}

}
