<?php
echo "Fibonacci";
echo "<hr>";
function fibonacci($posicao)
{
    $atual = 0;
    $novo_atual = 1;
    for ($c = 1; $c <= $posicao; $c++) {
        $novo_novo_atual = $novo_atual + $atual;
        $atual = $novo_atual;
        $novo_atual = $novo_novo_atual;
        if ($posicao == 0) {
            $atual = 0;
        }
    }
    return "Saida: $atual";
}

function IAfibo($posicao)
{
    if ($posicao == 0) {
        return 0;
    } elseif ($posicao == 1) {
        return 1;
    } else {
        return IAfibo($posicao - 1) + IAfibo($posicao - 2);
    }
}

echo fibonacci(0); //0
echo "<br>";
echo fibonacci(3); //13
echo "<br>";
echo fibonacci(7); //13
echo "<br>";
echo fibonacci(9); //34
echo "<br>";
echo fibonacci(12); //144
echo "<hr>";
echo IAfibo(0); //0
echo "<br>";
echo IAfibo(3); //13
echo "<br>";
echo IAfibo(7); //13
echo "<br>";
echo IAfibo(9); //34
echo "<br>";
echo IAfibo(12); //144