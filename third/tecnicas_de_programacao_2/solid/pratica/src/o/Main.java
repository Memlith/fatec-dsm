package o;

public class Main {

    public static void main(String[] args) {
        System.out.println("Exemplo do Principio Aberto/Fechado (O)");

        // o sistema pode ser estendido com novos tipos de exame
        // sem precisar modificar o codigo que os utiliza
        AprovaExame aprovadorSangue = new AprovaExameSangue();
        AprovaExame aprovadorRaioX = new AprovaRaioX();

        Exame exameSangue = new Exame("SANGUE");
        Exame exameRaioX = new Exame("RAIOX");

        aprovadorSangue.aprovarSolicitacaoExame(exameSangue);
        aprovadorRaioX.aprovarSolicitacaoExame(exameRaioX);
    }
}
