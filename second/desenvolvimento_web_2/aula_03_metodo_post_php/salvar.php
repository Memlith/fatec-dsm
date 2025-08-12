<?php
require_once('aluno.php');

if (!isset($_POST['nome']) || !isset($_POST['ra'])) {
  header('location: index.php');
}

$nome = filter_input(INPUT_POST, 'nome', FILTER_SANITIZE_FULL_SPECIAL_CHARS);
$ra = filter_input(INPUT_POST, 'ra', FILTER_SANITIZE_NUMBER_INT);

$aluno = new Aluno($nome, $ra);
?>
<!DOCTYPE html>
<html lang="pt-br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Confirmação Cadastro</title>
</head>

<body>
  <p>Aluno cadastrado com sucesso!</p>
  <p>
    <?= $aluno->imprimir(); ?>
    <!-- ?php echo $aluno->imprimir(); ? -->
  </p>

</body>

</html>