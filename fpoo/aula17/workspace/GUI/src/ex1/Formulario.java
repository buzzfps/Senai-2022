package ex1;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;

public class Formulario extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
	JPanel painel;
	JLabel rotuloNome, rotuloIdade, rotuloResultado;
	JTextField campoNome, campoIdade;
	JTextArea areaResultado;
	JButton botao, limpar;
	String resultado = "", faseDaVida;
	int idade;
	
		Formulario(){
		setTitle("Entrada Processamento e Saída");
		setBounds(50,50,800,600);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);
		
		rotuloNome = new JLabel("Nome:");
		rotuloNome.setBounds(20,20,200,30);
		painel.add(rotuloNome);
		
		
		rotuloIdade = new JLabel("Idade:");
		rotuloIdade.setBounds(20,50,200,30);
		painel.add(rotuloIdade);
		
		rotuloResultado = new JLabel("Resultado:");
		rotuloResultado.setBounds(20,80,200,30);
		painel.add(rotuloResultado);
		
		campoNome = new JTextField();
		campoNome.setBounds(220,20,400,30);
		painel.add(campoNome);
		
		campoIdade = new JTextField();
		campoIdade.setBounds(220,50,400,30);
		painel.add(campoIdade);
		
		botao = new JButton("Processar");
		botao.setBounds(220,80,200,30);
		painel.add(botao);
		botao.addActionListener(this);
		
		areaResultado = new JTextArea();
		areaResultado.setBounds(20,110,700,500);
		painel.add(areaResultado);
		
		limpar = new JButton("Limpar");
		limpar.setBounds(420,80,200,30);
		painel.add(limpar);
		limpar.addActionListener(this);
	}
	
	public static void main(String[] args) {
		System.out.println("Este programa está funcionando");
		new Formulario().setVisible(true);
	}

	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == botao) {
			resultado += campoNome.getText()+"\t";
			resultado += campoIdade.getText()+"\t";
			idade = Integer.parseInt(campoIdade.getText());
			if(idade < 10)
				faseDaVida = "Criança";
			else if(idade < 22)
				faseDaVida = "jovem";
			else if(idade < 60)
				faseDaVida = "Adulto";
			else
				faseDaVida = "Idoso";
			resultado += faseDaVida+"\n";
			areaResultado.setText(resultado);
		}
		if(e.getSource() == limpar) {
			resultado = "";
			areaResultado.setText(resultado);
		}
		
	}

}
