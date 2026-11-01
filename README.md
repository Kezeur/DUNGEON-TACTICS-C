# Dungeon Tactics C

Jeu de combat tactique au tour par tour en langage C développé dans le cadre du projet académique.

## Équipe de Développement
* **Diallo Kenny** (`Kenny-D`) : Gestion de projet, README, Makefile, capacités spéciales (Soin & Vol de vie), moteur graphique SDL2.
* **Djouegouo Essome Ivonne Ange** (`Ange`) : Architecture des données (`game.h`, `game.c`), boucle de tour par tour, optimisation mémoire.
* **Mohamed Coulibaly** (`Momo-C`) : Système de jets de dés aléatoires, calculs des dégâts, gestion des événements souris (`inputs.c`).

---

## Mécaniques du Jeu
* **Combattants** : Héros et monstres disposant de PV (actuels et max), de PP (Points de Pouvoir) et d'un score d'initiative.
* **Armes disponibles** : 
  * Épée, Hache, Lance (mêlée)
  * Arc (distance)
  * Bâton de mage (magie)
* **Système de combat** : Tour par tour avec jets de dés virtuels pour déterminer la réussite des attaques et les dégâts.
* **Capacités spéciales** : Sorts de soin alliés et sorts de vol de vie.

---

## Organisation du Code
* `game.h` : Déclaration des types (`combattant`, `Arme`, `TypeArme`) et prototypes d'initialisation.
* `game.c` : Implémentation des fonctions d'initialisation et de logique du jeu.
* `Makefile` : Compilation automatisée du projet.
* `README.md` : Documentation et guide d'utilisation.

---

## Compilation & Exécution

Compiler le jeu :
```bash
make
```

Lancer la partie :
```bash
./game
```

Supprimer les fichiers objets (`.o`) :
```bash
make clean
```

Nettoyer tout le projet (fichiers objets et exécutable) :
```bash
make mrproper
```