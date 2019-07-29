# cpp
## TESTES EM C++

### para Testar:

- git clone https://github.com/DiegoMazega/cpp

Se não tiver o g++ no seu SO, instale ele, se for Windows tem que configurar o PATH também.

*Para instalar no Fedora :* **sudo dnf install g++**
====================================================
*Para instalar no Ubuntu :* **sudo apt-get install g++**
====================================================
*Para instalar no Arch :* **sudo pacman install g++**
====================================================

Estando tudo Ok, abra a pasta clonada com o seu editor de texto, caso esteja usando o *Visual Studio Code*, aperte *Ctrl+'*
para abrir o terminal. agora basta seguir os comandos abaixo na ordem:

1. cd functions
2. g++ -c functions.cpp -Wall -o2 -ansi -o ../main/functions.o (ou qualquer outro nome que queira dar ao arquivo compliado)
3. cd ../main
4. g++ main.cpp functions.o -Wall -o2 -ansi -o main
5. ./main (aqui você irá executar o seu arquivo executavel)

#### Exemplo de entrada

A calculadora até o momento aceita 3 entradas, sendo elas uma entrada de tipo *Char* e duas do tipo *Double*

Selecione uma opcao de operaçao, então 2 valores de entrada.
- P -> Somar 
- L -> subtração
- M -> multiplicação\n 
- D -> divisão. 
_Ex: p 3 2, terá resultado igual a 5._
as entradas podem ser na mesma linha, separadas pelo espaço ou em linhas diferentes

Notas: 
* -Wall: Usamos para mostrar avisos que normalmente não iriam aparecer. Ajuda a achar erros e da sugestões.
* -o2(Letra O, não o numero 0): ativa a otimização do gcc/g++, há 3 níveis, quanto maior o nivel maior a otimização, mas
pode aumentar o tempo de compilação.
