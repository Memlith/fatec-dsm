package pergunta2;

public class Main {

    public static void main(String[] args) {
        Notificator notificator = new NotificacaoSimples();
        notificator = new NotificarComLog(notificator);
        notificator = new NotificarComEmail(notificator);
        notificator.enviarNotificacao("Olá, mundo!");
    }

}
