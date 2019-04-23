#ifndef INTRO_H_INCLUDED
#define INTRO_H_INCLUDED

#include "TextureImage.h"

void renderSpacedBitmapString(float x, float y, void *font, char *str);

void introduction(){
    glColor3f(1,1,1);
    GLuint intro=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\intro.bmp");
    RenderTexture(intro,0,0,1440,740);
}
void page2(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\page1.bmp");
    RenderTexture(over,0,0,1440,740);
}
void page3(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\page2.bmp");
    RenderTexture(over,0,0,1440,740);
}

void road_intro(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\roadways.bmp");
    RenderTexture(over,0,0,1440,740);
}

void highway_intro(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\highways.bmp");
    RenderTexture(over,0,0,1440,740);
}

void agri_intro(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\agri.bmp");
    RenderTexture(over,0,0,1440,740);
}

void tech_intro(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\tech.bmp");
    RenderTexture(over,0,0,1440,740);
}

void conclusion(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\conclusion.bmp");
    RenderTexture(over,0,0,1440,740);
}

void ending(){
    glColor3f(1,1,1);
    GLuint over=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\last.bmp");
    RenderTexture(over,0,0,1440,740);
}

/*
void page1(){
    glColor3f(0,0,1);
    renderSpacedBitmapString(200,460, GLUT_BITMAP_HELVETICA_18, "If the nineteenth century belonged to Europe, the twentieth century to the USA,");
    renderSpacedBitmapString(200,440, GLUT_BITMAP_HELVETICA_18,"then the twenty-first century will definitely belong to the Indians.");
    renderSpacedBitmapString(200,420, GLUT_BITMAP_HELVETICA_18, "This is the dream translated to millions of Indians");
    renderSpacedBitmapString(200,400, GLUT_BITMAP_HELVETICA_18,"through the vision of two eminent scientists of India" );
    glColor3f(1,0,0);
    renderSpacedBitmapString(200,380, GLUT_BITMAP_HELVETICA_18,"Dr. Kalam and Dr. Y.S. Rajan.");
}*/


#endif // INTRO_H_INCLUDED
