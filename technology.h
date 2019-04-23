#ifndef TECHNOLOGY_H_INCLUDED
#define TECHNOLOGY_H_INCLUDED

#include "TextureImage.h"

void renderSpacedBitmapString(float x, float y, void *font, char *str);

void tech_4G(){
    glColor3f(1,1,1);
    GLuint intro=getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\technology1.bmp");
    RenderTexture(intro,0,0,1440,740);
}


#endif // TECHNOLOGY_H_INCLUDED
