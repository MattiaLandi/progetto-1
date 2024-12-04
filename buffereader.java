import java.io.*;

public class Main {
    public static void main(String[] args) {
        
        BufferedReader lettore = new BufferedReader(new InputStreamReader(System.in));

        try {
            
            System.out.print("Inserisci un intero: ");
            int intero = Integer.parseInt(lettore.readLine()); 
            System.out.println("Intero inserito: " + intero);

            
            System.out.print("Inserisci un numero reale (double): ");
            double reale = Double.parseDouble(lettore.readLine()); 
            System.out.println("Numero reale inserito: " + reale);

           
            System.out.print("Inserisci un valore booleano (true/false): ");
            boolean booleano = Boolean.parseBoolean(lettore.readLine()); 
            System.out.println("Valore booleano inserito: " + booleano);

           
            System.out.print("Inserisci una stringa: ");
            String stringa = lettore.readLine(); 
            System.out.println("Stringa inserita: " + stringa);
        } catch (IOException e) {
            System.out.println("Errore di input/output: " + e.getMessage());
        } catch (NumberFormatException e) {
            System.out.println("Errore di formato nei dati immessi.");
        }
    }
}
