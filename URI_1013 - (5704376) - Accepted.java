import java.io.IOException;
 
import java.util.Scanner;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner o = new Scanner(System.in);
		int a , b,c;
		a = o.nextInt();
		b = o.nextInt();
		c = o.nextInt();
		
		if(a > b && a > c){
			
			System.out.println(a + " eh o maior");
		}
		else if(b > a && b >c ){
			System.out.println(b + " eh o maior");
		}
		else{
			System.out.println(c + " eh o maior");
		}
    }
 
}