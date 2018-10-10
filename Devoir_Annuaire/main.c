#include "annuaire.h"
#include "gestionFichier.h"
#include <stdlib.h>
#include <assert.h>

int main(void){
    struct Annuaire a;
    a.taille = 1;
    a.tableau = malloc(a.taille * sizeof(struct Personne));
    struct Personne p1;
    {p1.nom="Cado",p1.prenom="Erwan",p1.naissance.jour=11,p1.naissance.mois=4,p1.naissance.annee=1998;};
    //afficherPersonne(p1);
    assert(ajouter_personne(&a,&p1)==EXIT_SUCCESS);
    afficher_annuaire(&a);
    //ecrire_fichier(&a,"annuaire.txt");
}