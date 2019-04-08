#ifndef DRAW_SCENE_1
#define DRAW_SCENE_1

#include "grid.h"
#include "mud_road.h"
#include "man.h"
#include "tree.h"

extern float posX = 0, posY = 0, posZ = 0;

void move_man(){
    man(-150);
}

void draw_scene_mudroad(){
//temp variables for Trees on the Left side of Road
    int i,temp1=50,temp2=5;

    //Animate Man on Key Press: l-LEFT || j-RIGHT || i-UP || k-DOWN
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    //4 Trees - Right Side of the Road
    glPushMatrix();
        tree(770,-260);
        tree(200,-180);
        tree(500,-178);
        tree(1010,-320);
    glPopMatrix();

    //Move man on Key press
    glPushMatrix();
        glTranslatef(posX,posY,posZ);
        move_man();
    glPopMatrix();

    //Trees on the Hill
    glPushMatrix();
        tree(-50,25);
        tree(900,100);
    glPopMatrix();

    // 4 Trees - Left Side of the Road
    for(i=0;i<4;i++){
        glPushMatrix();
            tree(temp1,temp2);
            temp1=temp1+250;
            temp2=temp2+1.3;
        glPopMatrix();
    }

    //Move Sun along with Man(Temporary)
    glPushMatrix();
        glTranslatef(posX,posY+1.8f,posZ);
        sun();
    glPopMatrix();

    //Draw Road and Trees
    glPushMatrix();
     //   drawgrid();
        pattern();
        road_display();
    glPopMatrix();
}

#endif // DRAW_SCENE_1
