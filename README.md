Neste trabalho, utilizando boas práticas de programação e as seguintes ferramentas (makefile, git, gcov, cppcheck, cpplint, catch2, valgrind, e mingw32),
criei um tabuleiro de jogo da velha clássico, que verifica o tabuleiro retornando os valores de acordo com o resultado do jogo:

Retorna 1 se o vencedor foi o X
Retorna 2 se o vencedor foi o O
Retorna 0 se o jogo está empatado
Retorna -1 se o jogo está indefinido (ex. tem apenas um X)
Retorna -2 se o jogo é com certeza impossível pelas regras (ex. todas as posições são X)

Utilizando o makefile, git e os casos de teste (catch), é possível testar implementações de forma rápida e segura no código, utilizando também o cpplint para verificar o padrão de programação do Google,
além de verificar erros através do cppcheck e vazamento de memória pelo valgrind.
