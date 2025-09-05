package d;

public class PedidoService {

    private final PedidoRepository repository;

    public PedidoService(PedidoRepository repository) {
        this.repository = repository;
    }

    public void processarPedido(Pedido pedido) {
        // logica de processamento do pedido
        repository.salvarPedido(pedido);
    }
}
