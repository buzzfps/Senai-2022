package Doacao;

import javax.swing.JOptionPane;

public class Doador {
	private String nome;
	private int idade;
	private char sexo;
	private float peso;
	
	
	
	public Doador(String nome, String idade, String sexo, String peso) {
		this.nome = nome;
		this.sexo = (char) Integer.parseInt(sexo);
		try {
		this.idade = Integer.parseInt(idade);
		this.peso = Float.parseFloat(peso);
	}catch(Exception e) {
		JOptionPane.showMessageDialog(null, e);
	}
}



	String obterDiagnostico(){
		if(this.idade <= 18 && this.idade <= 69 && this.peso <= 50)
			return "você está apto para doar";
		else
			return "Você não está apto para doar";
	}



	@Override
	public String toString() {
		return "Doador [nome=" + nome + ", idade=" + idade + ", sexo=" + sexo + ", peso=" + peso
				+ ", obterDiagnostico()=" + obterDiagnostico() + "]";
	}
	
	
}
