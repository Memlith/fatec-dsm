package pergunta2;

public abstract class NotificadorDecorator implements Notificator {

    protected Notificator notificator;

    public NotificadorDecorator(Notificator notificator) {
        this.notificator = notificator;
    }

    @Override
    public void enviarNotificacao(String mensagem) {
        this.notificator.enviarNotificacao(mensagem);
    }

}
