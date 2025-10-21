package com.fatec.exemplo;

public class LojaOnline {

    // O método principal da nossa loja só conhece a interface unificada.
    // Ele não precisa saber dos detalhes de PixApi ou BoletoApi.
    public static void realizarPagamento(ProcessadorPagamento processador, double valor) {
        System.out.println("Iniciando o pagamento de R$ " + valor + " na loja...");
        processador.processar(valor);
        System.out.println("Pagamento concluído com o sistema externo.\n");
    }

    public static void main(String[] args) {
        double valorDaCompra = 150.75;

        // --- Cenário 1: Cliente escolhe pagar com PIX ---
        System.out.println(">> Cenário 1: Cliente selecionou PIX.");
        ProcessadorPagamento adaptadorPix = new PixAdapter();
        realizarPagamento(adaptadorPix, valorDaCompra);

        System.out.println("=========================================\n");

        // --- Cenário 2: Cliente escolhe pagar com Boleto ---
        System.out.println(">> Cenário 2: Cliente selecionou Boleto.");
        ProcessadorPagamento adaptadorBoleto = new BoletoAdapter();
        realizarPagamento(adaptadorBoleto, valorDaCompra);

        // --- Vantagem: Adicionar um novo método (ex: Cartão de Crédito) ---
        // Para adicionar um novo método, bastaria criar uma nova classe `CreditoApi`
        // e um `CreditoAdapter`, sem alterar NADA na classe LojaOnline.
    }
}
