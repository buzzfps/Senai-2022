package paciente;

public class Paciente {
	private String nome;
	private float peso;
	private float altura;

	public Paciente() {}
	public Paciente(String nome, String peso, String altura) {
		this.nome = nome;
		this.peso = Float.parseFloat(peso);
		this.altura = Float.parseFloat(altura);
	}
	
	float obterIMC() {
		return peso /(altura*altura);
	}
	
	String obterDiagnostico() {
		if(obterIMC() < 18.5f)
			return "Peso baixo";
		else if(obterIMC() <= 24.9f)
			return "Peso normal";
		else if(obterIMC() <= 29.9f)
			return "Sobrepeso";
		else if(obterIMC() <= 34.9f)
			return "Obesidade";
		else if(obterIMC() <= 39.9f)
			return "Obesidade severa";
		else 
			return "Obesidade Mórbida";
	}

	@Override
	public String toString() {
		return ""+nome+"\n peso: "+peso+" \n altura: "+altura+" \n IMC: "+obterIMC()+" \n "+obterDiagnostico()+"";
	}
	public String toCSV() {
		return String.format("%s;%f;%f;%f;%s;\r\n", nome, peso, altura, obterIMC(), obterDiagnostico());
	}


	
	
	
}
