package i;

public class Main {

    public static void main(String[] args) {
        System.out.println("Exemplo do Principio da Segregacao de Interfaces (I)");

        // a recepcionista não e forçada a ter um metodo de comissão
        Funcionario recepcionista = new Recepcionista();
        // o vendedor implementa ambas as interfaces pois ambas se aplicam a ele
        Vendedor vendedor = new Vendedor();

        System.out.println("Salario da Recepcionista: " + recepcionista.salario());
        System.out.println("Salario do Vendedor: " + vendedor.salario());
        // apenas o vendedor pode ter comissao
        System.out.println("Comissao do Vendedor: " + vendedor.gerarComissao());
    }
}
