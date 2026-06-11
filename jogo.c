#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

int main() {
    int arma = 0;
    int xi = 1, yi = 1;
    int jgdo = 1;
    int rodada = 0;
    int chave = 0;
    int vidas = 3;
    int tamanho = 10;
    int botao = 0;
    char jg = 'v';
    int opcao = 0;
    int moedas = 0;
    int pocoes = 0;

    int mx = 8, my = 6, xv = 1; 
    int myx = 4, myy = 12, yv = 1; 
    int zx = 10, zy = 16, zv = 1, z_vidas = 5; 

    char vila[10][10] = {
        {'*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ','N',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*',' ',' ','M','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*','*','*',' ','*'},
        {'*',' ',' ',' ',' ','*','M',' ','L','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*','*','*','*','*','*','*','*','*','*'}
    };

    char andar1[10][10] = {
        {'*','*','*','*','*','*','*','*','*','*'},
        {'*',' ','M',' ','k',' ','*',' ','@','*'},
        {'*',' ',' ',' ',' ',' ','D',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*','*',' ','*'},
        {'*','k',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ','k',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ','M',' ','*'},
        {'*',' ',' ',' ',' ','k',' ',' ','L','*'},
        {'*','*','*','*','*','*','*','*','*','*'}
    };

    char andar2[15][15] = {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ','M','@','*'},
        {'*',' ','#',' ','#',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ','#',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*','*','*','*','*',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*'},
        {'*','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','M',' ','*'},
        {'*','O',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','@','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','L','D',' '}, 
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
    };

    char andar3[25][25] = {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ','M','@','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' Lumine ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','D','*','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','D','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','M','@','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
    };

    srand(time(NULL));

    while (1) {
        system("cls");
        printf("==================================================\n");
        printf("                 JOGO DA MASMORRA                 \n");
        printf("==================================================\n");
        printf(" 1. Iniciar Nova Jornada\n");
        printf(" 2. Manual de Instrucoes\n");
        printf(" 4. Sair do Jogo\n");
        printf("--------------------------------------------------\n");
        printf(" Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 4) {
            printf("\nSaindo do jogo... Obrigado por jogar!\n");
            break;
        }

        if (opcao == 2) {
            system("cls");
            printf("==================================================\n");
            printf("               MANUAL DE INSTRUCOES               \n");
            printf("==================================================\n");
            printf(" Mover Personagem: W (Cima), A (Esquerda), S (Baixo), D (Direita)\n");
            printf(" Interagir com o Mundo: Tecla I\n");
            printf(" Executar Ataque com Arma: Tecla O\n");
            printf(" Usar Pocao de Cura: Tecla P\n\n");
            printf(" LEGENDA DOS CARACTERES:\n");
            printf("  * : Parede Intransponivel\n");
            printf("  # : Armadilha de Espinho (Dano de Vida)\n");
            printf("  D : Porta Trancada (Requer Chave)\n");
            printf("  @ : Chave de Bronze\n");
            printf("  M : Moeda de Ouro\n");
            printf("  N : Forja do Ferreiro\n");
            printf("  L : Escada para Proximo Andar\n");
            printf("  X, Y, Z : Criaturas Hostis\n");
            printf("==================================================\n");
            printf(" Pressione qualquer tecla para retornar ao menu...");
            getch();
        }

        if (opcao == 1) {
            arma = 0; xi = 1; yi = 1; jgdo = 1; rodada = 0; chave = 0; vidas = 3; botao = 0; jg = 'v';
            mx = 8; my = 6; xv = 1; myx = 4; myy = 12; yv = 1; zx = 10; zy = 16; zv = 1; z_vidas = 5;
            moedas = 0; pocoes = 0;

            while (jgdo && vidas > 0) {
                if (rodada == 0) tamanho = 10;
                else if (rodada == 1) tamanho = 10;
                else if (rodada == 2) tamanho = 15;
                else if (rodada == 3) tamanho = 25;

                system("cls");

                int i, j;
                for (i = 0; i < tamanho; i++) {
                    for (j = 0; j < tamanho; j++) {
                        if (i == xi && j == yi) {
                            printf("%c ", jg);
                        }
                        else if (rodada == 1 && i == mx && j == my && xv == 1) {
                            printf("X ");
                        }
                        else if (rodada == 2 && i == mx && j == my && xv == 1) {
                            printf("X ");
                        }
                        else if (rodada == 3 && i == myx && j == myy && yv == 1) {
                            printf("Y ");
                        }
                        else if (rodada == 3 && i == zx && j == zy && zv == 1) {
                            printf("Z ");
                        }
                        else {
                            if (rodada == 0) {
                                printf("%c ", vila[i][j]);
                            }
                            else if (rodada == 1) {
                                printf("%c ", andar1[i][j]);
                            }
                            else if (rodada == 2) {
                                printf("%c ", andar2[i][j]);
                            }
                            else if (rodada == 3) {
                                if (zv == 0 && yv == 0 && i == 23 && j == 23) {
                                    printf("L ");
                                } else {
                                    printf("%c ", andar3[i][j]);
                                }
                            }
                        }
                    }
                    printf("\n");
                }

                printf("\n==================================================\n");
                printf(" STATUS: Vidas: %d | Moedas: %d | Chaves: %d | Pocoes: %d\n", vidas, moedas, chave, pocoes);
                printf(" ARMA EQUIPADA: ");
                if (arma == 1) printf("Espada de Ferro\n");
                else if (arma == 2) printf("Arco de Cacador\n");
                else if (arma == 3) printf("Cajado Magico\n");
                else printf("Nenhuma (Punhos)\n");
                printf("--------------------------------------------------\n");
                printf(" CONTROLES: [W A S D] Andar | [I] Interagir | [O] Atacar | [P] Cura\n");
                printf("==================================================\n");

                int tecla = getch();

                if (tecla == 'p' || tecla == 'P') {
                    if (pocoes > 0) {
                        pocoes--;
                        vidas++;
                        printf("\nVoce bebeu uma pocao! +1 Vida.\n");
                    } else {
                        printf("\nVoce nao possui pocoes de cura!\n");
                    }
                    getch();
                    continue;
                }

                int prox_x = xi, prox_y = yi;
                if (tecla == 'w' || tecla == 'W') { prox_x--; jg = '^'; }
                else if (tecla == 's' || tecla == 'S') { prox_x++; jg = 'v'; }
                else if (tecla == 'a' || tecla == 'A') { prox_y--; jg = '<'; }
                else if (tecla == 'd' || tecla == 'D') { prox_y++; jg = '>'; }

                char bloco_destino = '*';
                if (prox_x >= 0 && prox_x < tamanho && prox_y >= 0 && prox_y < tamanho) {
                    if (rodada == 0) bloco_destino = vila[prox_x][prox_y];
                    else if (rodada == 1) bloco_destino = andar1[prox_x][prox_y];
                    else if (rodada == 2) bloco_destino = andar2[prox_x][prox_y];
                    else if (rodada == 3) bloco_destino = andar3[prox_x][prox_y];
                }

                if (bloco_destino != '*' && bloco_destino != 'k' && bloco_destino != 'D' && bloco_destino != 'N') {
                    xi = prox_x;
                    yi = prox_y;
                }

                if (tecla == 'i' || tecla == 'I') {
                    int fx = xi, fy = yi;
                    if (jg == '^') fx--;
                    else if (jg == 'v') fx++;
                    else if (jg == '<') fy--;
                    else if (jg == '>') fy++;

                    char bloco_frente = '*';
                    if (fx >= 0 && fx < tamanho && fy >= 0 && fy < tamanho) {
                        if (rodada == 0) bloco_frente = vila[fx][fy];
                        else if (rodada == 1) bloco_frente = andar1[fx][fy];
                        else if (rodada == 2) bloco_frente = andar2[fx][fy];
                        else if (rodada == 3) bloco_frente = andar3[fx][fy];
                    }

                    if (bloco_frente == 'M') {
                        moedas = moedas + 10;
                        if (rodada == 0) vila[fx][fy] = ' ';
                        if (rodada == 1) andar1[fx][fy] = ' ';
                        if (rodada == 2) andar2[fx][fy] = ' ';
                        if (rodada == 3) andar3[fx][fy] = ' ';
                        printf("\nVoce coletou 10 moedas de ouro!\n");
                        getch();
                    }
                    else if (bloco_frente == '@') {
                        chave++;
                        if (rodada == 1) andar1[fx][fy] = ' ';
                        if (rodada == 2) andar2[fx][fy] = ' ';
                        if (rodada == 3) andar3[fx][fy] = ' ';
                        printf("\nVoce encontrou uma chave de bronze!\n");
                        getch();
                    }
                    else if (bloco_frente == 'D') {
                        if (chave > 0) {
                            chave--;
                            if (rodada == 1) andar1[fx][fy] = ' ';
                            if (rodada == 2) andar2[fx][fy] = ' ';
                            if (rodada == 3) andar3[fx][fy] = ' ';
                            printf("\nPorta destrancada com sucesso!\n");
                        } else {
                            printf("\nPorta trancada! Encontre uma chave.\n");
                        }
                        getch();
                    }
                    else if (rodada == 2 && bloco_frente == 'O' && botao == 0) {
                        botao = 1;
                        andar2[fx][fy] = ' ';
                        andar2[4][5] = ' ';
                        printf("\nUm estalo ecoou... Botao secreto ativado!\n");
                        getch();
                    }
                    else if (rodada == 0 && bloco_frente == 'N') {
                        system("cls");
                        printf("==================================================\n");
                        printf("                FORJA DO FERREIRO                 \n");
                        printf("==================================================\n");
                        printf(" 1. Espada de Ferro   [Preco: 0 Moedas]\n");
                        printf(" 2. Arco de Cacador   [Preco: 0 Moedas]\n");
                        printf(" 3. Cajado Magico     [Preco: 0 Moedas]\n");
                        printf(" 4. Pocao de Vida     [Preco: 20 Moedas]\n");
                        printf("--------------------------------------------------\n");
                        printf(" Seu Ouro: %d | Escolha: ", moedas);
                        int escolha_f;
                        scanf("%d", &escolha_f);
                        if (escolha_f == 1) { arma = 1; printf("\nEspada equipada!\n"); }
                        else if (escolha_f == 2) { arma = 2; printf("\nArco equipado!\n"); }
                        else if (escolha_f == 3) { arma = 3; printf("\nCajado equipado!\n"); }
                        else if (escolha_f == 4) {
                            if (moedas >= 20) { moedas = moedas - 20; pocoes++; printf("\nPocao comprada!\n"); }
                            else { printf("\nOuro insuficiente!\n"); }
                        }
                        getch();
                    }
                    else if (rodada == 0 && vila[xi][yi] == 'L') {
                        if (arma > 0) {
                            rodada = 1; xi = 1; yi = 1;
                            printf("\nEntrando no Primeiro Andar da Masmorra...\n");
                        } else {
                            printf("\nE muito perigoso entrar sem uma arma da Forja!\n");
                        }
                        getch();
                    }
                    else if (rodada == 1 && andar1[xi][yi] == 'L') {
                        rodada = 2; xi = 1; yi = 1;
                        printf("\nDescendo para o Segundo Andar da Masmorra...\n");
                        getch();
                    }
                    else if (rodada == 2 && andar2[xi][yi] == 'L') {
                        rodada = 3; xi = 1; yi = 1;
                        printf("\nCuidado! Este e o Andar Final da Masmorra...\n");
                        getch();
                    }
                    else if (rodada == 3 && zv == 0 && yv == 0 && xi == 23 && yi == 23) {
                        system("cls");
                        printf("==================================================\n");
                        printf("               VITORIA GLORIOSA!                  \n");
                        printf("==================================================\n");
                        printf(" Voce derrotou os monstros e escapou com vida!\n");
                        printf(" Parabens, voce completou o Jogo da Masmorra!\n");
                        printf("==================================================\n");
                        getch();
                        jgdo = 0;
                    }
                }

                if (tecla == 'o' || tecla == 'O') {
                    if (arma == 0) {
                        printf("\nVoce nao pode atacar de punhos nus!\n");
                        getch();
                    } else {
                        int tx, ty;
                        int dano_aplicado = 0;
                        for (tx = 0; tx < tamanho; tx++) {
                            for (ty = 0; ty < tamanho; ty++) {
                                int alcancou = 0;
                                if (arma == 1) { 
                                    if (jg == '^' && tx == xi - 1 && ty == yi) alcancou = 1;
                                    if (jg == 'v' && tx == xi + 1 && ty == yi) alcancou = 1;
                                    if (jg == '<' && tx == xi && ty == yi - 1) alcancou = 1;
                                    if (jg == '>' && tx == xi && ty == yi + 1) alcancou = 1;
                                } 
                                if (arma == 2 || arma == 3) { 
                                    if (jg == '^' && ty == yi && tx == xi - 1) alcancou = 1;
                                    if (jg == '^' && ty == yi && tx == xi - 2) alcancou = 1;
                                    if (jg == '^' && ty == yi && tx == xi - 3) alcancou = 1;
                                    if (jg == 'v' && ty == yi && tx == xi + 1) alcancou = 1;
                                    if (jg == 'v' && ty == yi && tx == xi + 2) alcancou = 1;
                                    if (jg == 'v' && ty == yi && tx == xi + 3) alcancou = 1;
                                    if (jg == '<' && tx == xi && ty == yi - 1) alcancou = 1;
                                    if (jg == '<' && tx == xi && ty == yi - 2) alcancou = 1;
                                    if (jg == '<' && tx == xi && ty == yi - 3) alcancou = 1;
                                    if (jg == '>' && tx == xi && ty == yi + 1) alcancou = 1;
                                    if (jg == '>' && tx == xi && ty == yi + 2) alcancou = 1;
                                    if (jg == '>' && tx == xi && ty == yi + 3) alcancou = 1;
                                }

                                if (alcancou == 1) {
                                    if (rodada == 1 && andar1[tx][ty] == 'k') {
                                        andar1[tx][ty] = ' ';
                                        dano_aplicado = 1;
                                    }
                                    if (rodada == 2 && andar2[tx][ty] == 'k') {
                                        andar2[tx][ty] = ' ';
                                        dano_aplicado = 1;
                                    }
                                    if (rodada == 3) {
                                        if (tx == myx && ty == myy && yv == 1) {
                                            yv = 0;
                                            dano_aplicado = 2;
                                        }
                                        if (tx == zx && ty == zy && zv == 1) {
                                            z_vidas--;
                                            dano_aplicado = 3;
                                            if (z_vidas <= 0) {
                                                zv = 0;
                                                dano_aplicado = 4;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        if (dano_aplicado == 1) { printf("\nMonstro menor eliminado!\n"); getch(); }
                        else if (dano_aplicado == 2) { printf("\nMonstro Y foi derrotado!\n"); getch(); }
                        else if (dano_aplicado == 3) { printf("\nBoss Z atingido! Vida restante: %d\n", z_vidas); getch(); }
                        else if (dano_aplicado == 4) { printf("\nIncrível! O Boss Z foi completamente destruido!\n"); getch(); }
                        else { printf("\nO ataque nao acertou nenhum alvo.\n"); getch(); }
                    }
                }

                if (rodada == 2 && andar2[xi][yi] == '#') {
                    vidas--; xi = 1; yi = 1;
                    printf("\nArmadilha! Voce pisou em espinhos. Perdeu 1 Vida.\n");
                    getch();
                }
                if (rodada == 3 && andar3[xi][yi] == '#') {
                    vidas--; xi = 1; yi = 1;
                    printf("\nArmadilha! Voce pisou em espinhos. Perdeu 1 Vida.\n");
                    getch();
                }

                if (rodada == 1 && xv == 1) {
                    int direcao_m = rand() % 4;
                    int tmx = mx, tmy = my;
                    if (direcao_m == 0) tmx--;
                    if (direcao_m == 1) tmx++;
                    if (direcao_m == 2) tmy--;
                    if (direcao_m == 3) tmy++;
                    
                    char checa_bloco = '*';
                    if (tmx >= 0 && tmx < tamanho && tmy >= 0 && tmy < tamanho) {
                        checa_bloco = andar1[tmx][tmy];
                    }
                    if (checa_bloco != '*') {
                        mx = tmx;
                        my = tmy;
                    }
                    if (mx == xi && my == yi) {
                        vidas--; xi = 1; yi = 1;
                        printf("\nO Monstro X te atacou! Voce desmaiou e voltou ao inicio.\n");
                        getch();
                    }
                }

                if (rodada == 2 && xv == 1) {
                    int direcao_m = rand() % 4;
                    int tmx = mx, tmy = my;
                    if (direcao_m == 0) tmx--;
                    if (direcao_m == 1) tmx++;
                    if (direcao_m == 2) tmy--;
                    if (direcao_m == 3) tmy++;
                    
                    char checa_bloco = '*';
                    if (tmx >= 0 && tmx < tamanho && tmy >= 0 && tmy < tamanho) {
                        checa_bloco = andar2[tmx][tmy];
                    }
                    if (checa_bloco != '*') {
                        mx = tmx;
                        my = tmy;
                    }
                    if (mx == xi && my == yi) {
                        vidas--; xi = 1; yi = 1;
                        printf("\nO Monstro X te atacou! Voce desmaiou e voltou ao inicio.\n");
                        getch();
                    }
                }
                
                if (rodada == 3) {
                    if (yv == 1 && rand() % 2 == 0) {
                        if (myx < xi) myx++; 
                        else if (myx > xi) myx--;
                        if (myy < yi) myy++; 
                        else if (myy > yi) myy--;
                    }
                    if (zv == 1) {
                        int pzx = zx, pzy = zy;
                        int sorteio = rand() % 2;
                        if (sorteio == 0) {
                            if (zx < xi) pzx++; 
                            else if (zx > xi) pzx--;
                        } else {
                            if (zy < yi) pzy++; 
                            else if (zy > yi) pzy--;
                        }
                        char checa_z = '*';
                        if (pzx >= 0 && pzx < tamanho && pzy >= 0 && pzy < tamanho) {
                            checa_z = andar3[pzx][pzy];
                        }
                        if (checa_z != '*') {
                            zx = pzx;
                            zy = pzy;
                        }
                    }
                    
                    if (myx == xi && myy == yi && yv == 1) {
                        vidas--; xi = 1; yi = 1;
                        printf("\nO Guardiao Y te alcancou! Voce perdeu 1 vida.\n");
                        getch();
                    }
                    if (zx == xi && zy == yi && zv == 1) {
                        vidas--; xi = 1; yi = 1;
                        printf("\nO Terrivel Boss Z te esmagou! Voce perdeu 1 vida.\n");
                        getch();
                    }
                }
            }

            if (vidas <= 0) {
                system("cls");
                printf("==================================================\n");
                printf("                    GAME OVER                     \n");
                printf("==================================================\n");
                printf(" Suas vidas esgotaram nas profundezas da masmorra.\n");
                printf(" Tente novamente na próxima jornada!\n");
                printf("==================================================\n");
                printf(" Pressione qualquer tecla para retornar ao menu...");
                getch();
            }
        }
    }
    return 0;
}
