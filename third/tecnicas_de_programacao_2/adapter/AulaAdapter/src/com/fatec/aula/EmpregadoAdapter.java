package com.fatec.aula;

public class EmpregadoAdapter implements Funcionario {

    private Empregado empregado;

    public EmpregadoAdapter(Empregado empregado) {
        this.empregado = empregado;
    }

    @Override
    public double calcularSalarioMensal() {
        return empregado.calcularSalario(1);
    }

    @Override
    public double calcularSalarioAnual() {
        return empregado.calcularSalario(3) * 12;
    }

}
