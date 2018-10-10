cmake_minimum_required(VERSION 3.12)
project(annuaire)

set(CMAKE_CXX_STANDARD 14)

include_directories(Devoir_Annuaire)

add_executable(annuaire
        Devoir_Annuaire/annuaire
        Devoir_Annuaire/annuaire.c
        Devoir_Annuaire/annuaire.h
        Devoir_Annuaire/annuaire.o
        Devoir_Annuaire/date.h
        Devoir_Annuaire/gestionFichier.c
        Devoir_Annuaire/gestionFichier.h
        Devoir_Annuaire/main.c
        Devoir_Annuaire/main.o
        Devoir_Annuaire/Makefile
        Devoir_Annuaire/personne.c
        Devoir_Annuaire/personne.h
        Devoir_Annuaire/personne.o)
