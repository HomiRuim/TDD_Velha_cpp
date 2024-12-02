/**
 * @file TDD_velha/velha.cpp
 * @brief verifica situacao do jogo da velha
 * @author Programador
 * * Copyright 2024 Davi Bueno
 * @param  velha descreve o parametro
 *
 *  Descrever o que a funcao faz
 */

#ifndef SIGSTKSZ
#define SIGSTKSZ 16384  // Valor típico em sistemas Unix/Linux
#endif

#include "velha.hpp"
#include <iostream>

int VerificaVelha(int velha[3][3]) {  // verifica se o jogo é inválido
    int xcount = 0;
    int ocount = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++)
            if (velha[i][j] == 1) {
                xcount++;
            } else if (velha[i][j] == 2) {
                ocount++;
            }
    }
    if ((xcount == 1 && ocount == 0) || (xcount == 0 && ocount == 1)) {
        return -1;
    }
    if (xcount == 9 || ocount == 9) {
        return -2;
    }
    if (xcount == 0 && ocount == 0) {
        return 0;
    }
    return 0;
}

int VerificaLinha(int velha[3][3]) {
    for (int i = 0; i < 3; i++) {
        if (velha[i][0] == 1 && velha[i][1] == 1 && velha[i][2] == 1) {
            return 1;
        }
        if (velha[i][0] == 2 && velha[i][1] == 2 && velha[i][2] == 2) {
            return 2;
        }
    }
    return 0;
}

int VerificaColuna(int velha[3][3]) {
    for (int j = 0; j < 3; j++) {
        if (velha[0][j] == 1 && velha[1][j] == 1 && velha[2][j] == 1) {
            return 1;
        }
        if (velha[0][j] == 2 && velha[1][j] == 2 && velha[2][j] == 2) {
            return 2;
        }
    }
    return 0;
}

int VerificaDiagonal(int velha[3][3]) {
    if (velha[0][0] == 1 && velha[1][1] == 1 && velha[2][2] == 1) {
        return 1;
    }
    else if (velha[0][2] == 1 && velha[1][1] == 1 && velha[2][0] == 1) {
        return 1;
    }
    else if (velha[0][0] == 2 && velha[1][1] == 2 && velha[2][2] == 2) {
        return 2;
    }
    else if (velha[0][2] == 2 && velha[1][1] == 2 && velha[2][0] == 2) {
        return 2;
    }
    return 0;
}

int VerificaIndefinido(int velha[3][3]) {
    if (VerificaLinha(velha) != 0 || VerificaColuna(velha) != 0 || VerificaDiagonal(velha) != 0) {
        return 0;
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (velha[i][j] == 0) {
                return 0;
            }
        }
    }
    return -2;
}
