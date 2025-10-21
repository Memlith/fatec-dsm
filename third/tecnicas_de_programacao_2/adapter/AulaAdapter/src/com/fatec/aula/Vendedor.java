package com.fatec.aula;

public class Vendedor implements Funcionario {

    @Override
    public double calcularSalarioMensal() {
        return 2500;
    }

    @Override
    public double calcularSalarioAnual() {
        return 30000;
    }
}
