import java.util.Scanner;

public class Main  {
    public static void main(String[] args) {
        
        Scanner scanner = new Scanner(System.in);

       
        System.out.print("Inserisci il raggio del cerchio: ");
        double raggio = scanner.nextDouble();
        
        System.out.print("Inserisci il lato del quadrato: ");
        double lato = scanner.nextDouble();
        
       
        double perimetroQuadrato = 4 * lato;
        double areaQuadrato = lato * lato;
        
       
        double perimetroCerchio = 2 * Math.PI * raggio;
        double areaCerchio = Math.PI * raggio * raggio;
        
        
        System.out.println("\nPERIMETRO :");
        System.out.println("QUADRATO = " + perimetroQuadrato);
        System.out.println("CERCHIO = " + perimetroCerchio);
        
        System.out.println("\nAREA :");
        System.out.println("QUADRATO = " + areaQuadrato);
        System.out.println("CERCHIO = " + areaCerchio);
        
       
        if (perimetroQuadrato > perimetroCerchio) {
            System.out.println("\nPERIMETRO più grande: QUADRATO");
        } else if (perimetroCerchio > perimetroQuadrato) {
            System.out.println("\nPERIMETRO più grande: CERCHIO");
        } else {
            System.out.println("\nPERIMETRO più grande: entrambi uguali");
        }
        
        
        if (areaQuadrato > areaCerchio) {
            System.out.println("AREA più grande: QUADRATO");
        } else if (areaCerchio > areaQuadrato) {
            System.out.println("AREA più grande: CERCHIO");
        } else {
            System.out.println("AREA più grande: entrambi uguali");
        }

        // Verifica se il quadrato ha il perimetro maggiore e il cerchio l'area maggiore
        if (perimetroQuadrato > perimetroCerchio && areaCerchio > areaQuadrato) {
            System.out.println("\nLe due figure sono 'idealmente in proporzione'!");
        }

        // Chiusura dello scanner
        scanner.close();
    }
}
