## Exercício 4

Aqui faremos um sistema de cliente-banco, onde o cliente consulta um banco, e ele pode tanto depositar dinheiro na conta quanto sacar dinheiro.

### Classe `Cliente`:
Nessa classe `Cliente` teremos como atributos:
- `nome`
- `cpf`
- `dinheiro_fisico`
- `dinheiro_depositado`


### Classe: `Banco`
Nessa classe `Banco`, teremos como atributos:
- `nome`

Além disso, a classe deve possuir um método chamado, `depositarDinheiro` e outra chamada `sacarDinheiro` que deposita ou saca o dinheiro do cliente, assim como no exercicio passado, passe o cliente como um argumento.
Tambem crie um metodo que seja possivel transferir dinheiro de cliente para outro.

### Lembre-se
Um cliente não pode depositar mais do que ele tem em dinheiro fisico e nao pode sacar mais do que ele tem depositado.