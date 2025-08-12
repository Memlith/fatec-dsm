//Criar um programa que leia um valor (do teclado) e exibir o seu antecessor.
main()
{
  //entrada
  int num, antecessor;
  printf("Digite um numero: ");
  scanf("%i", &num);
  //processamento 
  antecessor = num - 1;
  //saida
  printf("O antecessor de %i = %i", num, antecessor);
  return 0;
}
