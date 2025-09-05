package d;

public class PedidoRepositoryImpl implements PedidoRepository {

    @Override
    public void salvarPedido(Pedido pedido) {
        // logica para salvar o pedido em um banco de dados, por exemplo
        System.out.println("Salvando o pedido no banco de dados: " + pedido);
    }
}
