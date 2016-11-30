import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
       float a, b, c;
		 DecimalFormat f = new DecimalFormat("##.0");
		Scanner userInput = new Scanner(System.in);
		a = userInput.nextFloat();
		b = userInput.nextFloat();
		c = userInput.nextFloat();
		
		if( ( (a + b) > c ) && ( (a + c) > b ) && ( (b + c) > a ) ) {
			float perimeter; 
			perimeter = a + b + c;
			System.out.println("Perimetro = " +  perimeter);
		} else {
			float area = ( (a+b)/2 ) * c;
			System.out.println("Area = " +  area);
		}	
		
		userInput.close();
 
    }
 
}