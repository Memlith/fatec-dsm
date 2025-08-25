# Locadora de Carros

1. Definir Stakeholders
2. Definir requisitos funcionais e nao-funcionais
3. No requisito funcional informar quem interage (Atores)
4. No requisito nao-funcional descrever metricas
5. Definir prioridades (Essencial, Importante, Desejavel)

### Requisitos Funcionais

RF 1 - Cadastrar Cliente
Cadastra novos clientes com nome cpf, cnh e telefone
Essencial
Vendedor

RF 2 - Alugar veiculo
Cliente pode realizar o aluguel do veiculo ou Vendedor pode auxiliar-lo 
Essencial
Cliente e Vendedor

RF 3 - Devolver veiculo
Cliente deve fazer a devolucao do veiculo e o vendedor pode marca-lo como disponivel novamente
Essencial
Cliente e Vendedor

RF 4 - Revisar estado do veiculo
Vendedor pode abrir um ticket que com aprovacao do gerente encaminha o veiculo para mecanico fazer a revisao
Essencial
Vendedor, Gerente e Mecanico

RF 5 - Reservar veiculo
Cliente ou vendedor consegue reservar o veiculo para locacao
Essencial
Vendedor ou Cliente

RF 6 - Gerar contrato
Vendedor pode gerar um contrato com dados do cliente e os termos da locacao
Essencial
Vendedor

RF 7 - Receber pagamento
Sistema deve registrar o pagamento da locacao com valor e forma de pagamento
Essencial
Vendedor

RF 8 - Gerenciar veiculos
Gerente tem acesso a um CRUD dos veiculos
Importante
Gerente

---

### Requisitos Nao Funcionais

RNF 1 - Seguranca dos dados
Armazenar e proteger os dados dos clientes de forma segura e criptografada. LGPD
Essencial
Utilizar criptografia avancadada dos dados e transacoes dos cliente

RNF 2 - Usabilidade
Sistema deve ser intuituvo e facil para novos usuarios
Essencial
Reserva deve ser realizada em 5 minutos

RNF 3 - Tempo de resposta
Sistema deve ser rapido e responsivo
Essencial
Nao deve passar de 6 segundos

RNF 4 - Escalabilidade
Estar preparado para futuros upgrades, aumento dos clientes e veiculos
Desejavel
Suportar pelo menos 100 locacoes por dia correspondendo os limistes do RNF 2

RNF 5 - Compatibilidade
Sistema web deve ser acessivel em diferentes navegadores e dispositivos
Importante
O site deve ser responsivo e ajustado de acordo com dispositivos e telas
