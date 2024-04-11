import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner ler = new Scanner (System.in);

        String nome;
        int horasTotais;

        double valorNormal;
        double valorAdicional;
        valorNormal = 20.40;
        valorAdicional = 34.78;

        int horasNormais;
        int horasAdicionais;

        double valorN;
        double valorA;
        double valorT;

        System.out.println("indique o nome: ");
        nome = ler.nextLine();

        System.out.println("Informe o numero de horas totais:");
        horasTotais = ler.nextInt();

        if (horasTotais<- 80) {
            horasNormais = horasTotais;
            horasAdicionais = 0;
        
        } else {
            horasNormais = 80;
            horasAdicionais = horasTotais = 80;
        }

        valorN = horasNormais *  20.40;
        valorA = horasAdicionais * 34.70;
        valorT = valorN + valorA;

        System.out.println("Nome: "+nome);
        System.out.println("Numero de horas: ");
        System.out.println(" totais: "+horasTotais);
        System.out.println(" norrmais: "+horasNormais);
        System.out.println(" adicionais: "+horasAdicionais);
        System.out.println("valor de horas: ");
        System.out.println(" totais: "+ valorT);
        System.out.println("normais: "+valorN);
        System.out.println("adicionais: "+valorA);

        ler.close();

    }
}
