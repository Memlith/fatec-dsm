package i;

import java.math.BigDecimal;

public class Recepcionista implements Funcionario {

    @Override
    public BigDecimal salario() {
        return new BigDecimal("2000.00");
    }
}
