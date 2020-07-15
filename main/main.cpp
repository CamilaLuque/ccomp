#include <iostream>
#include <allegro.h>
#include "MapaAQP.h"

using namespace std;

int main()
{
    MapaAQP m;
    m.init();
    BITMAP *mapa;
    mapa = load_bitmap("Arequipa_provincia_mapa.bmp", NULL);
    draw_sprite(screen,mapa,0,0);

    readkey();
    m.deinit();
    return 0;
}

END_OF_MAIN()
