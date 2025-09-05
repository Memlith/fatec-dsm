package s;

public class Main {

    public static void main(String[] args) {
        System.out.println("Exemplo do Principio da Responsabilidade Unica (S)");

        // cada classe tem uma unica responsabilidade
        GerenciadorDeTarefas gerenciador = new GerenciadorDeTarefas();
        GeradorRelatorio geradorRelatorio = new GeradorRelatorio();
        EnviadorDeRelatorio enviador = new EnviadorDeRelatorio();
        Notificador notificador = new Notificador();

        gerenciador.criarTarefa();
        geradorRelatorio.produzirRelatorio();
        enviador.enviarRelatorio();
        notificador.enviarNotificacao();
    }
}
