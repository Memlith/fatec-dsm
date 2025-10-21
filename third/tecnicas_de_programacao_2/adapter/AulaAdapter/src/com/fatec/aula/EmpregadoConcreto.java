package com.fatec.aula;

public class EmpregadoConcreto implements Empregado {

    @Override
    public double calcularSalario(int periodo) {

        switch (periodo) {
            case 1 -> {
                return 3000;
            }
            case 2 -> {
                return 6000;
            }
            case 3 -> {
                return 12000;
            }
        }
        return 0;
    }
}
