package d;

import java.math.BigDecimal;

public class Main {

    public static void main(String[] args) {
        System.out.println("Exemplo do Principio da Inversao de Dependencia (D)");

        // a dependencia e injetada aqui (injecao de dependencia)
        // pedidoservice nao conhece a implementacao concreta de pedidorepository
        // apenas a abstracao (a interface). isso e o principio da inversao de dependencia
        PedidoRepository repository = new PedidoRepositoryImpl();
        PedidoService service = new PedidoService(repository);

        Pedido pedido = new Pedido(new BigDecimal("199.99"), "Joao da Silva");

        service.processarPedido(pedido);
    }
}
