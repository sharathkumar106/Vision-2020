#ifndef TECHNOLOGY_H_INCLUDED
#define TECHNOLOGY_H_INCLUDED

#include "TextureImage.h"
#include "shapes.h"
void renderSpacedBitmapString(float x, float y, void *font, char *str);
int sigX=15,sigY=10;
void show_signals(){
    glColor3f(0,0,0);
    glBegin(GL_LINE_STRIP);
        glVertex2f(235+5-sigX,500+10+sigY);
        glVertex2f(235-5-sigX,500+0+sigY);
        glVertex2f(235+5-sigX,500-10+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(235-5+sigX,500+10+sigY);
        glVertex2f(235+5+sigX,500+0+sigY);
        glVertex2f(235-5+sigX,500-10+sigY);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINE_STRIP);
        glVertex2f(1235+5-sigX,500+10+sigY);
        glVertex2f(1235-5-sigX,500+0+sigY);
        glVertex2f(1235+5-sigX,500-10+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(1235-5+sigX,500+10+sigY);
        glVertex2f(1235+5+sigX,500+0+sigY);
        glVertex2f(1235-5+sigX,500-10+sigY);
    glEnd();


    //2nd Signal Line

    glBegin(GL_LINE_STRIP);
        glVertex2f(235-5-sigX,500+15+sigY);
        glVertex2f(235-15-sigX,500+0+sigY);
        glVertex2f(235-5-sigX,500-15+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(235+5+sigX,500+15+sigY);
        glVertex2f(235+15+sigX,500+0+sigY);
        glVertex2f(235+5+sigX,500-15+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(1235-5-sigX,500+15+sigY);
        glVertex2f(1235-15-sigX,500+0+sigY);
        glVertex2f(1235-5-sigX,500-15+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(1235+5+sigX,500+15+sigY);
        glVertex2f(1235+15+sigX,500+0+sigY);
        glVertex2f(1235+5+sigX,500-15+sigY);
    glEnd();

    //3rd Signal Line

    glBegin(GL_LINE_STRIP);
        glVertex2f(235-10-sigX,500+20+sigY);
        glVertex2f(235-20-sigX,500+0+sigY);
        glVertex2f(235-10-sigX,500-20+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(235+10+sigX,500+20+sigY);
        glVertex2f(235+20+sigX,500+0+sigY);
        glVertex2f(235+10+sigX,500-20+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(1235-10-sigX,500+20+sigY);
        glVertex2f(1235-20-sigX,500+0+sigY);
        glVertex2f(1235-10-sigX,500-20+sigY);
    glEnd();

    glBegin(GL_LINE_STRIP);
        glVertex2f(1235+10+sigX,500+20+sigY);
        glVertex2f(1235+20+sigX,500+0+sigY);
        glVertex2f(1235+10+sigX,500-20+sigY);
    glEnd();

   // printf("%d %d\n",sigX,sigY);
}
void tech_4G(){
    glColor3f(1,1,1);
    GLuint intro=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\technology1.bmp");
    RenderTexture(intro,0,0,1440,740);
}


#endif // TECHNOLOGY_H_INCLUDED
