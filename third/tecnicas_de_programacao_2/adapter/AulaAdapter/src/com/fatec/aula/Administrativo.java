package com.fatec.aula;

public class Administrativo implements Funcionario {

    @Override
    public double calcularSalarioMensal() {
        return 5000;
    }

    @Override
    public double calcularSalarioAnual() {
        return 60000;
    }
}
