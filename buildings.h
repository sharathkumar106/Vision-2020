#ifndef BUILDINGS
#define BUILDINGS

#include "TextureImage.h"

void draw_buildings(){
    glColor3f(1,1,1);
    GLuint texture = getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\city_buildings_2.bmp");
    RenderTexture(texture, 0,400 ,1440 , 740);
}

#endif // BUILDINGS
