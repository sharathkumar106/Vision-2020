#ifndef DRAW_SCENE_2_H_INCLUDED
#define DRAW_SCENE_2_H_INCLUDED

#include "grid.h"
#include "man.h"
#include "tree.h"
#include "buildings.h"
#include "highway.h"
void draw_scene_highway(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    //glLineWidth(1.0);

    glPushMatrix();
        glTranslatef(posX,posY,posZ);
	    drawCar();
    glPopMatrix();

    glPushMatrix();
        draw_buildings();
        highway_display();
    glPopMatrix();

}

#endif // DRAW_SCENE_2_H_INCLUDED
