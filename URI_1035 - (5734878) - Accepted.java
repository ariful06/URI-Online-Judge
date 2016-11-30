import java.io.IOException;
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
       Scanner input = new Scanner(System.in);
		int A , B , C , D;
		A  = input.nextInt();
		B  = input.nextInt();
		C  = input.nextInt();
		D  = input.nextInt();
		
		if((A%2==0)&& (B > C) && (D > A) && (C >= 0) && (D >= 0) && ((C+D) > (A+B))){
			System.out.println("Valores aceitos");
		}
		else{
			System.out.println("Valores nao aceitos");
			
		}
    }
 
}