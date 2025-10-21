package com.fatec.aula;

public class Gerente implements Funcionario {

    @Override
    public double calcularSalarioMensal() {
        return 12000;
    }

    @Override
    public double calcularSalarioAnual() {
        return 144000;
    }

}
