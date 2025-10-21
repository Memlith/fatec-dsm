package pergunta2;

public class NotificarComEmail extends NotificadorDecorator {

    public NotificarComEmail(Notificator notificator) {
        super(notificator);
    }

    @Override
    public void enviarNotificacao(String mensagem) {
        super.enviarNotificacao(mensagem);
        System.out.println("Enviando notificação por e-mail: " + mensagem);
    }

}
