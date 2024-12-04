import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Inserisci il numero di partite vinte: ");
        int partVinte = scanner.nextInt();

        System.out.print("Inserisci il numero di partite pareggiate: ");
        int partPareggiate = scanner.nextInt();

        System.out.print("Inserisci il numero di partite perse: ");
        int partPerse = scanner.nextInt();

        
        System.out.print("Inserisci il nome della squadra: ");
        scanner.nextLine();  
        String NomeSquadra = scanner.nextLine();

        // Calcolo  punteggio
        int punteggio = (partVinte * 3) + (partPareggiate * 1) + (partPerse * 0);

        // Stampa  risultato
        System.out.println("\nClassifica della squadra " + NomeSquadra + ":");
        System.out.println("Punti: " + punteggio);
        scanner. close();
    }
}
