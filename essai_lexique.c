#include <stdio.h>
#include <stdlib.h>

#include "analyse_lexicale.h"

int main(int argc, char** argv){
    if (argc != 2)
    {
        printf("nombre dargument incorrecte !!\n");
        return 1;
    }
    demarrer(argv[1]);
    while (!fin_de_sequence())
    {
        afficher(lexeme_courant());
        avancer();
    }
    
    return 0;
}