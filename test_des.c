#include "des.h"

int main(void) {
    combattant hero;
    combattant monstre;
    int i;
    int compteur[6] = {0, 0, 0, 0, 0, 0};
    int initHero, initMonstre;
    ResultatAttaque res;
    int degats;

    initialiserAleatoire();

    /* On remplit les combattants a la main (initialiserArme n'existe pas encore) */
    strcpy(hero.nom, "Arthur");
    hero.pv_max = 100;
    hero.pv_actuel = 100;
    hero.initiation = 3;
    strcpy(hero.arme.nom, "Epee");
    hero.arme.degats_min = 5;
    hero.arme.degats_max = 10;

    strcpy(monstre.nom, "Gobelin");
    monstre.pv_max = 40;
    monstre.pv_actuel = 40;
    monstre.initiation = 1;
    strcpy(monstre.arme.nom, "Massue");
    monstre.arme.degats_min = 2;
    monstre.arme.degats_max = 6;

    /* TEST 1 : le de est-il equilibre ? 6000 lancers de d6 */
    printf("--- Test 1 : 6000 lancers de d6 ---\n");
    for (i = 0; i < 6000; i++) {
        compteur[lancerDe(6) - 1]++;
    }
    for (i = 0; i < 6; i++) {
        printf("Face %d : %d fois\n", i + 1, compteur[i]);
    }

    /* TEST 2 : initiative */
    printf("\n--- Test 2 : initiative ---\n");
    initHero = jetInitiative(&hero);
    initMonstre = jetInitiative(&monstre);
    printf("%s : %d | %s : %d\n", hero.nom, initHero, monstre.nom, initMonstre);
    if (initHero >= initMonstre)  {
        printf("%s joue en premier\n", hero.nom);
    }
    else {
        printf("%s joue en premier\n", monstre.nom);
    }

    /* TEST 3 : 10 attaques du heros */
    printf("\n--- Test 3 : 10 attaques de %s ---\n", hero.nom);
    for (i = 0; i < 10; i++) {
        res = jetAttaque();
        degats = calculerDegats(&hero.arme, res);
        if (res == ATTAQUE_RATEE) {
            printf("Attaque %d : ratee\n", i + 1);
        }
        else if (res == ATTAQUE_CRITIQUE) {
            printf("Attaque %d : COUP CRITIQUE ! %d degats\n", i + 1, degats);
        }
        else  {
            printf("Attaque %d : reussie, %d degats\n", i + 1, degats);
        }
    }

    return 0;
}