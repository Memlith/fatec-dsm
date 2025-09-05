package l;

public class EstudanteDeGraduacao extends Estudante {

    @Override
    public void estudar() {
        System.out.println(nome + " esta estudando na graduacao.");
    }

    public void entregarTCC() {
        //…
    }
}
