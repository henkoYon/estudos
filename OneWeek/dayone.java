package OneWeek;
import java.util.Scanner;
public class dayone {
	public static int age(int idade) {
		return idade * 365;
	}
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		int idade;
		Scanner lerIdade = new Scanner(System.in);
		Scanner ler = new Scanner(System.in);
		boolean rodar = true;
		while(rodar) {
			System.out.println("Digite sua idade:");
			idade = lerIdade.nextInt();
			if(idade >= 0) {
				int dia = age(idade);
				System.out.println(idade + " ---> "+ dia);
				System.out.println("Deseja continuar(1-Sim/0-Nao):");
				int verificador = ler.nextInt();
				if(verificador == 0){ rodar = false;}
			}else {
				System.out.println("Idade Invalida...");
			}
		}
	}

}
