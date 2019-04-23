#ifndef DRAW_SCENE_FARM
#define DRAW_SCENE_FARM
#include "farm.h"
#include "grid.h"
void draw_scene_farm(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    glScalef(0.7,0.7,1);
    glTranslatef(farmX,farmY,posZ);
        farmer(50,-430);
    glPopMatrix();

  //  drawgrid();
    glPushMatrix();
        draw_farm();
    glPopMatrix();


}


#endif // DRAW_SCENE_FARM
