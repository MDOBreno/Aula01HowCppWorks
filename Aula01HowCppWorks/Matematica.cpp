//
//  Matematica.cpp
//  Aula01HowCppWorks
//
//  Created by Breno Medeiros on 21/06/20.
//  Copyright © 2020 ProgramasBMO. All rights reserved.
//

#include "Matematica.hpp"


#define INTEIRO int         //Substitui todo lugar com o texto 'INTEIRO' pelo texto 'int'

//O codigo entre "#if 1" e "#endif" será escrito e será compilado, pois 1 equivale a true, e 0 false
#if 1
INTEIRO Multiplicar(int a, int b) {
    INTEIRO resultado = a * b;
    return resultado;
}
#endif
 
