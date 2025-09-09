package l;

public class EstudanteDeGraduacao extends Estudante {

    public EstudanteDeGraduacao(String nome) {
        super(nome);
    }

    @Override
    public void estudar() {
        System.out.println(nome + " esta estudando na graduacao.");
    }

    public void entregarTCC() {
        //…
    }
}
