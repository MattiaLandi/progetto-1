import java.util.Scanner;  

public class StampaStringa {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Inserisci una stringa di caratteri: ");
        String input = scanner.nextLine(); 

       
        System.out.println("Hai inserito: " + input);

        scanner.close();
    }
}
