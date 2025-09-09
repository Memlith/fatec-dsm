package d;

import java.math.BigDecimal;

public class Pedido {

    private final BigDecimal valorTotal;
    private final String cliente;

    public Pedido(BigDecimal valorTotal, String cliente) {
        this.valorTotal = valorTotal;
        this.cliente = cliente;
    }

    public BigDecimal getValorTotal() {
        return valorTotal;
    }

    public String getCliente() {
        return cliente;
    }

    @Override
    public String toString() {
        return "Pedido{" + "valorTotal=" + valorTotal + ", cliente='" + cliente + '\'' + '}';
    }
}
