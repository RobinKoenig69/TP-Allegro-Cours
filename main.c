#include <stdio.h>
#include <Allegro5/allegro.h>
#include <Allegro5/allegro_primitives.h>
//toutes les bibliothèques nécessaires vont ici (clavier souris texte etc)

#define Largeur 800
#define Hauteur 600

int main() {
    ALLEGRO_DISPLAY* fenetre = NULL;
    assert(al_init());                      //Le code ne con tinue pas si la condition dans le assert n'est pas validée

    fenetre= al_create_display(Largeur, Hauteur);
    assert(fenetre !=NULL);
    al_set_window_title(fenetre, "ECE");             //Customise le titre de la fenetre (on peut mettre ce que l'on veut
    al_set_window_position(fenetre, 0, 0);

}
