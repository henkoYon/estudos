package OneWeek;

class ContadorChurrasqueira{
	String[] grill = new String[5];
	int contadorVeg;
	int contadorCar;
	public  int verificadorC(String[] Grill) {
		int Conta = 0;
		for(int i = 0; i < Grill.length;i++) {
			
			for(int j = 0; j < Grill[i].length();j++) {
			char c = Grill[i].charAt(j);
			if(c == 'x') {
				Conta++;
				break;
			}
			}
		}
		return Conta;
	}
	public int verificadorV(String[] Grill) {
		int Conta = 0;
		for(int i = 0; i < Grill.length;i++) {
			boolean ver = true;
			for(int j = 0; j < Grill[i].length();j++) {
			char c = Grill[i].charAt(j);
			if(c == 'x') {
				ver = false;
				break;
			}
			}
			if(ver == true) {
				Conta++;
			}
		}
		return Conta;
	}
}
public class daythree {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		ContadorChurrasqueira churras = new ContadorChurrasqueira();
		churras.grill[0] =   "--xo--x--ox--";
		churras.grill[1] =	  "--xx--x--xx--";
		churras.grill[2] =  "--oo--o--oo--";
		churras.grill[3] = "--xx--x--ox--";
		churras.grill[4] = "--xx--x--ox--";
		churras.contadorCar = churras.verificadorC(churras.grill);
		churras.contadorVeg = churras.verificadorV(churras.grill);
		System.out.println(churras.contadorCar + ","+ churras.contadorVeg);
	}

}
