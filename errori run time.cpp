public class DivisioneSicura {
    public static void main(String[] args) {
        int numeratore = 10;
        int denominatore = 0;
        
        // Controlla se il denominatore è zero prima di fare la divisione
        if (denominatore == 0) {
            System.out.println("Errore: divisione per zero!");
        } else {
            int risultato = numeratore / denominatore;
            System.out.println("Risultato: " + risultato);
        }
    }
}
