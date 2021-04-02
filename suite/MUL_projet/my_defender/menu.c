/*
** EPITECH PROJECT, 2020
** menu
** File description:
** menu
*/

#include "structe.h"

void maj(sfIntRect *quit, sfIntRect *play)
{
    quit->left = 663;
    quit->top = 642;
    quit->height = 230;
    quit->width = 620;
    play->left = 650;
    play->top = 355;
    play->height = 230;
    play->width = 620;
}

void gen(init_menu_t *menu, sfVideoMode mode)
{
    menu->wind = sfRenderWindow_create(mode, "Menu", sfResize | sfClose, NULL);
    menu->texture = sfTexture_createFromFile("menu/menua.jpg", NULL);
    menu->sprite = sfSprite_create();
    sfSprite_setTexture(menu->sprite, menu->texture, sfTrue);
}

void test(init_menu_t *menu)
{
    sfVector2i point;
    sfRenderWindow_drawSprite(menu->wind, menu->sprite, NULL);
    sfRenderWindow_display(menu->wind);
    menu->point = sfMouse_getPositionRenderWindow(menu->wind);
    menu->fpoint.x = point.x -25;
    menu->fpoint.y = point.y -20;
}

int menu(void)
{
    init_menu_t *menu = malloc(sizeof(init_menu_t));
    sfVideoMode mode = {1920, 1280, 32};
    sfEvent event;
    sfIntRect *quit = malloc(sizeof(sfIntRect));
    sfIntRect *play = malloc(sizeof(sfIntRect));
    maj(quit, play);
    gen(menu, mode);
    while (sfRenderWindow_isOpen(menu->wind)){
        test(menu);
        while (sfRenderWindow_pollEvent(menu->wind, &event)){
            if (event.type == sfEvtClosed) {
                sfRenderWindow_close(menu->wind);
                return 0;
                break;
            }
            if (sfKeyboard_isKeyPressed(sfKeyEscape) == sfTrue) {
                sfRenderWindow_close(menu->wind);
                return 0;
                break;
            }
            if (sfMouse_isButtonPressed(sfMouseLeft)){
                if (sfIntRect_contains(quit, menu->point.x, menu->point.y)){
                    sfRenderWindow_close(menu->wind);
                    return 0;
                    break;
                }
                if (sfIntRect_contains(play, menu->point.x, menu->point.y)){
                    sfRenderWindow_close(menu->wind);
                    return 1;
                    break;
                }
            }
        }
    }
    return 1;
}
