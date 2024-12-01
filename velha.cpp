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

int VerificaVelha(int velha[3][3]) {
    int xcount = 0;
    int ocount = 0;
	for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j)
            if (velha[i][j] == 1) {
                xcount++;
            }
            else if (velha[i][j] == 2) {
                ocount++;
            }
    }
    if ((xcount == 1 && ocount == 0) || (xcount == 0 && ocount == 1)) {
        return -1;
    }
return 0; /*!< retorna zero para teste */}
