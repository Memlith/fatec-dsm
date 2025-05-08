<?php
require_once('funcionario.php');

if (!isset($_POST['nome']) || !isset($_POST['salario'])) {
  header('location: index.php');
}

$nome = filter_input(INPUT_POST, 'nome', FILTER_SANITIZE_FULL_SPECIAL_CHARS);
$salario = filter_input(INPUT_POST, 'salario', FILTER_SANITIZE_NUMBER_FLOAT);
$salario += $reajuste;

$funcionario = new Funcionario($nome, $salario);
?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Confirmação Cadastro</title>
</head>

<body>
  <p>Funcionario cadastrado com sucesso!</p>
  <p>
    <?= $funcionario->imprimir(); ?>
    <!-- ?php echo $funcionario->imprimir(); ? -->
  </p>

</body>

</html>