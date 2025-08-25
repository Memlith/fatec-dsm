
public class Cliente extends Usuario {

    long cod_assinante;

    long qtd_assinantes;

    String email;

    void manter() {
    }

    public Cliente() {
    }

    public long getCod_assinante() {
        return this.cod_assinante;
    }

    public void setCod_assinante(long cod_assinante) {
        this.cod_assinante = cod_assinante;
    }

    public long getQtd_assinantes() {
        return this.qtd_assinantes;
    }

    public void setQtd_assinantes(long qtd_assinantes) {
        this.qtd_assinantes = qtd_assinantes;
    }

    public String getEmail() {
        return this.email;
    }

    public void setEmail(String email) {
        this.email = email;
    }

}
