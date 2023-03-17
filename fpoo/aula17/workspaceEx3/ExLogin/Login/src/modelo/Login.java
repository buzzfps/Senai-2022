package modelo;

public class Login {
	private String Nome;
	private String Senha;
	
	public Login(String nome, String senha) {
		this.Nome = nome;
		this.Senha = senha;
	}

	public String getNome() {
		return Nome;
	}

	public void setNome(String nome) {
		Nome = nome;
	}

	public String getSenha() {
		return Senha;
	}

	public void setSenha(String senha) {
		Senha = senha;
	}
	
}
