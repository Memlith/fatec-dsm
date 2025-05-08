main()
{
  //entrada de dados
  int total_eleitores, votos_brancos, votos_nulos, votos_validos;
  printf("Digite o total de eleitores: ");
  scanf("%d", &total_eleitores);
  printf("Digite o total de votos brancos: ");
  scanf("%d", &votos_brancos);
  printf("Digite o total de votos nulos: ");
  scanf("%d", &votos_nulos);
  printf("Digite o total de votos validos: ");
  scanf("%d", &votos_validos);

  //processamento
  float porcentagem_brancos = (votos_brancos * 100) / total_eleitores;
  float porcentagem_nulos = (votos_nulos * 100) / total_eleitores;
  float porcentagem_validos = (votos_validos * 100) / total_eleitores;

  //saida
  printf("Votos brancos: %.2f%%\n", porcentagem_brancos);
  printf("Votos nulos: %.2f%%\n", porcentagem_nulos);
  printf("Votos validos: %.2f%%\n", porcentagem_validos);
  return 0;
}
