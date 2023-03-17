package padrao;
import java.io.BufferedReader;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.io.IOException;

public class Main {
	
	static BufferedReader br;
	static int i = 0;
	
	public static void main(String[] args) {
		try {
			br = new BufferedReader(new FileReader("./bd/dados.txt"));
			String linha = br.readLine();
			while(linha != null) {
				String palavras[] = linha.split(" ");
				System.out.print(palavras[0]+"\t"+palavras[1]);
				System.out.print(linha);
				i++;
				System.out.print("\tA linha possui "+linha.length()+" letras\t");
				System.out.println(+palavras.length+" palavras");
				linha = br.readLine();
			}
			
			
			br.close();
		} catch (FileNotFoundException e) {
			System.out.println("Arquivo não encontrado, erro: "+e);
		} catch (IOException e) {
			System.out.println("Erro ao ler o arquivo, erro: "+e);
		}
		
		System.out.printf("A quantidade de linhas do programa é : %d", i);
	}
}







