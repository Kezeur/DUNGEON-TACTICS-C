#ifndef GAME_H
#define GAME_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// structure et enumeration des armes, monstre et heros

typedef enum
{
    ARME_ARC,
    ARME_EPEE,
    ARME_LANCE,
    ARME_BATON_MAGE,
    ARME_HACHE,
} TypeArme;

typedef struct
{
    char nom[30];
    int degats_min;
    int degats_max;
} Arme;

// structure pour un monstre ou un heros

typedef struct
{
    char nom[30];
    int xp;
    int pv_max;
    int pv_actuel;
    int pp;
    Arme arme;
    int initiation;
} combattant;

// fonction d'initialisation du module game

void initialiserHero(combattant *hero, const char *nom, TypeArme typearme);
void initialiserArme(Arme *arme, TypeArme typeamre);
void initialiserMonstre(combattant *monstre, const char *nom, TypeArme typearme);
void initialiserStatistiques(combattant c);

#endif