#ifndef GESTIONFICHIER_H
#define GESTIONFICHIER_H

#include "annuaire.h"

int lire_fichier(struct Annuaire *ptr_annuaire, const char *nomfic);
int ecrire_fichier(const struct Annuaire *ptr_annuaire, const char *nomfic);

#endif