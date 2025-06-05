# Criptografia

## Modulo

### A mod B

se A < B então r = A<br>
se A >= B então<br>
q = A / B<br>
r = A - ( qB )

5 mod 9 = 5<br>
8 mod 3 = 2

---

### -A mod B

se |A| <= B então r = B + A<br>
se |A| > B então<br>
q = |A| / B<br>
r = B - ( |A| - qB )<br>

-2 mod 9 = 7<br>
-19 mod 4 = 1

---

### A mod -B

---

### -A mod -B

---

## Tabela ASCII

00 - A<br>
01 - B<br>
02 - C<br>
03 - D<br>
04 - E<br>
05 - F<br>
06 - G<br>
07 - H<br>
08 - I<br>
09 - J<br>
10 - K<br>
11 - L<br>
12 - M<br>
13 - N<br>
14 - O<br>
15 - P<br>
16 - Q<br>
17 - R<br>
18 - S<br>
19 - T<br>
20 - U<br>
21 - V<br>
22 - W<br>
23 - X<br>
24 - Y<br>
25 - Z<br>
26 - BRANCO<br>

---

O emissor escreve uma frase sem o receptor ter ciencia: BORA BEBER UMA e organiza numericamente atraves de cada numero _p_ da tabela anterior

#### 01 14 17 00 26 01 04 01 04 17 26 20 12 00

O emissor escolhe um _k_ qualquer (_k_=19) para a função

_f_( _p_ ) -¹ = ( _p-k_ ) mod 27

### Aplicação da Criptografia
