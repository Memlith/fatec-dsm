
main()
{
  int num, ao_cubo;
  printf("Digite um número que deseja saber o cubo: ");
  scanf("%i", &num);
  ao_cubo = num * num * num;
  printf("O cubo de %i = %i", num, ao_cubo);
  return 0;
}
