package o;

public class AprovaExameSangue implements AprovaExame {

    @Override
    public void aprovarSolicitacaoExame(Exame exame) {
        if (verificaCondicoesExame(exame)) {
            System.out.println("Exame sanguineo aprovado!");
        }
    }

    @Override
    public boolean verificaCondicoesExame(Exame exame) {
        System.out.println("Verificando condicoes para exame de sangue...");
        return true; // simula que as condicoes foram atendidas
    }
}
