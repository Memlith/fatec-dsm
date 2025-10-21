package pergunta1;

public class Main {

    public static void main(String[] args) {
        System.out.println("Criação das Instancias de Logger:");
        Logger logger1 = Logger.getInstance();
        Logger logger2 = Logger.getInstance();

        System.out.println("\nTeste Logger:");
        logger1.log("Log 1");
        logger2.log("Log 2");

        System.out.println("\nEssa aplicação seria um problema para uma classe do tipo usuario por exemplo porque so poderia existir um usuario logado no sistema");
        System.out.println("O singleton fere o principio SRP porque ");
    }

}
