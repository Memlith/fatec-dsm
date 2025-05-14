<?php

class Pessoa
{
  public $nome;
  public $idade;
  private $cpf;

  //contrutor
  public function __construct($nome, $idade)
  {
    $this->nome = $nome;
    $this->idade = $idade;
    echo "Objeto Pessoa criado com sucesso!\n";
  }

  public function setCpf($cpf)
  {
    if (strlen($cpf) == 11) {
      $this->cpf = $cpf;
    }
  }

  public function getCpf()
  {
    return "$this->cpf\n";
  }
  public function apresentar()
  {
    echo "Olá, meu nome é {$this->nome} e tenho {$this->idade} anos.\n";
  }
}

$pessoa01 = new Pessoa("Caio", 21);
$pessoa01->setCpf("12345678900");
echo $pessoa01->apresentar();
echo $pessoa01->getCpf();

$pessoa02 = new Pessoa("Pedro", 22);
$pessoa02->setCpf("98765432100");
echo $pessoa02->apresentar();
