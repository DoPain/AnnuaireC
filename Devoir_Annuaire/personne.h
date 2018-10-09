#ifndef PERSONNE_H
#define PERSONNE_H

#include "date.h"

struct Personne {
    char *nom;
    char *prenom;
    struct Date naissance;
};

void afficherPersonne(struct Personne personne);
#endif