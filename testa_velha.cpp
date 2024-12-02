/**
 * @file TDD_velha/velha.cpp
 * @brief verifica situacao do jogo da velha
 * @author Programador
 * * Copyright 2024 Davi Bueno
 * @param  velha descreve o parametro
 *
 *  Descrever o que a funcao faz
 */
#include <bits/stdc++.h>
#include <iostream>
#include "velha.hpp"

#define CATCH_CONFIG_MAIN
#include "catch.hpp"

TEST_CASE("VerificaVelha0", "[single-file]") {
int teste0[3][3]= {{ 0, 0, 0 },
                   { 0, 0, 0 },
                   { 0, 0, 0 }};
    REQUIRE(VerificaVelha(teste0) == 0);
}

TEST_CASE("VerificaVelha1", "[single-file]") {
int teste1[3][3]= {{ 0, 0, 0 },
                   { 0, 1, 0 },
                   { 0, 0, 0 }};
    REQUIRE(VerificaVelha(teste1) == -1);
}

TEST_CASE("VerificaLinhaTest1", "[single-file]") {
int teste2[3][3]= {{ 0, 0, 0 },
                   { 0, 1, 0 },
                   { 1, 1, 1 }};
    REQUIRE(VerificaLinha(teste2) == 1);
}

TEST_CASE("VerificaLinhaTest2", "[single-file]") {
int teste3[3][3]= {{ 1, 2, 1 },
                   { 2, 2, 2 },
                   { 1, 2, 1 }};
    REQUIRE(VerificaLinha(teste3) == 2);
}

TEST_CASE("VerificaColuna", "[single-file]") {
int teste4[3][3]= {{ 1, 2, 2 },
                   { 1, 1, 2 },
                   { 1, 2, 0 }};
    REQUIRE(VerificaColuna(teste4) == 1);
}

TEST_CASE("VerificaDiagonal1", "[single-file]") {
int teste5[3][3]= {{ 1, 2, 2 },
                   { 1, 1, 2 },
                   { 2, 2, 1 }};
    REQUIRE(VerificaDiagonal(teste5) == 1);
}

TEST_CASE("VerificaDiagonal2", "[single-file]") {
int teste6[3][3]= {{ 1, 1, 2 },
                   { 1, 2, 1 },
                   { 2, 2, 1 }};
    REQUIRE(VerificaDiagonal(teste6) == 2);
}

TEST_CASE("Verifica jogo indefinido", "[single-file]") {
    int teste7[3][3] = {
        {1, 2, 1},
        {1, 2, 2},
        {2, 1, 1}
    };
    REQUIRE(VerificaIndefinido(teste7) == -2);
}

TEST_CASE("Verifica tabuleiro completo com um X ou um O versão 1", "[single-file]") {
    int teste8[3][3] = {
        {1, 1, 1},
        {1, 1, 1},
        {1, 1, 1}
    };
    REQUIRE(VerificaVelha(teste8) == -2);
}

TEST_CASE("teste Verifica tabuleiro completo com um X ou um O versão 2", "[single-file]") {
    int teste9[3][3] = {
        {2, 2, 2},
        {2, 2, 2},
        {2, 2, 2}
    };
    REQUIRE(VerificaVelha(teste9) == -2);
}
