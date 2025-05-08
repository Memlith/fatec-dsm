<!DOCTYPE html>
<html lang="pt-br">

<head>
  <meta charset="UTF-8">
  <meta name="viewport" content="width=device-width, initial-scale=1.0">
  <title>Cadastro de Alunos</title>
</head>

<body>
  <form action="salvar.php" method="POST">
    <div>
      <label for="nome">Nome do Aluno:</label>
      <input type="text" id="nome" name="nome">
    </div>
    <div>
      <label for="RA">RA:</label>
      <input type="number" id="ra" name="ra">
      <style>
        input[type=number] {
          -moz-appearance: textfield;
        }
      </style>
    </div>
    <button type="submit">Cadastrar</button>
  </form>
  <br>
  <br>
  <form action="calcular.php" method="POST">
    <div>
      <label for="nome">Nome do Funcionario:</label>
      <input type="text" id="nome" name="nome">
    </div>
    <div>
      <label for="salario">Salario:</label>
      <input type="text" name="salario" id="salario">
    </div>
    <div>
      <button type="submit">Calcular</button>
    </div>
  </form>
  <!-- salario/funcionario = salario, reajuste(fixo no contruct) -->
</body>

</html>