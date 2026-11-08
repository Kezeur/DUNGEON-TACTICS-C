#include <time.h>
#include "des.h"

#define SEUIL_REUSSITE 10   
#define ECHEC_CRITIQUE 1    
#define REUSSITE_CRITIQUE 20 


void initialiserAleatoire(void) {
    srand((unsigned int)time(NULL));
}

int lancerDe(int faces) {
    if (faces < 1) {
        return 0;
    }
    return rand() % faces + 1;
}

int nombreEntre(int min, int max) {
    if (max < min) {
        return min;
    }
    return min + rand() % (max - min + 1);
}

int jetInitiative(combattant c) {
    return lancerDe(20) + c.initiation;
}

ResultatAttaque jetAttaque(void) {
    int jet = lancerDe(20);

    if (jet == ECHEC_CRITIQUE) {
        return ATTAQUE_RATEE;
    }
    if (jet == REUSSITE_CRITIQUE) {
        return ATTAQUE_CRITIQUE;
    }
    if (jet >= SEUIL_REUSSITE) {
        return ATTAQUE_REUSSIE;
    }
    return ATTAQUE_RATEE;
}

int calculerDegats(Arme arme, ResultatAttaque resultat) {
    int degats;

    if (resultat == ATTAQUE_RATEE) {
        return 0;
    }

    degats = nombreEntre(arme.degats_min, arme.degats_max);

    if (resultat == ATTAQUE_CRITIQUE) {
        degats = degats * 2;
    }
    return degats;
}