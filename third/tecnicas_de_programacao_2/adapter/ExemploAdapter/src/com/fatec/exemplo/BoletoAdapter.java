package com.fatec.exemplo;

// Este adaptador faz a ponte entre nossa interface e a BoletoApi.
public class BoletoAdapter implements ProcessadorPagamento {

    private BoletoApi boletoApi;

    public BoletoAdapter() {
        this.boletoApi = new BoletoApi();
    }

    @Override
    public void processar(double valor) {
        System.out.println("---[Adaptador BOLETO em ação]---");
        // O adaptador também pode manipular dados.
        // Por exemplo, buscando o nome do cliente logado no sistema.
        String cliente = "Cliente Padrão da Loja";
        boletoApi.registrarBoleto(cliente, valor);
    }
}
