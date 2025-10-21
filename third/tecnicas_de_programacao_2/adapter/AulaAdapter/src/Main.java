
import com.fatec.aula.Empregado;
import com.fatec.aula.EmpregadoAdapter;
import com.fatec.aula.EmpregadoConcreto;

public class Main {

    public static void main(String[] args) throws Exception {

        Empregado empregado = new EmpregadoConcreto();
        EmpregadoAdapter empAdapter = new EmpregadoAdapter(empregado);

        System.out.println(empAdapter.calcularSalarioMensal());
        System.out.println(empAdapter.calcularSalarioAnual());

    }
}
