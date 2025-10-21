package pergunta2;

public class NotificacaoSimples implements Notificator {

    public void enviarNotificacao(String mensagem) {
        System.out.println("Notificação Simples Enviada: " + mensagem);
    }

}
