/*
** EPITECH PROJECT, 2019
** graphe structe
** File description:
** graph
*/

#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <stdlib.h>

typedef struct init_graph
{
    int i;
    sfWindow *windos;
    sfRenderWindow* window;
    sfTexture* texture_back;
    sfSprite* background;

    sfTexture* texture_vie;
    sfSprite* vie;

    sfTexture* texture_car;
    sfSprite* car;

    sfTexture* texture_curs;
    sfSprite* curseur;

    sfTexture* cible_ass;
    sfSprite* assasin;
    sfVector2f moov;

    sfTexture* cible_dev;
    sfSprite* devil;
    sfVector2f mov;

    sfTexture* cible_kni;
    sfSprite* knight;
    sfVector2f mv;

    sfTexture* tourelle_ca;
    sfSprite* canon;

    sfTexture* tourelle_ice;
    sfSprite* ice;

    sfTexture* tourelle_ma;
    sfSprite* magic;

    sfTexture* tourelle_te;
    sfSprite* tesla;

    int c;
    int t;
    int miss;
    sfFont* font;
    sfMusic* music;
    sfClock* clock;
}init_graph_t;

typedef struct init_menu
{
    sfVideoMode mode;
    sfRenderWindow *wind;
    sfTexture *texture;
    sfSprite *sprite;
    sfEvent event;
    sfVector2f fpoint;
    sfVector2i point;
}init_menu_t;

void my_putchar(char c);
int my_put_nbr(int nb);
void import_tex_order(init_graph_t *byte);
void create_order(init_graph_t *byte);
void textur_order(init_graph_t *byte);

void ass_moov(init_graph_t *byte);
void devil_mov(init_graph_t *byte);
void knight_mv(init_graph_t *byte);

void run_cible_un_bas(init_graph_t *byte);
void run_cible_deux_bas(init_graph_t *byte);
void run_cible_trois_bas(init_graph_t *byte);

void run_cible_un_gauche(init_graph_t *byte);
void run_cible_deux_gauche(init_graph_t *byte);
void run_cible_trois_gauche(init_graph_t *byte);

void run_cible_un_droit(init_graph_t *byte);
void run_cible_deux_droit(init_graph_t *byte);
void run_cible_trois_droit(init_graph_t *byte);

void run_cible_un_haut(init_graph_t *byte);
void run_cible_deux_haut(init_graph_t *byte);
void run_cible_trois_haut(init_graph_t *byte);

int cible(init_graph_t *byte);
void tour(init_graph_t *byte);
void frezeur(init_graph_t *byte);

void on_pressed(sfEvent eveent, init_graph_t *byte);
int menu(void);
