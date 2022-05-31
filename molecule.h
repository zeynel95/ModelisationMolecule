#include <stdio.h>
#include <stdlib.h>

typedef enum {H, O, C} typeAtome;
typedef enum {H20, O2, C02} typeMolecule;
typedef enum {SIMPLE, DOUBLE, TRIPLE} typeLiaison;

typedef struct liaison
{
    typeLiaison type;
    atome* frere1, frere2;
} liaison;

typedef struct atome
{
    typeAtome type;
    atome* frere[10];
} atome;


typedef struct molecule
{
    typeMolecule type;
    atome ensembleAtome[100];
    liaison ensembleLiaison[1000];
} molecule;
