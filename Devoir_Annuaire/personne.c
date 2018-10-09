#include "personne.h"
#include <stdio.h>
#include <stdlib.h>

void afficherPersonne(struct Personne personne){
    printf("Nom : %s\nPrénom : %s\nDate de naissance : %d/%d/%d",personne.nom, personne.prenom, personne.naissance.jour,personne.naissance.mois,personne.naissance.annee);
}