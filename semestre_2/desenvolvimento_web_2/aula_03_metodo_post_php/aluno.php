<?php
class Aluno
{
  public $nome;
  public $ra;

  function __construct($nome, $ra)
  {
    $this->nome = $nome;
    $this->ra = $ra;
  }

  function imprimir()
  {
    return "<b>{$this->nome} - {$this->ra}</b>";
  }
}
