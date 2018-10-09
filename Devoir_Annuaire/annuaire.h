#ifndef ANNUAIRE_H
#define ANNUAIRE_H

#include "personne.h"
struct Annuaire {
    int taille;
    struct Personne *tableau;
};

void afficher_annuaire(const struct Annuaire *ptr_annuaire);
void detruire_annuaire(struct Annuaire *ptr_annuaire);
int ajouter_personne(struct Annuaire *ptr_annuaire, const struct Personne *ptr_nouveau);

#endif
