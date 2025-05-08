<?php
class Funcionario
{
  public $nome;
  private $salario;
  public $reajuste;

  public function __construct($nome, $salario)
  {
    $this->nome = $nome;
    $this->salario = $salario;
    $this->reajuste = 0.2;
  }

  public function imprimir()
  {
    $salario_novo = $this->salario + ($this->salario * $this->reajuste);
    $salario_novo = number_format($salario_novo, 2, ',', '.');
    return "{$this->nome}, seu novo salario é: R$ {$salario_novo}";
  }

  public function alterar_salario() {}
}
