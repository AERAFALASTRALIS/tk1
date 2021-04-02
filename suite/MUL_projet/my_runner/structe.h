/*
** EPITECH PROJECT, 2019
** graphe structe
** File description:
** graph
*/

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
    sfVector2f mv;

    sfTexture* texture_floor;
    sfSprite* floor;
    sfVector2f moov;

    sfTexture* player_run;
    sfSprite* run;
    sfVector2f mov;

    sfTexture* player_jump;
    sfSprite* jump;

    sfFont* font;
    sfMusic* music;
    sfClock* clock;
}init_graph_t;

void my_putchar(char c);
int my_put_nbr(int nb);
int creata(init_graph_t *byte, sfVideoMode mode);
int all(init_graph_t *byte);
int snektouch(sfEvent event, init_graph_t *byte, long long random);
int snek_cible(sfEvent event, init_graph_t *byte);
int flor(init_graph_t *byte);
int cible(init_graph_t *byte, sfEvent event);
