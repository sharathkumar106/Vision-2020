#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<mmsystem.h>
/*External Files Include*/

#include "draw_scene_mudroad.h"
#include "draw_scene_highway.h"
#include "draw_scene_flyover.h"
#include "draw_scene_farm.h"
#include "keyboard_func.h"
#include "titlepage.h"
#include "intro.h"
#include "animation.h"
#include "technology.h"

void display_title();
void display_intro1();
void display_intro2();
void display_intro3();
void intro_roadways();
void display_road();
void intro_highways();
void display_highway();
void display_flyover();
void intro_farm();
void display_farm();
void intro_tech();
void display_tech();
void display_conclusion();
void display_ending();

/* GLUT callback Handlers */
void init(){
	gluOrtho2D(0, 1440, 0, 740);
	glClearColor(1, 1, 1, 1);
}

void display_title(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
        clgname();
        depart();
        projname();
        title();
        team();
        guide();
            printf("title\n");

    glFlush();
}

void display_intro1()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    introduction();
            printf("intro1\n");

    glFlush();
}

void display_intro2()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    page2();
            printf("intro2\n");

    glFlush();
}

void display_intro3()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    page3();
        printf("intro3\n");

    glFlush();
}

void intro_roadways()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    road_intro();
        printf("roadways\n");

    glFlush();
}

void intro_highways()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    highway_intro();
        printf("Highways\n");

    glFlush();
}

void intro_farm()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    agri_intro();
        printf("Agriculture\n");

    glFlush();
}

void intro_tech()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    tech_intro();
        printf("Technology\n");

    glFlush();
}

void display_conclusion(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    conclusion();
        printf("Technology\n");

    glFlush();
}

void display_ending(){
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    ending();
        printf("Technology\n");

    glFlush();
}

void display_road(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    draw_scene_mudroad();
    printf("mudroad\n");

    glFlush();
}

void display_highway(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    draw_scene_highway();
    printf("highway\n");

    glFlush();
}

void display_flyover(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    draw_scene_flyover();
    printf("flyover\n");

    glFlush();
}

void display_farm(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    draw_scene_farm();
    printf("farm\n");
    glFlush();
}

void display_tech(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    tech_4G();
    printf("technology\n");
    glFlush();
}






int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1440,740);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE | GLUT_DEPTH);
    glutCreateWindow("INDIA 2020: A Vision for the new Millennium");
    init();
    glEnable(GL_DEPTH_TEST);
    PlaySound(TEXT("G:\\CG MiniProject\\OpenGL\\Project1\\sound\\song.wav"),NULL,SND_FILENAME|SND_ASYNC);
    glutTimerFunc(1000,animate_title,0);
    glutDisplayFunc(display_title);
    glutKeyboardFunc(key);
    glutMainLoop();

    return EXIT_SUCCESS;
}
