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

    int mx = 8, my = 6, xv = 1; 
    int myx = 4, myy = 12, yv = 1; 
    int zx = 10, zy = 16, zv = 1, z_vidas = 5; 

    char vila[10][10] = {
        {'*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ','N',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','*','*','*','*','*'},
        {'*',' ',' ',' ',' ','*',' ',' ','L','*'},
        {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
        {'*','*','*','*','*','*','*','*','*','*'}
    };

    char andar1[10][10] = {
        {'*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ','k',' ','*',' ','@','*'},
        {'*',' ',' ',' ',' ',' ','D',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*','*',' ','*'},
        {'*','k',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ','k',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ','k',' ',' ','L','*'},
        {'*','*','*','*','*','*','*','*','*','*'}
    };

    char andar2[15][15] = {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ','@','*'},
        {'*',' ','#',' ','#',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ','#',' ',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*','*','*','*','*',' ','*',' ',' ',' ','*',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ','*',' ',' ',' ','*',' ',' ','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ','*','*'},
        {'*','#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*','O',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ','#',' ',' ',' ','#',' ',' ',' ',' ',' ',' ','@','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','L','D',' '}, 
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
    };

    char andar3[25][25] = {
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','@','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' Bradford ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','D','*','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','D','*','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ','*'},
        {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
        {'*','@',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','@','*'},
        {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
    };

    srand(time(NULL));

    while (1) {
        system("cls");
        printf("==========================================\n");
        printf("             JOGO DA MASMORRA             \n");
        printf("==========================================\n");
        printf(" 1. Jogar\n");
        printf(" 2. Como Jogar\n");
        printf(" 3. Sair\n");
        printf("------------------------------------------\n");
        printf(" Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 3) {
            printf("\nTchau!\n");
            break;
        }
        
        if (opcao == 2) {
            system("cls");
            printf("=== COMO JOGAR ===\n");
            printf(" Mover: W, A, S, D | Interagir: I | Atacar: O\n");
            printf(" Pressione qualquer tecla para voltar...");
            getch();
        }

        if (opcao == 1) {
            arma = 0; xi = 1; yi = 1; jgdo = 1; rodada = 0; chave = 0; vidas = 3; botao = 0; jg = 'v';
            mx = 8; my = 6; xv = 1; myx = 4; myy = 12; yv = 1; zx = 10; zy = 16; zv = 1; z_vidas = 5;

            while (jgdo && vidas > 0) {
                if (rodada == 0 || rodada == 1) tamanho = 10;
                else if (rodada == 2) tamanho = 15;
                else if (rodada == 3) tamanho = 25;

                system("cls");

                int i, j;
                for (i = 0; i < tamanho; i++) {
                    for (j = 0; j < tamanho; j++) {
                        if (i == xi && j == yi) {
                            printf("%c ", jg);
                        }
                        else if ((rodada == 1 || rodada == 2) && i == mx && j == my && xv == 1) {
                            printf("X ");
                        }
                        else if (rodada == 3 && i == myx && j == myy && yv == 1) {
                            printf("Y ");
                        }
                        else if (rodada == 3 && i == zx && j == zy && zv == 1) {
                            printf("Z ");
                        }
                        else {
                            if (rodada == 0) printf("%c ", vila[i][j]);
                            else if (rodada == 1) printf("%c ", andar1[i][j]);
                            else if (rodada == 2) printf("%c ", andar2[i][j]);
                            else if (rodada == 3) {
                                if (zv == 0 && yv == 0 && i == 23 && j == 23) printf("L ");
                                else printf("%c ", andar3[i][j]);
                            }
                        }
                    }
                    printf("\n");
                }

                printf("\n==================================================\n");
                printf(" Vidas: %d | Chaves: %d | Arma: ", vidas, chave);
                if (arma == 1) printf("Espada\n");
                else if (arma == 2) printf("Arco\n");
                else if (arma == 3) printf("Cajado\n");
                else printf("Nenhuma\n");
                printf(" Comandos: [W A S D] Andar | [I] Interagir | [O] Atacar\n");
                printf("==================================================\n");

                int tecla = getch();

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

                    if (bloco_frente == '@') {
                        chave++;
                        if (rodada == 1) andar1[fx][fy] = ' ';
                        if (rodada == 2) andar2[fx][fy] = ' ';
                        if (rodada == 3) andar3[fx][fy] = ' ';
                        printf("\nPegou uma chave!\n");
                        getch();
                    }
                    else if (bloco_frente == 'D') {
                        if (chave > 0) {
                            chave--;
                            if (rodada == 1) andar1[fx][fy] = ' ';
                            if (rodada == 2) andar2[fx][fy] = ' ';
                            if (rodada == 3) andar3[fx][fy] = ' ';
                            printf("\nPorta aberta!\n");
                        } else {
                            printf("\nSem chave!\n");
                        }
                        getch();
                    }
                    else if (rodada == 2 && bloco_frente == 'O' && botao == 0) {
                        botao = 1;
                        andar2[fx][fy] = ' ';
                        andar2[4][5] = ' ';
                        printf("\nBotao secreto ativado!\n");
                        getch();
                    }
                    else if (rodada == 0 && bloco_frente == 'N') {
                        system("cls");
                        printf("=== FORJA ===\n1. Espada\n2. Arco\n3. Cajado\nEscolha: ");
                        scanf("%d", &arma);
                    }
                    else if (rodada == 0 && vila[xi][yi] == 'L' && arma > 0) { rodada = 1; xi = 1; yi = 1; }
                    else if (rodada == 1 && andar1[xi][yi] == 'L') { rodada = 2; xi = 1; yi = 1; }
                    else if (rodada == 2 && andar2[xi][yi] == 'L') { rodada = 3; xi = 1; yi = 1; }
                    else if (rodada == 3 && zv == 0 && yv == 0 && xi == 23 && yi == 23) {
                        system("cls");
                        printf("========================\n VOCE VENCEU O JOGO! \n========================\n");
                        getch();
                        jgdo = 0;
                    }
                }

                if (tecla == 'o' || tecla == 'O') {
                    if (arma == 0) {
                        printf("\nVoce esta desarmado!\n");
                        getch();
                    } else {
                        int tx, ty;
                        for (tx = 0; tx < tamanho; tx++) {
                            for (ty = 0; ty < tamanho; ty++) {
                                int acertou = 0;
                                if (arma == 1) { 
                                    if (jg == '^' && tx == xi-1 && ty == yi) acertou = 1;
                                    if (jg == 'v' && tx == xi+1 && ty == yi) acertou = 1;
                                    if (jg == '<' && tx == xi && ty == yi-1) acertou = 1;
                                    if (jg == '>' && tx == xi && ty == yi+1) acertou = 1;
                                } else { 
                                    if (jg == '^' && ty == yi && tx < xi && tx >= xi-3) acertou = 1;
                                    if (jg == 'v' && ty == yi && tx > xi && tx <= xi+3) acertou = 1;
                                    if (jg == '<' && tx == xi && ty < yi && ty >= yi-3) acertou = 1;
                                    if (jg == '>' && tx == xi && ty > yi && ty <= yi+3) acertou = 1;
                                }

                                if (acertou) {
                                    if (rodada == 1 && andar1[tx][ty] == 'k') andar1[tx][ty] = ' ';
                                    if (rodada == 2 && andar2[tx][ty] == 'k') andar2[tx][ty] = ' ';
                                    if (rodada == 3) {
                                        if (tx == myx && ty == myy && yv == 1) { yv = 0; printf("\nMonstro Y morreu!\n"); getch(); }
                                        if (tx == zx && ty == zy && zv == 1) {
                                            z_vidas--;
                                            printf("\nBoss Z danificado! HP: %d\n", z_vidas);
                                            getch();
                                            if (z_vidas <= 0) { zv = 0; printf("\nBoss Z destruido!\n"); getch(); }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                if ((rodada == 2 && andar2[xi][yi] == '#') || (rodada == 3 && andar3[xi][yi] == '#')) {
                    vidas--; xi = 1; yi = 1;
                    printf("\nPisou nos espinhos! Voltou ao inicio.\n");
                    getch();
                }

                if ((rodada == 1 || rodada == 2) && xv == 1) {
                    int r = rand() % 4;
                    int pmx = mx, pmy = my;
                    if (r == 0) pmx--; if (r == 1) pmx++; if (r == 2) pmy--; if (r == 3) pmy++;
                    
                    char bloco_m = '*';
                    if (pmx >= 0 && pmx < tamanho && pmy >= 0 && pmy < tamanho) {
                        if (rodada == 1) bloco_m = andar1[pmx][pmy];
                        else if (rodada == 2) bloco_m = andar2[pmx][pmy];
                    }
                    if (bloco_m != '*') { mx = pmx; my = pmy; }
                    if (mx == xi && my == yi) { vidas--; xi = 1; yi = 1; printf("\nO Monstro te pegou!\n"); getch(); }
                }
                
                if (rodada == 3) {
                    if (yv == 1 && rand() % 2 == 0) {
                        if (myx < xi) myx++; else if (myx > xi) myx--;
                        if (myy < yi) myy++; else if (myy > yi) myy--;
                    }
                    if (zv == 1) {
                        int pzx = zx, pzy = zy;
                        if (rand() % 2 == 0) { if (zx < xi) pzx++; else if (zx > xi) pzx--; }
                        else { if (zy < yi) pzy++; else if (zy > yi) pzy--; }
                        if (pzx >= 0 && pzx < tamanho && pzy >= 0 && pzy < tamanho && andar3[pzx][pzy] != '*') { zx = pzx; zy = pzy; }
                    }
                    if ((myx == xi && myy == yi && yv == 1) || (zx == xi && zy == yi && zv == 1)) {
                        vidas--; xi = 1; yi = 1;
                        printf("\nUm monstro te atacou no Andar 3!\n");
                        getch();
                    }
                }
            }

            if (vidas <= 0) {
                system("cls");
                printf("====================\n     GAME OVER      \n====================\n");
                getch();
            }
        }
    }
    return 0;
}
