/**
 * @file TDD_velha/velha.cpp
 * @brief verifica situacao do jogo da velha
 * @author Programador
 * * Copyright 2024 Davi Bueno
 * @param  velha descreve o parametro
 *
 *  Descrever o que a funcao faz
 */

#include "velha.hpp"
#define CATCH_CONFIG_MAIN
#include <gtest/gtest.h>

TEST(VerificaVelhaTest, JogoIndefinido) {
int teste1[3][3]= {{ 2, 0, 1 },
                   { 2, 0, 1 },
                   { 0, 2, 1 }};
    EXPECT_EQ(VerificaVelha(teste1), 1);
}
