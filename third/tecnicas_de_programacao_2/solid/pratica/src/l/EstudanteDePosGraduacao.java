package l;

public class EstudanteDePosGraduacao extends Estudante {

    public EstudanteDePosGraduacao(String nome) {
        super(nome);
    }

    @Override
    public void estudar() {
        System.out.println(nome + " esta estudando e pesquisando.");
    }
}
