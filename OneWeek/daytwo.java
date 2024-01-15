package OneWeek;
import  java.util.Scanner;
public class daytwo {
	public static int PosicaoNemo(String texto) {
		int palavra = 1;
		boolean verificaE = false;
		boolean verificaM = false;
		boolean verificaN = false;
		for(int i = 0; i < texto.length(); i++){
			char c = texto.charAt(i);
			if(c == 32) {
				palavra++;
			}else if(c == 'n' ) {
				verificaN = true;
			}else if(verificaN == true && c == 'e'){
				verificaE = true;
				verificaN = false;
			}else if(verificaE == true && c == 'm') {
				verificaE = false;
				verificaM = true;
			}else if(verificaM == true && c =='o') {
				return palavra;
			}
			}
		return 0;
		}
	public static void main(String[] args) {
		Scanner leitor = new Scanner(System.in);
		System.out.println("Digite o texto contendo Nemo:");
		String frase = leitor.nextLine();
		System.out.println("Nemo encontrado em "+PosicaoNemo(frase));
	}

}
