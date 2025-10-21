package com.fatec.aula;

import java.util.ArrayList;
import java.util.List;

public class TestaAdapter {

    public static void main(String[] args) {

        Gerente gerente = new Gerente();
        Vendedor vendedor = new Vendedor();
        Administrativo administrativo = new Administrativo();

        Empregado empregado = new EmpregadoConcreto();
        EmpregadoAdapter empAdapter = new EmpregadoAdapter(empregado);

        List<Funcionario> funcionarios = new ArrayList<>();

        funcionarios.add(gerente);

        funcionarios.add(vendedor);

        funcionarios.add(administrativo);

        funcionarios.add(empAdapter);

        for (Funcionario funcionario : funcionarios) {
            System.out.println(funcionario.getClass().getSimpleName());
            System.out.println("Salario Mensal: R$" + funcionario.calcularSalarioMensal());
            System.out.println("Salario Anual: R$" + funcionario.calcularSalarioAnual());
        }

    }
}
