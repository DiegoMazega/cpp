# cpp
##TESTES EM C++

###para Testar:

- git clone https://github.com/DiegoMazega/cpp

Se não tiver o g++ no seu SO, instale ele, se for Windows tem que configurar o PATH também.

*Para instalar no Fedora :* **sudo dnf install g++**
====================================================
*Para instalar no Ubuntu :* **sudo apt-get install g++**
====================================================
*Para instalar no Arch :* **sudo pacman install g++**

Estando tudo Ok, abra a pasta clonada com o seu editor de texto, caso esteja usando o *Visual Studio Code*, aperte *Ctrl+'*
para abrir o terminal. agora basta seguir os comandos abaixo na ordem:

1. cd functions
* g++ -c functions.cpp -Wall -o2 -ansi -o ../main/functions.o (ou qualquer outro nome que queira dar ao arquivo compliado)
* cd ../main
* g++ main.cpp functions.o -Wall -o2 -ansi -o main
* ./main (aqui você irá executar o seu arquivo executavel)

Notas: 
* -Wall: Usamos para mostrar avisos que normalmente não iriam aparecer. Ajuda a achar erros e da sugestões.
* -o2(Letra O, não o numero 0): ativa a otimização do gcc/g++, há 3 níveis, quanto maior o nivel maior a otimização, mas
pode aumentar o tempo de compilação.
