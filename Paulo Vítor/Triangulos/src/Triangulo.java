import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner ler = new Scanner (System.in);

        int l1;
        int l2;
        int l3;
        boolean EQ;
        boolean ES;

        System.out.println("Digite o primeiro lado: ");
        l1 = ler.nextInt();

        System.out.println("Digite o segundo lado: ");
        l2 = ler.nextInt();

        System.out.println("Digite o terceiro lado: ");
        l3 = ler.nextInt();

        EQ = (l1 == l2) & (l2 == l3) & (l1 == l3);
        System.out.println("O meu triangulo é EQUILATERO "+ EQ);
        
        ES = (l1 != l2)  & (l2 != l3) & (l3 != l1);
        System.out.println("O meu triangulo é ESCALENO: "+ES);
    

        ler.close();




    }
}
