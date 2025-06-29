# binarytree

Aluna: Carolina Nunes de Carvalho
Matéria: Estruturas de Dados Básicas II

Implementação de uma árvore binária de busca para pares ordenados através da função de pareamento de Cantor;

compile com: g++ main.cpp -o main
execute com ./main


## organização e modificações

A tarefa no sigaa falava sobre manter todas as funções em um arquivo .c (nesse caso, .cpp) e a main sendo outro arquivo .c (.cpp). Acredito que você quis dizer um .h e um .c, então foi isso que eu fiz! (um .hpp e um .cpp)
mas não tenho certeza, então nao me bate se eu tiver feito errado pls

Algumas funções acessórias foram criadas para facilitar a criação das funções de inserção e deleção (findPai, findAnteante, somapa, encontrar lugar, tanaarvore)

a assinatura da função de deleção foi modificada para que, caso a raiz seja deletada, a variável raiz passada tome o valor da nova raiz.


## testes
No outro projeto, eu tinha feito um loop em que o "cliente" inputava os valores que ele quisesse.
Nesse projeto, eu escolhi exemplos que achei que contemplassem todas as possibilidades e mostrassem o funcionamento da árvore corretamente
Acho que fica mais simples de mostrar o que foi feito (terminou em uma coisa bem arcaica com o main quilométrico, perdão por isso! culparei as demandas demasiadas do fim do semestre :c )