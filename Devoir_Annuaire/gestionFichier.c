#include "gestionFichier.h"
#include "annuaire.h"
#include <stdio.h>

int lire_fichier(struct Annuaire *ptr_annuaire, const char *nomfic){
    FILE *f;
    char *ptr_line=NULL;
    size_t taille_line=0;

    f=fopen( nomfic, "r" );
    if (NULL == f)
    {
        fprintf( stderr, "Ouverture du fichier impossible %s (lecture)\n", nomfic );
        return 1;
    }

    do {
        getline( &ptr_line, &taille_line, f);
    } while ( '#' == ptr_line[0] );

    sscanf( ptr_line, "%d", &(ptr_annuaire->taille) );

    ptr_annuaire->tableau = malloc( ptr_annuaire->taille *
                                    sizeof(struct Personne) );

    for (int i=0; i<ptr_annuaire->taille; i++)
    {
        getline( &ptr_line, &taille_line, f);
        ptr_annuaire->tableau[i].nom = strndup( ptr_line,
                                                strlen(ptr_line)-1 );
        getline( &ptr_line, &taille_line, f);
        ptr_annuaire->tableau[i].prenom = strndup( ptr_line,
                                                   strlen(ptr_line)-1 );
        getline( &ptr_line, &taille_line, f);
        sscanf( ptr_line, "%d;%d;%d", &(ptr_annuaire->tableau[i].naissance.jour),
                &(ptr_annuaire->tableau[i].naissance.mois),
                &(ptr_annuaire->tableau[i].naissance.annee) );
    }

    if (NULL != ptr_line)
        free(ptr_line);
    fclose(f);
    return 0;
}

int ecrire_fichier(const struct Annuaire *ptr_annuaire, const char *nomfic){
    FILE *f = fopen(nomfic,"rw");
    if(f== NULL){
        fprintf(stderr,"Ouverture du fichier impossible (écriture)")
    }
}
