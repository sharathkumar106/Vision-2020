#ifndef DRAW_SCENE_FLYOVER_H_INCLUDED
#define DRAW_SCENE_FLYOVER_H_INCLUDED
#include "TextureImage.h"
#include "plane.h"
#include "grid.h"
void draw_flyover();
void draw_car();
void draw_scene_flyover(){

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glPushMatrix();
        glTranslatef(carX,carY,carZ);
        glRotatef(-theta,0.0,0.0,1.0);
        glScalef(0.5,0.5,0);
        draw_car();
    glPopMatrix();

    glPushMatrix();
        glTranslatef(planeX,0,0);
        draw_plane();
    glPopMatrix();

    glPushMatrix();
        //drawgrid();
        draw_flyover();
    glPopMatrix();

}

void draw_flyover(){
    glColor3f(1,1,1);
    GLuint flyover = getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\flyover.bmp");
    RenderTexture(flyover, 0,0 ,1440 , 740);
}

void draw_car(){
    glColor3f(1,1,1);
    GLuint car_texture=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\car_black_bg.bmp");
    RenderTexture(car_texture,100,-100,250,200);
}


#endif // DRAW_SCENE_FLYOVER_H_INCLUDED
