<!-- Dado um array de números, você se move dentro do array pelo valor do elemento atual. Escreva uma função 
 jump_out_of_array que retorne:
    A quantidade de saltos até que você salte para fora do array.
    -1 quando você alcançar o final do array mas não conseguir sair dele.
Requisitos:
    O tamanho do array é indefinido.
    Os elementos do array são números inteiros, positivos ou negativos.
Exemplo:
Dado o array A = [2, 3, -1, 1, 6, 4]:
    Salto 1: A[0] + 2 = A[2]
    Salto 2: A[2] + (-1) = A[1]
    Salto 3: A[1] + 3 = A[4]
    Salto 4: A[4] + 6 = fora do índice
Portanto, o resultado é 4, pois são necessários 4 saltos para sair do array. -->