
import java.math.BigDecimal;
import java.util.Date;

public class Anuncio {

    private long id;

    private String palavras;

    private Date dataPublicacao;

    private BigDecimal valor;

    private String titulo;

    private Date dataInsercao;

    private int publicar;

    private String nomeContato;

    private String telefone;

    private String observacao;

    void remeterViaEmail() {
    }

    void manter() {
    }

    void anunciar() {
    }

    void localizar() {
    }

    public Anuncio() {
    }

    public long getId() {
        return this.id;
    }

    public void setId(long id) {
        this.id = id;
    }

    public String getPalavras() {
        return this.palavras;
    }

    public void setPalavras(String palavras) {
        this.palavras = palavras;
    }

    public Date getDataPublicacao() {
        return this.dataPublicacao;
    }

    public void setDataPublicacao(Date dataPublicacao) {
        this.dataPublicacao = dataPublicacao;
    }

    public BigDecimal getValor() {
        return this.valor;
    }

    public void setValor(BigDecimal valor) {
        this.valor = valor;
    }

    public String getTitulo() {
        return this.titulo;
    }

    public void setTitulo(String titulo) {
        this.titulo = titulo;
    }

    public Date getDataInsercao() {
        return this.dataInsercao;
    }

    public void setDataInsercao(Date dataInsercao) {
        this.dataInsercao = dataInsercao;
    }

    public int getPublicar() {
        return this.publicar;
    }

    public void setPublicar(int publicar) {
        this.publicar = publicar;
    }

    public String getNomeContato() {
        return this.nomeContato;
    }

    public void setNomeContato(String nomeContato) {
        this.nomeContato = nomeContato;
    }

    public String getTelefone() {
        return this.telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getObservacao() {
        return this.observacao;
    }

    public void setObservacao(String observacao) {
        this.observacao = observacao;
    }

}
