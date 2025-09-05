package l;

import java.util.ArrayList;
import java.util.List;

public class Main {

    public static void main(String[] args) {
        System.out.println("Exemplo do Principio da Substituicao de Liskov (L)");
        Estudante graduacao = new EstudanteDeGraduacao();
        Estudante posGraduacao = new EstudanteDePosGraduacao();

        List<Estudante> estudantes = new ArrayList<>();
        estudantes.add(graduacao);
        estudantes.add(posGraduacao);

        // a funcao "estudar" funciona com qualquer subtipo de "estudante" sem precisar saber a classe concreta
        estudantes.forEach(estudante -> estudante.estudar());
    }
}
