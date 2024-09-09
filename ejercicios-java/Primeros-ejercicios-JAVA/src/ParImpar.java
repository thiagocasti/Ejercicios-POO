
public class ParImpar {
	public static void main(String[] args) {
		int i = 1;
		do {
			if(i % 2 == 0) {
				System.out.println(i + " Es par");
			}
			else {
				System.out.println(i + " Es impar");
			}
			i++;
		}while(i <= 100);
	}
}
