package com.fatec.exemplo;

// Este adaptador faz a ponte entre nossa interface e a PixApi.
public class PixAdapter implements ProcessadorPagamento {

    // O adaptador contém uma instância do objeto que ele adapta.
    private PixApi pixApi;

    public PixAdapter() {
        this.pixApi = new PixApi();
    }

    @Override
    public void processar(double valor) {
        System.out.println("---[Adaptador PIX em ação]---");
        // Traduz a chamada do nosso método "processar" para o método específico da PixApi.
        pixApi.gerarCobrancaPix(valor);
    }
}
