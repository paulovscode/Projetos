package Exercicios.src;
import java.util.Scanner;

public class BaseAltura {
    public static void main(String[] args) throws Exception {
        
        Scanner ler = new Scanner (System.in);

        Double base;
        Double altura;
        Double area;

        System.out.println("Dê o valor da altura");
        altura = ler.nextDouble();

        System.out.println("Dê o valor da base");
        base = ler.nextDouble();

        area = base * altura;

        System.out.println("Esse é o valor da Área: " +area);
        ler.close();
    }
}

