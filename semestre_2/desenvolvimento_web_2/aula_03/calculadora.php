<?php

$salario_bruto = 5000;

function calc_imposto($salario)
{
  if ($salario <= 1903.98) {
    echo nl2br("Salario: R$ $salario\nImposto: Isento");
  } elseif ($salario >= 1903.99 && $salario < 2826.66) {
    $imposto = number_format(($salario / 100) * 7.5 ,2);
    $salario = number_format($salario,2);
    echo nl2br("Salario: R$ $salario\nImposto: R$ $imposto");
  }elseif($salario >= 2826.66 && $salario < 3751.06){
    $imposto = number_format(($salario / 100) * 15 ,2);
    $salario = number_format($salario,2);
    echo nl2br("Salario: R$ $salario\nImposto: R$ $imposto");
  }elseif($salario >= 3751.06 && $salario < 4664.68){
    $imposto = number_format(($salario / 100) *22.5 ,2);
    $salario = number_format($salario,2);
    echo nl2br("Salario: R$ $salario\nImposto: R$ $imposto");
  }else{
    $imposto = number_format(($salario / 100) * 27.5 ,2);
    $salario = number_format($salario,2);
    echo nl2br("Salario: R$ $salario\nImposto: R$ $imposto");
  }
}

calc_imposto($salario_bruto);
