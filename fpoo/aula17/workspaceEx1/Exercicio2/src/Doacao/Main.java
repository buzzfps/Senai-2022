package Doacao;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;



public class Main extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
	private static final long serialVersionID = 1L;
	JPanel painel;
	JLabel rotuloNome, rotuloIdade, rotuloSexo, rotuloPeso, rotuloResultado;
	JTextField campoNome, campoIdade, campoSexo, campoPeso, campoResultado;
	JButton calcular, limpar;
	JTextArea areaResultado;
	
	Main(){
		setTitle("Doação de Sangue");
		setBounds(50, 50, 755, 600);
		setDefaultCloseOperation(EXIT_ON_CLOSE);
		painel = new JPanel();
		setContentPane(painel);
		setLayout(null);

		rotuloNome = new JLabel("Nome:");
		rotuloNome.setBounds(20, 20, 200, 30);
		painel.add(rotuloNome);

		rotuloIdade = new JLabel("Idade:");
		rotuloIdade.setBounds(20, 50, 200, 30);
		painel.add(rotuloIdade);
		
		rotuloSexo = new JLabel("Sexo:");
		rotuloSexo.setBounds(20, 80, 200, 30);
		painel.add(rotuloSexo);
		
		rotuloPeso = new JLabel("Peso:");
		rotuloPeso.setBounds(550, 80, 200, 30);
		painel.add(rotuloPeso);
		
		rotuloResultado = new JLabel("Resultado:");
		rotuloResultado.setBounds(20, 120, 200, 30);
		painel.add(rotuloResultado);
		
		campoNome = new JTextField();
		campoNome.setBounds(220, 20, 500, 30);
		painel.add(campoNome);
		
		campoIdade = new JTextField();
		campoIdade.setBounds(220, 50, 500, 30);
		painel.add(campoIdade);
		
		campoSexo = new JTextField();
		campoSexo.setBounds(220, 80, 100, 30);
		painel.add(campoSexo);
		
		campoPeso = new JTextField();
		campoPeso.setBounds(600, 80, 100, 30);
		painel.add(campoPeso);
		
		calcular = new JButton("Adicionar");
		calcular.setBounds(250, 120, 200, 30);
		painel.add(calcular);
		calcular.addActionListener(this);
		
		limpar = new JButton("Limpar");
		limpar.setBounds(500, 120, 200, 30);
		painel.add(limpar);
		limpar.addActionListener(this);
		
		areaResultado = new JTextArea();
		areaResultado.setBounds(20, 160, 700, 400);
		painel.add(areaResultado);
	}
	
	
	public static void main(String[] args) {
		System.out.println("Este programa está funcionando");
		new Main().setVisible(true);

	}


	
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == calcular) {
			Doador p = new Doador(campoNome.getText(),campoIdade.getText(),campoSexo.getText(),campoPeso.getText());
			areaResultado.setText(p.toString());
		}
		if(e.getSource() == limpar) {
			campoNome.setText("");
			campoIdade.setText("");
			campoSexo.setText("");
			campoPeso.setText("");
			areaResultado.setText("");
		}
		
	}

}
