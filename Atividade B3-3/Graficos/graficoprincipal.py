import matplotlib.pyplot as plt
import numpy as np

# Dados para o gráfico
n = np.arange(1, 1000)
linear_time = n
ordered_linear_time = n
binary_time = np.log2(n)

# Criação do gráfico
plt.figure(figsize=(10, 6))
plt.plot(n, linear_time, label='Busca Linear O(n)', color='r')
plt.plot(n, ordered_linear_time, label='Busca Linear em Ordem O(n)', color='g')
plt.plot(n, binary_time, label='Busca Binária O(log n)', color='b')

plt.xlabel('Tamanho da Entrada (n)')
plt.ylabel('Tempo de Execução')
plt.title('Comparação de Algoritmos de Busca')
plt.legend()
plt.grid(True)
plt.show()
