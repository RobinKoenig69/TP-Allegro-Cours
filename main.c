#include <stdio.h>
#include <Allegro5/allegro.h>
#include <Allegro5/allegro_primitives.h>                                    //librairie permettant de dessiner directement sur l'écran (cercles : triangles etc)
                                                                            //toutes les bibliothèques nécessaires vont ici (clavier souris texte etc)

#define Largeur 800
#define Hauteur 600
#define COULEURALL al_map_rgb(rand()%256,rand()%256,rand()%256)             //crée une couleur alléatoire avec une plage de 255 valeurs

void dessiner(){
    ALLEGRO_COLOR blanc;
    blanc = al_map_rgb(255,255,255);
    al_clear_to_color(blanc);
    al_flip_display();

    /* al_clear_to_color(al_map_rgb(255,255,255); */

}

int main() {
    ALLEGRO_DISPLAY* fenetre = NULL;
    assert(al_init());                                                    //Le code ne continue pas si la condition dans le assert n'est pas validée

    fenetre= al_create_display(Largeur, Hauteur);
    assert(fenetre !=NULL);
    al_set_window_title(fenetre, "ECE");                    //Customise le titre de la fenetre (on peut mettre ce que l'on veut
    al_set_window_position(fenetre, 0, 0);

    dessiner();

    al_destroy_display(fenetre)
}
