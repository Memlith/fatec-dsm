package d;

import java.math.BigDecimal;
import java.util.UUID;

public class Pedido {

    private final String id;
    private BigDecimal valorTotal;
    private String cliente;

    public Pedido(BigDecimal valorTotal, String cliente) {
        this.id = UUID.randomUUID().toString(); // gera string de numeros aleatorios para formar um ID unico
        this.valorTotal = valorTotal;
        this.cliente = cliente;
    }

    public String getId() {
        return id;
    }

    public BigDecimal getValorTotal() {
        return valorTotal;
    }

    public void setValorTotal(BigDecimal valorTotal) {
        this.valorTotal = valorTotal;
    }

    public String getCliente() {
        return cliente;
    }

    public void setCliente(String cliente) {
        this.cliente = cliente;
    }

    @Override
    public String toString() {
        return "Pedido{" + "id='" + id + '\'' + ", valorTotal=" + valorTotal + ", cliente='" + cliente + '\'' + '}';
    }
}
