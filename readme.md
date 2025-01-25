# Gerador de Sequência de Fibonacci

Este programa em linguagem C é um gerador de sequência de Fibonacci que inicia com valores predefinidos e gera números da sequência até alcançar uma contagem especificada.

---

## Funcionalidades

1. **Geração da Sequência de Fibonacci:**
   - O programa inicia com os números 34 e 55 como valores iniciais.
   - Calcula os números subsequentes da sequência de Fibonacci.

2. **Controle de Contagem:**
   - Gera um total de 1002 números da sequência.

3. **Exibição da Sequência:**
   - Os números da sequência são exibidos na saída padrão (terminal).

---

## Código-Fonte

```c
#include <stdio.h>

int main() 
{
    printf("\n Gerador de Sequencia de Fibonacci\n");
    
    int inicial = 34, final = 55, contador, variavel_qtd = 0;
    int finalizar = 1002;
    
    printf("%d %d", inicial, final);
    
    for(contador = 3; contador <= finalizar; contador++){
        variavel_qtd = inicial + final;
        printf(" %d", variavel_qtd);
        inicial = final;
        final = variavel_qtd;
    }
    
    printf("\n Encerrado contagem\n");
    return 0;
}
```

---

## Estrutura do Programa

### Entrada de Dados

Não há entrada direta do usuário. O programa utiliza valores iniciais predefinidos:
- Primeiro número: 34
- Segundo número: 55

### Processamento

- Um loop `for` é utilizado para gerar os números da sequência de Fibonacci até a contagem final especificada (1002 números).
- Em cada iteração, o próximo número da sequência é calculado como a soma dos dois números anteriores.

### Saída de Dados

- O programa exibe os números da sequência de Fibonacci no terminal, separados por espaços.
- Após atingir a contagem final, imprime a mensagem "Encerrado contagem".

---

## Exemplo de Execução

### Saída:

```plaintext
Gerador de Sequencia de Fibonacci
34 55 89 144 233 377 610 987 ... (continua até o 1002º número)
Encerrado contagem
```

---

## Requisitos para Execução

1. Um compilador de C, como GCC.
2. Um ambiente de desenvolvimento ou terminal para compilar e executar o programa.

---

## Como Compilar e Executar

1. Salve o código em um arquivo com a extensão `.c`, por exemplo, `fibonacci_gerador.c`.
2. Abra o terminal e navegue até o diretório onde o arquivo está salvo.
3. Compile o código com o seguinte comando:

   ```bash
   gcc fibonacci_gerador.c -o fibonacci_gerador
   ```

4. Execute o programa com o comando:

   ```bash
   ./fibonacci_gerador
   ```

---

## Considerações

- Este programa não recebe valores iniciais ou limites personalizados do usuário. Para personalizar, o código pode ser adaptado para aceitar entradas.
- Certifique-se de que os valores calculados não excedam os limites de inteiros no C, especialmente ao lidar com números grandes na sequência.
- O programa gera uma sequência de tamanho fixo (1002 números), mas pode ser ajustado para tamanhos diferentes.

---

## Autor

Este programa foi criado como um exemplo prático de geração de sequências matemáticas em C, com foco na sequência de Fibonacci e manipulação de laços iterativos.
