import java.io.IOException;
 
import java.text.DecimalFormat;
import java.util.Scanner;
import java.text.DecimalFormat;
public class Main {
 
    public static void main(String[] args) throws IOException {
 
      Scanner leia = new Scanner(System.in);
		 DecimalFormat f = new DecimalFormat("##.00");
		 int X = leia.nextInt();
         int Y = leia.nextInt();
         double total;
         switch (X){
         case 1:
            total = 4.00 * Y;
            System.out.println("Total: R$ " + f.format(total));
            break;
         case 2:
            total = 4.50 * Y;
            System.out.println("Total: R$ " +f.format(total));
            break;
         case 3:
            total = 5.00 * Y;
            System.out.println("Total: R$ " +f.format(total));
            break;
         case 4:
            total = 2.00 * Y;
            System.out.println("Total: R$ " + f.format(total));
            break;
         case 5:
            total = 1.50 * Y; 
            System.out.println("Total: R$ "+ f.format(total));
            break;
         }
    }
 
}