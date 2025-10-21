package com.fatec.exemplo;

// Esta é a nossa interface-alvo.
// O sistema da loja só vai conhecer e usar este contrato.
public interface ProcessadorPagamento {

    void processar(double valor);
}
