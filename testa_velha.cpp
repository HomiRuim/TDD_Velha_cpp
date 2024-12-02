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


TEST_CASE("VerificaVelha", "[single-file]") {
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
