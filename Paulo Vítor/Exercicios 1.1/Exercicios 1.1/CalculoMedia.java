import java.util.Scanner;

public class CalculoMedia {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        //Solicitar o usuário o número de elementos

        System.out.println("Digite o número de elementos");
        int tamanho = scanner.nextInt();

        //Criar um array para armazenar os números
        double [] numeros = new double[tamanho];

        //Solicitar ao usúario que insira os números
        for (int i = 0; i < tamanho; i++)
    {
        System.out.println("Digite o número" + (i + 1) + ":");
        numeros [i] = scanner.nextDouble();
    }
        //Calcular a soma dos numeros
        double soma = 0;
        for (double numero : numeros) {
        soma += numero;
        }

        //Calcular média
        double media = soma / tamanho;

        // Exibir a média
        System.out.println("A média dos números é:" +media);

        scanner.close();
    }
}

