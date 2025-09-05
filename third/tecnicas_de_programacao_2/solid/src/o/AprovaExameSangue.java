package o;

public class AprovaExameSangue implements AprovaExame {

    @Override
    public void aprovarSolicitacaoExame(Exame exame) {
        if (verificaCondicoesExame(exame)) {
            System.out.println("Exame sanguíneo aprovado!");
        }
    }

    @Override
    boolean verificaCondicoesExame(Exame exame) {
        //....
    }
}
