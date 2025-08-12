<?php
function sacar($valor)
{
  if ($valor < 10)
    return "<br>Erro: Valor minimo de saque é R$10.";
  else if ($valor % 10 != 0)
    return "<br>Erro: Valor invalido, insira um valor multiplo de 10.";

  $contador = 1;
  $notas_cem = 0;
  $notas_cinquenta = 0;
  $notas_dez = 0;
  for ($i = 0; $i < $contador; $i++) {
    if ($valor >= 100) {
      $contador++;
      $notas_cem++;
      $valor -= 100;
    } elseif ($valor >= 50) {
      $contador++;
      $notas_cinquenta++;
      $valor -= 50;
    } elseif ($valor >= 10) {
      $contador++;
      $notas_dez++;
      $valor -= 10;
    }
  }
  return "<br>Notas de 100: $notas_cem, Notas de 50: $notas_cinquenta, Notas de 10: $notas_dez";
}

echo sacar(380);
echo sacar(70);
echo sacar(125);
echo sacar(5);
