package i;

import java.math.BigDecimal;

public class Vendedor implements Funcionario, Comissionavel {

    @Override
    public BigDecimal salario() {
        return new BigDecimal("2500.00");
    }

    @Override
    public BigDecimal gerarComissao() {
        return new BigDecimal("500.00");
    }
}
