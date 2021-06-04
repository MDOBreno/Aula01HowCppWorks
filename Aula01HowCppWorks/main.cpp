//
//  main.cpp
//  Aula01HowCppWorks
//
//  Created by Breno Medeiros on 20/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.hpp"          //Inutil, pois o Linker busca automaticamente onde está Log()
#include "Matematica.hpp"   //Inutil

void Log(const char* /*mensagem*/);     //Poderia tb deixar sem o nome de argumento: 'mensagem'

int Multiplicar() {
    return 5 * 2; // Durante a compilação isso se tornará "return 10;" por questa de otimizacao
}

int main(int argc, const char * argv[]) {
    // insert code here...
    Log("Hello, World!\n");
    std::cin.get();
    Multiplicar(); // Vai executar o Multiplicar desse arquivo, e nao o Multiplicar(int a,int b)
                   // da classe Matematica. Alem disso o retorno dessa conta(que vale 10) nao
                   // estamos nem usando(para Printar, por exemplo) e nem armazenando.
    
    return 0;
#include "ColcheteFinal.h"          // Copia para essa linha o texto escrito em "ColcheteFinal.h"
