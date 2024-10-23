import matplotlib.pyplot as plt
import numpy as np

# Definir o tamanho da entrada
n = np.arange(1, 1000)  # Tamanho da entrada de 1 a 999

# Tempo de execução dos algoritmos
# Para a busca linear e busca linear em ordem, o tempo é linear
linear_time = n
ordered_linear_time = n
# Para a busca binária, o tempo é logarítmico
binary_time = np.log2(n) 

# Criação do gráfico
plt.figure(figsize=(12, 8))

# Plotar o tempo de execução para cada algoritmo
plt.plot(n, linear_time, label='Busca Linear O(n)', color='r', linestyle='-')
plt.plot(n, ordered_linear_time, label='Busca Linear em Ordem O(n)', color='g', linestyle='--')
plt.plot(n, binary_time, label='Busca Binária O(log n)', color='b', linestyle='-.')

# Adicionar títulos e rótulos aos eixos
plt.xlabel('Tamanho da Entrada (n)')
plt.ylabel('Tempo de Execução')
plt.title('Comparação de Algoritmos de Busca')
plt.legend()
plt.grid(True)

# Salvar o gráfico em um arquivo
plt.savefig('comparacao_buscas.png')

# Mostrar o gráfico
plt.show()
