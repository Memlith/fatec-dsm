package o;

public class AprovaRaioX implements AprovaExame {

    @Override
    public void aprovarSolicitacaoExame(Exame exame) {
        if (verificaCondicoesExame(exame)) {
            System.out.println("Raio-X aprovado!");
        }
    }

    @Override
    boolean verificaCondicoesExame(Exame exame) {
        //....
    }
}
