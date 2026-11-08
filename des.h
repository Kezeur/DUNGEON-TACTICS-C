#ifndef DES_H
#define DES_H

#include "game.h"

typedef enum {
    ATTAQUE_RATEE,
    ATTAQUE_REUSSIE,
    ATTAQUE_CRITIQUE
} ResultatAttaque;

void initialiserAleatoire(void);
int lancerDe(int faces);
int nombreEntre(int min, int max);
int jetInitiative(const combattant *c);
ResultatAttaque jetAttaque(void);
int calculerDegats(const Arme *arme, ResultatAttaque resultat);

#endif