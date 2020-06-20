//
//  main.cpp
//  Aula01HowCppWorks
//
//  Created by Breno Medeiros on 20/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include <iostream>
#include "Log.hpp"      //Não é necessario, pois o Linker busca automaticamente onde está Log()

void Log(const char* mensagem);     //Poderia tb deixar sem o nome de argumento: 'mensagem'

int main(int argc, const char * argv[]) {
    // insert code here...
    Log("Hello, World!\n");
    std::cin.get();
    
    return 0;
}
