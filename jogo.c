#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>

char andar1_original[10][10] = {
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

char andar2_original[15][15] = {
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
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D','L','*'},
    {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'}
};

char andar3_original[25][25] = {
    {'*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ','@','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*',' Craven ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','D',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*','*','*','*','*','*','*','*','*','*','D','*','*'},
    {'*',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','*'},
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

int main() {
    int opcao;
    srand(time(NULL));

    while (1) {
        system("cls");
        printf("--- MENU PRINCIPAL ---\n");
        printf(" 1. Jogar\n");
        printf(" 2. Tutorial\n");
        printf(" 3. Sair\n");
        printf(" Escolha: ");
        if (scanf("%d", &opcao) != 1) {
            while (getchar() != '\n'); 
            continue;
        }

        if (opcao == 3) {
            break;
        }
        else if (opcao == 2) {
            system("cls");
            printf("--- TUTORIAL ---\n");
            printf(" Use W, A, S, D para andar.\n");
            printf(" Pressione I para interagir com itens na sua frente.\n");
            printf(" Pressione O para atacar na sua frente.\n\n");
            printf(" Simbolos:\n");
            printf(" * : Parede\n");
            printf(" # : Espinho\n");
            printf(" k : Caixa destruivel\n");
            printf(" O : Botao\n");
            printf(" D : Porta fechada\n");
            printf(" @ : Chave\n");
            printf(" L : Escada\n");
            printf(" X, Y : Monstros\n");
            printf(" Z : Boss Final\n\n");
            printf(" Pressione qualquer tecla para voltar...");
            getch();
        }
        else if (opcao == 1) {
            int arma = 0;
            int xi = 1, yi = 1;
            char jg = 'v';
            int jogando = 1;
            int rodada = 0; 
            int chave = 0;
            int vidas = 3;
            int tamanho = 10;
            int botao_pressionado = 0;

            char andar1[10][10], andar2[15][15], andar3[25][25];
            int linha, coluna;

            for (linha = 0; linha < 10; linha++) {
                for (coluna = 0; coluna < 10; coluna++) {
                    andar1[linha][coluna] = andar1_original[linha][coluna];
                }
            }

            for (linha = 0; linha < 15; linha++) {
                for (coluna = 0; coluna < 15; coluna++) {
                    andar2[linha][coluna] = andar2_original[linha][coluna];
                }
            }

            for (linha = 0; linha < 25; linha++) {
                for (coluna = 0; coluna < 25; coluna++) {
                    andar3[linha][coluna] = andar3_original[linha][coluna];
                }
            }

            char vila[10][10] = {
                {'*','*','*','*','*','*','*','*','*','*'},
                {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
                {'*',' ','N',' ',' ','*',' ',' ',' ','*'},
                {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
                {'*',' ',' ',' ',' ','*',' ',' ',' ','*'},
                {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                {'*',' ',' ',' ',' ','*','*','*','*','*'},
                {'*',' ',' ',' ',' ',' ',' ',' ',' ','*'},
                {'*',' ',' ',' ',' ',' ',' ',' ','L','*'},
                {'*','*','*','*','*','*','*','*','*','*'}
            };

            int mx = 8, my = 6, xv = 1; 
            int myx = 4, myy = 12, yv = 1; 
            int zx = 12, zy = 12, zv = 1, z_vidas = 5; 

            while (jogando) {
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
                            if (rodada == 0) printf("%c ", vila[i][j]);
                            else if (rodada == 1) printf("%c ", andar1[i][j]);
                            else if (rodada == 2) printf("%c ", andar2[i][j]);
                            else if (rodada == 3) printf("%c ", andar3[i][j]);
                        }
                    }
                    printf("\n");
                }

                printf("\nVidas: %d | Chaves: %d | Arma: ", vidas, chave);
                if (arma == 1) printf("Espada\n");
                else if (arma == 2) printf("Arco\n");
                else if (arma == 3) printf("Cajado\n");
                else printf("Nenhuma\n");

                printf("[W A S D] Mover | [I] Interagir | [O] Atacar\n");

                int tecla = getch();
                int px = xi;
                int py = yi;

                if (tecla == 'w' || tecla == 'W') { px--; jg = '^'; }
                else if (tecla == 's' || tecla == 'S') { px++; jg = 'v'; }
                else if (tecla == 'a' || tecla == 'A') { py--; jg = '<'; }
                else if (tecla == 'd' || tecla == 'D') { py++; jg = '>'; }

                char celula_futura = ' ';
                if (rodada == 0) celula_futura = vila[px][py];
                else if (rodada == 1) celula_futura = andar1[px][py];
                else if (rodada == 2) celula_futura = andar2[px][py];
                else if (rodada == 3) celula_futura = andar3[px][py];

                if (celula_futura != '*') {
                    if (celula_futura != 'k') {
                        if (celula_futura != 'D') {
                            xi = px; 
                            yi = py;
                        }
                    }
                }

                if (tecla == 'i' || tecla == 'I') {
                    int fx = xi, fy = yi;
                    if (jg == '^') fx--;
                    else if (jg == 'v') fx++;
                    else if (jg == '<') fy--;
                    else if (jg == '>') fy++;

                    if (rodada == 0) {
                        if (vila[fx][fy] == 'N') {
                            system("cls");
                            printf("Escolha sua Arma:\n1. Espada\n2. Arco\n3. Cajado\nEscolha: ");
                            scanf("%d", &arma);
                            printf("\nArma guardada!\n");
                            getch();
                        }
                    }
                    else if (rodada == 1) {
                        if (andar1[fx][fy] == '@') { chave++; andar1[fx][fy] = ' '; }
                        else if (andar1[fx][fy] == 'D') {
                            if (chave > 0) { chave--; andar1[fx][fy] = '='; }
                        }
                    }
                    else if (rodada == 2) {
                        if (andar2[fx][fy] == '@') { chave++; andar2[fx][fy] = ' '; }
                        else if (andar2[fx][fy] == 'D') {
                            if (chave > 0) { chave--; andar2[fx][fy] = '='; }
                        }
                        else if (andar2[fx][fy] == 'O') {
                            if (botao_pressionado == 0) {
                                botao_pressionado = 1;
                                andar2[4][5] = '='; 
                                printf("\nUma passagem se abriu!\n");
                                getch();
                            }
                        }
                    }
                    else if (rodada == 3) {
                        if (andar3[fx][fy] == '@') { chave++; andar3[fx][fy] = ' '; }
                        else if (andar3[fx][fy] == 'D') {
                            if (chave > 0) { chave--; andar3[fx][fy] = '='; }
                        }
                    }
                }

                if (tecla == 'o' || tecla == 'O') {
                    if (arma == 0) {
                        printf("\nPegue uma arma na vila primeiro!\n");
                        getch();
                    } else {
                        int tx, ty;
                        for (tx = 0; tx < tamanho; tx++) {
                            for (ty = 0; ty < tamanho; ty++) {
                                int atingido = 0;

                                if (arma == 1) { 
                                    if (jg == '^') {
                                        if (tx == xi-1 || tx == xi-2) {
                                            if (ty >= yi-1 && ty <= yi+1) atingido = 1;
                                        }
                                    }
                                    else if (jg == 'v') {
                                        if (tx == xi+1 || tx == xi+2) {
                                            if (ty >= yi-1 && ty <= yi+1) atingido = 1;
                                        }
                                    }
                                    else if (jg == '<') {
                                        if (ty == yi-1 || ty == yi-2) {
                                            if (tx >= xi-1 && tx <= xi+1) atingido = 1;
                                        }
                                    }
                                    else if (jg == '>') {
                                        if (ty == yi+1 || ty == yi+2) {
                                            if (tx >= xi-1 && tx <= xi+1) atingido = 1;
                                        }
                                    }
                                }
                                else if (arma == 2) { 
                                    if (jg == '^') {
                                        if (ty == yi) {
                                            if (tx >= xi-4 && tx < xi) atingido = 1;
                                        }
                                    }
                                    else if (jg == 'v') {
                                        if (ty == yi) {
                                            if (tx <= xi+4 && tx > xi) atingido = 1;
                                        }
                                    }
                                    else if (jg == '<') {
                                        if (tx == xi) {
                                            if (ty >= yi-4 && ty < yi) atingido = 1;
                                        }
                                    }
                                    else if (jg == '>') {
                                        if (tx == xi) {
                                            if (ty <= yi+4 && ty > yi) atingido = 1;
                                        }
                                    }
                                }
                                else if (arma == 3) { 
                                    if (tx >= xi-1 && tx <= xi+1) {
                                        if (ty >= yi-1 && ty <= yi+1) {
                                            if (tx != xi || ty != yi) atingido = 1;
                                        }
                                    }
                                }

                                if (atingido == 1) {
                                    if (rodada == 1) {
                                        if (andar1[tx][ty] == 'k') andar1[tx][ty] = ' ';
                                        if (tx == mx && ty == my) xv = 0;
                                    }
                                    else if (rodada == 2) {
                                        if (andar2[tx][ty] == 'k') andar2[tx][ty] = ' ';
                                        if (tx == mx && ty == my) xv = 0;
                                    }
                                    else if (rodada == 3) {
                                        if (tx == myx && ty == myy) { yv = 0; }
                                        if (tx == zx && ty == zy) {
                                            if (zv == 1) {
                                                z_vidas--;
                                                printf("\nBoss Z atingido! Vidas: %d\n", z_vidas);
                                                getch();
                                                if (z_vidas <= 0) zv = 0;
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }

                int pisou_espinho = 0;
                if (rodada == 2) {
                    if (andar2[xi][yi] == '#') pisou_espinho = 1;
                }
                else if (rodada == 3) {
                    if (andar3[xi][yi] == '#') pisou_espinho = 1;
                }

                if (pisou_espinho == 1) {
                    vidas--;
                    printf("\nVoce pisou em espinhos!\n"); 
                    getch();
                    xi = 1; 
                    yi = 1;
                    if (rodada == 2) {
                        for (linha = 0; linha < 15; linha++) {
                            for (coluna = 0; coluna < 15; coluna++) {
                                andar2[linha][coluna] = andar2_original[linha][coluna];
                            }
                        }
                        mx = 8; my = 6; xv = 1; botao_pressionado = 0;
                    }
                }

                if (rodada == 1 || rodada == 2) {
                    if (xv == 1) {
                        int r = rand() % 4;
                        int pmx = mx, pmy = my;
                        if (r == 0) pmx--;
                        else if (r == 1) pmx++;
                        else if (r == 2) pmy--;
                        else if (r == 3) pmy++;

                        if (rodada == 1) {
                            if (andar1[pmx][pmy] != '*') { mx = pmx; my = pmy; }
                        }
                        else if (rodada == 2) {
                            if (andar2[pmx][pmy] != '*') { mx = pmx; my = pmy; }
                        }

                        if (mx == xi && my = yi) {
                            vidas--; 
                            printf("\nO Monstro X te pegou!\n"); 
                            getch();
                            xi = 1; 
                            yi = 1;
                            if (rodada == 2) {
                                for (linha = 0; linha < 15; linha++) {
                                    for (coluna = 0; coluna < 15; coluna++) {
                                        andar2[linha][coluna] = andar2_original[linha][coluna];
                                    }
                                }
                                mx = 8; my = 6; xv = 1; botao_pressionado = 0;
                            }
                        }
                    }
                }

                if (rodada == 3) {
                    if (yv == 1) {
                        if (myx < xi) myx++; 
                        else if (myx > xi) myx--;
                        else if (myy < yi) myy++; 
                        else if (myy > yi) myy--;

                        if (myx == xi && myy == yi) {
                            vidas--; 
                            printf("\nO Monstro Y te pegou!\n"); 
                            getch();
                            xi = 1; 
                            yi = 1;
                        }
                    }
                }

                if (rodada == 3) {
                    if (zv == 1) {
                        int pzx = zx, pzy = zy;
                        if (zx < xi) pzx++; 
                        else if (zx > xi) pzx--;
                        if (zy < yi) pzy++; 
                        else if (zy > yi) pzy--;
                        
                        if (andar3[pzx][pzy] == '*') {
                            andar3[pzx][pzy] = ' '; 
                        }
                        zx = pzx; 
                        zy = pzy;

                        if (zx == xi && zy == yi) {
                            vidas--; 
                            printf("\nO BOSS Z TE ATROPELOU!\n"); 
                            getch();
                            xi = 1; 
                            yi = 1;
                        }
                    }
                }

                if (rodada == 0) {
                    if (vila[xi][yi] == 'L') {
                        if (arma == 0) { 
                            printf("\nPegue uma arma antes de ir!\n"); 
                            getch(); 
                            xi = 1; 
                            yi = 1; 
                        } else { 
                            rodada = 1; tamanho = 10; xi = 1; yi = 1; chave = 0; 
                        }
                    }
                }
                else if (rodada == 1) {
                    if (andar1[xi][yi] == 'L') {
                        rodada = 2; tamanho = 15; xi = 1; yi = 1; chave = 0; mx = 8; my = 6; xv = 1;
                    }
                }
                else if (rodada == 2) {
                    if (andar2[xi][yi] == 'L') {
                        rodada = 3; tamanho = 25; xi = 1; yi = 1; chave = 0;
                    }
                }

                if (rodada == 3) {
                    if (zv == 0) {
                        system("cls");
                        printf("VITORIA!\n");
                        printf("Voce derrotou o Boss Z e salvou a vila!\n");
                        getch();
                        jogando = 0;
                    }
                }

                if (vidas <= 0) {
                    system("cls");
                    printf("GAME OVER\n");
                    getch();
                    jogando = 0;
                }
            }
        }
    }
    return 0;
}