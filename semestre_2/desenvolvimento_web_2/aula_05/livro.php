<?php
class Livro
{
  public $titulo;
  public $autor;

  public function __construct($titulo, $autor)
  {
    $this->titulo = $titulo;
    $this->autor = $autor;
    echo "Livro criado com sucesso!\n";
  }

  public function __destruct()
  {
    echo "Livro destruído com sucesso!\n";
  }

  public function detalhes()
  {
    echo "Livro: {$this->titulo} | Autor: {$this->autor}\n";
  }
}

$livro01 = new Livro("O Senhor dos Anéis", "JRR Tolkien");
echo $livro01->detalhes();
$livro02 = new Livro("Harry Potter e a Pedra Filosofal", "JK Rowling");
echo $livro02->detalhes();
