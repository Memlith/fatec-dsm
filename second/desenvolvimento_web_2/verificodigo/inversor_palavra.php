<?php

function inverte_palavras($palavra){
   $palavra_invertida = strrev($palavra);
   echo "$palavra_invertida";
}

$meu_nome = "Caio";
echo "$meu_nome";
echo "<br>";
inverte_palavras($meu_nome);