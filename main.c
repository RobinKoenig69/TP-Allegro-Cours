#include <stdio.h>
#include <Allegro5/allegro.h>
#include <Allegro5/allegro_primitives.h>                                    //librairie permettant de dessiner directement sur l'écran (cercles : triangles etc)
                                                                            //toutes les bibliothèques nécessaires vont ici (clavier souris texte etc)

#define Largeur 800
#define Hauteur 600
#define COULEURALL al_map_rgb(rand()%256,rand()%256,rand()%256)             //crée une couleur aléatoire avec une plage de 255 valeurs

typedef struct {
    int x, y, HAUTEUR, LARGEUR;                                           //permet de connaitre la position de l'ensemble des coins tu rectangle avec sa position x et y et sa hauteur et largeur
}RECTANGLE;                                                               //il faut mettre le nom en majuscule car il est déjà utilisé par allegro



void dessinerBlanc(){
    ALLEGRO_COLOR blanc;
    blanc = al_map_rgb(255,255,255);
    al_clear_to_color(blanc);
    al_flip_display();

    /* al_clear_to_color(al_map_rgb(255,255,255); */

}

void CentrerRectangle(RECTANGLE*rectangle, int hauteur, int largeur){
    rectangle->LARGEUR = largeur;
    rectangle->HAUTEUR = hauteur;
    rectangle->x = Largeur / 2 - largeur /2;
    rectangle->y = Hauteur /2 - hauteur /2;
}
void DessinerRect(RECTANGLE rectangle){
    dessinerBlanc();
    al_draw_filled_rectangle(rectangle.x, rectangle.y, rectangle.x+rectangle.LARGEUR, rectangle.y+rectangle.HAUTEUR, COULEURALL);
}

int main() {
    RECTANGLE rectangle;
    ALLEGRO_DISPLAY* fenetre = NULL;
    /* int x1, y1, x2, y2; */                                             //permet de savoir les coordonnées de chacun des 4 coins du rectangle

    al_create_event_queue();


    srand(time(NULL));
    assert(al_init());                                                    //Le code ne continue pas si la condition dans le assert n'est pas validée

    fenetre= al_create_display(Largeur, Hauteur);
    assert(fenetre !=NULL);
    al_set_window_title(fenetre, "ECE");                    //Customise le titre de la fenetre (on peut mettre ce que l'on veut
    al_set_window_position(fenetre, 0, 0);                 //définit la position de la fenetre sur l'écran

    dessinerBlanc();                                                          //permet de mettre la fenetre entièrement en blanc (voir fonction ci-dessus)

    al_destroy_display(fenetre);
}

