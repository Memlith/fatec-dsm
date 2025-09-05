package l;

public class EstudanteDeGraduacao extends Estudante {

    @Override
    public void estudar() {
        System.out.println(nome + " está estudando na graduação.");
    }

    public void entregarTCC() {
        //…
    }
}
