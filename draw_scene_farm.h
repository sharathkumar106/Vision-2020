#ifndef DRAW_SCENE_FARM
#define DRAW_SCENE_FARM
#include "farm.h"
#include "grid.h"
#include "drone.h"
#include<math.h>
void draw_scene_farm(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();

    glScalef(0.7,0.7,1);
    glTranslatef(pow(farmX,0.89),farmY,posZ);
        farmer(50,-480);
    glPopMatrix();

    glPushMatrix();
    glScalef(0.7,0.7,0);
        glTranslatef(droneX,droneY,0);
        drone(300);
    glPopMatrix();

    //drawgrid();
    glPushMatrix();
        draw_farm();
    glPopMatrix();



}


#endif // DRAW_SCENE_FARM
