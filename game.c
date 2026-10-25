#include "game.h"

void initialiserHero(combattant *heros, const char *nom, TypeArme typearme)
{
    strcpy(heros->nom, nom);
    hero->pv_max = 100;
    hero->pv_actuel = 100;
}