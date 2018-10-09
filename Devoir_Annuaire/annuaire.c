#include "annuaire.h"
#include "personne.h"
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <stdlib.h>



void afficher_annuaire(const struct Annuaire *ptr_annuaire){
    int i;
    for (i=0; i < ptr_annuaire -> taille; i++){
        afficherPersonne(ptr_annuaire -> tableau[i]);
    }
}
void detruire_annuaire(struct Annuaire *ptr_annuaire){
    if(ptr_annuaire->taille>0){
        free(ptr_annuaire -> tableau);
    }

}
int ajouter_personne(struct Annuaire *ptr_annuaire, const struct Personne *ptr_nouveau){
    if (ptr_annuaire -> taille == 0){
        ptr_annuaire -> tableau = (struct Personne * ) malloc (sizeof(struct Personne));
    } else {
        ptr_annuaire -> tableau = (struct Personne *) realloc(ptr_annuaire -> tableau, ptr_annuaire -> taille+1);
    }

    assert(ptr_annuaire -> tableau!=NULL);
    ++ptr_annuaire -> taille;
    ptr_annuaire -> tableau[ptr_annuaire -> taille-1].naissance = ptr_nouveau -> naissance;
    strcpy(ptr_nouveau->nom, ptr_annuaire->tableau[ptr_annuaire -> taille-1].nom);
    strcpy(ptr_nouveau->prenom, ptr_annuaire->tableau[ptr_annuaire -> taille-1].prenom);
    
}