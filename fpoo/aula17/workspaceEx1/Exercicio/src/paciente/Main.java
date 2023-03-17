package paciente;

import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JButton;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPanel;
import javax.swing.JTextArea;
import javax.swing.JTextField;

import pacientes.PacienteDAO;

public class Main extends JFrame implements ActionListener{
	private static final long serialVersionUID = 1L;
		private static final long serialVersionID = 1L;
		JPanel painel;
		JLabel rotuloNome, rotuloPeso, rotuloAltura, rotuloResultado;
		JTextField campoNome, campoPeso, campoAltura;
		JButton calcular, limpar;
		JTextArea areaResultado;
		PacienteDAO dd = new PacienteDAO();
		String saidaArquivo = "";
		
		Main(){
			setTitle("Avaliação de Saúde");
			setBounds(50, 50, 755, 600);
			setDefaultCloseOperation(EXIT_ON_CLOSE);
			painel = new JPanel();
			setContentPane(painel);
			setLayout(null);

			rotuloNome = new JLabel("Nome:");
			rotuloNome.setBounds(20, 20, 200, 30);
			painel.add(rotuloNome);

			rotuloPeso = new JLabel("Peso:");
			rotuloPeso.setBounds(20, 50, 200, 30);
			painel.add(rotuloPeso);
			
			rotuloAltura = new JLabel("Altura:");
			rotuloAltura.setBounds(20, 80, 200, 30);
			painel.add(rotuloAltura);
			
			rotuloResultado = new JLabel("Resultado:");
			rotuloResultado.setBounds(20, 120, 200, 30);
			painel.add(rotuloResultado);
			
			campoNome = new JTextField();
			campoNome.setBounds(220, 20, 500, 30);
			painel.add(campoNome);
			
			campoPeso = new JTextField();
			campoPeso.setBounds(220, 50, 500, 30);
			painel.add(campoPeso);
			
			campoAltura = new JTextField();
			campoAltura.setBounds(220, 80, 500, 30);
			painel.add(campoAltura);
			
			calcular = new JButton("Calcular");
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


	@Override
	public void actionPerformed(ActionEvent e) {
		if(e.getSource() == calcular) {
			Paciente p = new Paciente(campoNome.getText(),campoPeso.getText(),campoAltura.getText());
			saidaArquivo += p.toCSV();
			dd.salvar(saidaArquivo);
			areaResultado.setText(p.toString());
		}
		if(e.getSource() == limpar) {
			campoNome.setText("");
			campoPeso.setText("");
			campoAltura.setText("");
			areaResultado.setText("");
		}
		
	}

}
