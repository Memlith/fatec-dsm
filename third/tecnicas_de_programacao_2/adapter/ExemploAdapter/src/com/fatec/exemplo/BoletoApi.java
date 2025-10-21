package com.fatec.exemplo;

// Simula um sistema diferente para emissão de boletos.
public class BoletoApi {

    public void registrarBoleto(String nomePagador, double valor) {
        // Lógica para registrar o boleto no sistema bancário.
        System.out.println("✅ BOLETO API: Boleto no valor de R$ " + valor + " registrado para " + nomePagador);
    }
}
