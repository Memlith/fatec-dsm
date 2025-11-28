
public class Main {

    public static void main(String[] args) throws Exception {
        Cliente cliente = new Cliente();

        cliente.setEmail("email@email.com");
        cliente.setLogin("login");
        cliente.setSenha("123456");

        System.out.println(cliente.getEmail());
        System.out.println(cliente.getLogin());
        System.out.println(cliente.getSenha());

    }
}
