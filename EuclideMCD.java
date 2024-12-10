import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
       
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Inserisci il primo numero (a): ");
        int a = scanner.nextInt();
        System.out.print("Inserisci il secondo numero (b): ");
        int b = scanner.nextInt();

        
        scanner.close();

       
        int mcd = calcolaMCD(a, b);

       
        System.out.println("Il MCD tra " + a + " e " + b + " è: " + mcd);
    }

    
    public static int calcolaMCD(int n1, int n2) {
        while (n2 != 0) {
            int resto = n1 % n2;  
            n1 = n2;              
            n2 = resto;            
        }
        return n1;  
    }
}
