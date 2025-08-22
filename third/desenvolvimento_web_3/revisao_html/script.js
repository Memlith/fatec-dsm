const botao = document.getElementById('botao');
const titulo = document.getElementById('titulo');

botao.addEventListener('click', function() {
  alert('Voce revisou HTML, CSS e JavaScript!');

  titulo.textContent = 'Revisao concluida';
});