Informações sobre o projeto:

A função main é responsável por executar todo o programa.
Primeiro, ela carrega os pratos e bebidas do arquivo de texto.
Em seguida, ela exibe o menu do restaurante. 
Depois disso, ela cria um pedido com base na entrada do usuário. 
Se o pedido for válido, ela imprime o pedido e remove os itens do pedido da lista de pratos e bebidas. 
Se o pedido for inválido, ela imprime uma mensagem de erro. 
Finalizando, a função main retorna 0 para indicar que o programa foi executado com sucesso.

O arquivo itemmenu: É uma classe abstrata para representar diferentes itens do menu do restaurante.

O arquivo prato: É a classe que herda de itemmenu, representando os pratos disponíveis no menu.

O arquivo bebida: É a classe que herda de itemmenu, representando as bebidas disponíveis no menu.

O arquivo cliente: É a classe que representa os clientes do restaurante.

O arquivo pedido: É a classe que contém informações sobre os pedidos feitos pelos clientes.

O arquivo opçoes.txt: É o arquivo que contem as opçoes do menu
