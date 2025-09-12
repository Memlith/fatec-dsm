package dip;

class Notificacao {

    private final NotificacaoService servico;

    public Notificacao(NotificacaoService servico) {
        this.servico = servico;
    }

    public void notificar(String mensagem) {
        this.servico.enviar(mensagem);
    }
}
