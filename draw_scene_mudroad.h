#ifndef DRAW_SCENE_1
#define DRAW_SCENE_1
#include "grid.h"
#include "man.h"
#include "mud_road.h"
#include "tree.h"
#include "shapes.h"

extern float posX=0, posY=0, posZ=0,carX=0,carY=0,carZ=0,theta=0.0,farmX=0.0,farmY=0.0,sunX=0,sunY=0,planeX=0,droneX=0,droneY=0;


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


    //Trees on the Hill
    glPushMatrix();
        tree(-50,25);
        tree(900,100);
    glPopMatrix();

    //Move sun on Key press
    glPushMatrix();
	glTranslatef(sunX,sunY,0);
        sun(100);
    glPopMatrix();

    //Move man on Key press
    glPushMatrix();
	glTranslatef(posX,posY,posZ);
        man(-250);
    glPopMatrix();


    // 4 Trees - Left Side of the Road
    for(i=0;i<4;i++){
        glPushMatrix();
            tree(temp1,temp2);
            temp1=temp1+250;
            temp2=temp2+1.3;
        glPopMatrix();
    }


    //Draw Road and Trees
    glPushMatrix();
     //  drawgrid();
       mountains();
       road_display();
    glPopMatrix();

}
float getSunX(){
    return sunX;
}

#endif // DRAW_SCENE_1
