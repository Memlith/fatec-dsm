<?php

function somar($a, $b)
{
    return $a + $b;
}

function imprimir($name)
{
    echo 'Hello World!, Hello $name';
}

$teste = somar(3, 4);
echo somar(20, 5);
echo'<br>';

echo $teste;
echo'<br>';

$teste2 = "caio";
imprimir("$teste2");
echo'<br>';

var_dump($teste);
echo'<br>';

var_dump($teste2);
echo'<br>';

strlen($teste2);

$lista_numeros = [1,2,3,4,5,6,7,8,9];
echo $lista_numeros[3];
echo'<br>';

$lista_numeros[5] = 10;
echo $lista_numeros[5];
echo'<br>';

$pessoa = [
    "nome" => "Maria",
    "idade" => 20,
    "sexo" => "M"
];

echo $pessoa["nome"];
echo'<br>';

$lista_nomes = ['caio', 'pedro', 'apolo', 'raul'];
echo $lista_nomes[0];
echo '<br>';
echo count($lista_nomes);
echo '<br>';
asort($lista_nomes);
print_r($lista_nomes);
echo '<br>';
foreach ($lista_nomes as $nome) {
    echo $nome.'<br>'; // ou "$nome<br>"
}
