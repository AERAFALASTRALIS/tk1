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
    sfRenderWindow* window;
    sfTexture* texture_back;
    sfSprite* background;

    sfTexture* texture_vis;
    sfSprite* viseur;

    sfTexture* cible_run;
    sfSprite* run;
    sfVector2f moov;

    sfTexture* cible_corbac;
    sfSprite* corbac;
    sfVector2f mov;

    sfTexture* cible_sai;
    sfSprite* sai;
    sfVector2f mv;

    sfFont* font;
    sfMusic* music;
    sfClock* clock;

    int c;
    int score;
    int speedpen;
    int speedcorbac;
    int speedsai;
    int miss;
    int best_score;
}init_graph_t;

void my_putchar(char c);
int my_put_nbr(int nb);
void import_tex_order(init_graph_t *byte);
void create_order(init_graph_t *byte);
void textur_order(init_graph_t *byte);
int checktouch(sfEvent event, init_graph_t *byte, long long random);
void run(init_graph_t *byte);
int cible(init_graph_t *byte);
void frezeur(init_graph_t *byte);
