<?php

class Veiculo
{
  protected $marca;
  protected $modelo;
  protected $cor;

  public function __construct($marca, $modelo, $cor)
  {
    $this->marca = $marca;
    $this->modelo = $modelo;
    $this->cor = $cor;
  }

  public function exibir_info()
  {
    return "\nMarca: {$this->marca} | Modelo: {$this->modelo} | Cor: {$this->cor}";
  }
}

class Carro extends Veiculo
{
  public $num_portas;

  public function __construct($marca, $modelo, $cor, $num_portas)
  {
    parent::__construct($marca, $modelo, $cor);
    $this->num_portas = $num_portas;
  }

  public function exibir_info()
  {
    return parent::exibir_info() . " | Número de portas: {$this->num_portas}";
  }
}

$carro01 = new Carro("Honda", "Civic", "Preto", 4);
echo $carro01->exibir_info();

$veiculo01 = new Veiculo("Yamaha", "Jetski", "Branco");
echo $veiculo01->exibir_info();
