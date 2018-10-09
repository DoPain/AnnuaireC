#include "annuaire.h"
#include <stdlib.h>

int main(void){
    struct Annuaire a;
    a.taille = 10;
    a.tableau = malloc(a.taille * sizeof(struct Personne));

    afficher_annuaire(&a);
}