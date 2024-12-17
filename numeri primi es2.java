import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        
        System.out.print("Quanti numeri primi vuoi generare? ");
        int contatore = scanner.nextInt();

        int num = 2; 
        int numeriPrimiTrovati = 0; 

        do {
            if (èPrimo(num)) {
                System.out.println(num); 
                numeriPrimiTrovati++;
            }
            num++;
        } while (numeriPrimiTrovati < contatore);

        scanner.close();
    }

   
    public static boolean èPrimo(int n) {
        if (n <= 1) return false; 
        for (int i = 2; i <= n / 2; i++) { 
            if (n % i == 0) return false; 
        }
        return true; 
    }
}
