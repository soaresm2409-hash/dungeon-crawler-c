# dungeon-crawler-c
# Jogo Dungeon Crawler em C
Este é um jogo de aventura em modo texto (Dungeon Crawler) desenvolvido em Linguagem C para o trabalho da faculdade. O objetivo do jogador é explorar andares, coletar chaves, enfrentar monstros e derrotar o Boss Final para salvar a vila.

## Integrantes do Grupo
* EMANUELLY SOARES MAGALHAES

## Como Jogar e Controles
O jogo funciona através do console. Certifique-se de jogar com a tecla Caps Lock desativada.

* **W**: Movimentar para Cima
* **S**: Movimentar para Baixo
* **A**: Movimentar para Esquerda
* **D**: Movimentar para Direita
* **I**: Interagir (conversar com NPC, coletar chaves, abrir portas e ativar botões)
* **O**: Atacar com a arma equipada

## Elementos do Jogo (Símbolos)
* **v, ^, <, >**: Representa o Jogador e a direção para onde ele está olhando.
* **\***: Paredes (obstáculos intransponíveis).
* **#**: Espinhos (causam dano e reiniciam o andar atual).
* **k**: Caixas que podem ser destruídas com ataques.
* **O**: Botão secreto que abre passagens no mapa.
* **D**: Portas trancadas (consomem 1 chave para abrir).
* **@**: Chaves espalhadas pelo cenário.
* **L**: Escadas para avançar de andar.
* **X**: Monstro básico com movimentação aleatória.
* **Y**: Monstro perseguidor que segue os passos do jogador.
* **Z**: Boss Final (possui várias vidas e destrói paredes).

## Funcionamento do Código e Regras Implementadas
* **Sistema de Reset de Fase**: Conforme as regras, caso o jogador colida com um monstro ou pise em um espinho, ele perde 1 vida e a matriz do andar atual é totalmente restaurada ao seu estado original (todas as caixas quebradas e portas abertas reaparecem).
* **Armas Diferenciadas**: Na Vila (Andar 0), o jogador deve falar com o NPC para escolher entre Espada (ataque curto em área), Arco (ataque em linha reta de longo alcance) ou Cajado (ataque em volta do jogador).
* **Matrizes Dinâmicas**: Cada andar possui uma dimensão diferente tratada pelo código (Vila 10x10, Andar 1 10x10, Andar 2 15x15 e Andar 3 25x25).
obs;TIVE AUXILIO DE IA 
