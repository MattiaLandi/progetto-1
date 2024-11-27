import java.util.Scanner;

public class RaccogliDati {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);
        
       
        System.out.print("Inserisci la tua età: ");
        int eta = scanner.nextInt();  
        
       
        scanner.nextLine(); 
        
        
        System.out.print("Inserisci il tuo nome: ");
        String nome = scanner.nextLine(); 
        
        
        System.out.println("Età: " + eta);
        System.out.println("Nome: " + nome);
        
       
        scanner.close();
    }
}
