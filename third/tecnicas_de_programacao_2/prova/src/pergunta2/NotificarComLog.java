package pergunta2;

public class NotificarComLog extends NotificadorDecorator {

    public NotificarComLog(Notificator notificator) {
        super(notificator);
    }

    @Override
    public void enviarNotificacao(String mensagem) {
        super.enviarNotificacao(mensagem);
        System.out.println("Registrando log da notificação: " + mensagem);
    }
}
