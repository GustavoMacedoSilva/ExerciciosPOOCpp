## Exercício 3

Neste exercício, você deve continuar a partir do código desenvolvido no **Exercício 2**.

### Alterações na classe `Aluno`:
- Adicione dois novos atributos: `notaPV1` e `notaPV2`.

### Nova classe: `Professor`
Crie uma classe chamada `Professor`, com os seguintes atributos:
- `nome`
- `idade`
- `materia`

Além disso, a classe deve possuir um método chamado, por exemplo, `avaliarAluno`, que:

1. Recebe um objeto `Aluno` como argumento.
2. Calcula a média entre `notaPV1` e `notaPV2`.
3. Imprime uma mensagem:
   - Se a média for **maior ou igual a 60**, mostre que o aluno passou.
   - Caso contrário, mostre que o aluno foi reprovado.

---

### Dica:
Você pode passar objetos como argumentos de métodos ou funções. Isso permite que o professor "avalie" um aluno diretamente com seus dados.
Quando for passar um objeto com o argumento o método deve ficar assim: 
`void exemploMetodo(Objeto& objeto)`. Deve ter o `&` pois significar que esta referenciando o objeto que foi passado para o método.