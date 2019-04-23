#ifndef FARM
#define FARM

#include "grid.h"
#include "tree.h"
#include "TextureImage.h"
#include "shapes.h"
void crops();
void trees();
void draw_crop(int x,int y);
void draw_farm(){
    //Road
    glColor3ub(0,102,0);
    glBegin(GL_POLYGON);
        glVertex2f(180,0);
        glVertex2f(540,0);
        glVertex2f(920,160);
        glVertex2f(900,260);
    glEnd();

    //Fields-Crops
    glColor3f(0.3,0.8,0.1);
    crops();
    trees();

    //Fields-Irrigation
    glColor3f(0.3,0.8,0.1);

    //Crops-Field
    glColor3ub(20,21,250);
    glBegin(GL_POLYGON);
        glVertex2f(2,156);
        glVertex2f(350,240);
        glVertex2f(620,160);
        glVertex2f(360,60);
        glVertex2f(2,120);
    glEnd();

    //Other-Field
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
        glVertex2f(0,160);
        glVertex2f(1440,516);
        glVertex2f(1440,600);
        glVertex2f(0,320);
    glEnd();



    //CW-1 Patterns
    glColor3f(1,1,1);
    GLuint texture = getTexture("G:\\CG MiniProject\\OpenGL\\Project1\\images\\farm.bmp");
    RenderTexture(texture, 0,0 ,1440 , 740);



    //CW-1
    glColor3f(0,0.6,0);
    glBegin(GL_POLYGON);
        glVertex2f(330,242);
        glVertex2f(480,204);
        glVertex2f(645,250);
        glVertex2f(565,302);
    glEnd();
    //CW-2
    glBegin(GL_POLYGON);
        glVertex2f(570,302);
        glVertex2f(650,252);
        glVertex2f(790,306);
        glVertex2f(685,330);
    glEnd();
    //CW-3
    glBegin(GL_POLYGON);
        glVertex2f(780,224);
        glVertex2f(656,250);
        glVertex2f(800,300);
        glVertex2f(920,275);
    glEnd();
    //CW-4
    glBegin(GL_POLYGON);
        glVertex2f(610,164);
        glVertex2f(490,200);
        glVertex2f(650,245);
        glVertex2f(765,220);
    glEnd();


/*
    //Irrigation-Field
    glColor3f(0,0.5,0.9);
    glBegin(GL_POLYGON);
        glVertex2f(330,242);
        glVertex2f(620,160);
        glVertex2f(940,278);
        glVertex2f(700,335);
    glEnd();

    //Other-Field
    glColor3f(0.3,0.8,0.1);
    glBegin(GL_POLYGON);
        glVertex2f(940,278);
        glVertex2f(700,335);
        glVertex2f(1440,520);
        glVertex2f(1440,460);
    glEnd();

*/

}


/*Draw the Crops - Coordinates*/

void draw_crop(int x,int y){
    glLineWidth(1.5);
    glBegin(GL_LINES);
        glVertex2f(x,y);
        glVertex2f(x-5,y+5);
        glVertex2f(x,y);
        glVertex2f(x-5,y+10);
        glVertex2f(x,y);
        glVertex2f(x,y+15);
        glVertex2f(x,y);
        glVertex2f(x+5,y+10);
        glVertex2f(x,y);
        glVertex2f(x+5,y+5);
    glEnd();
}

//Plot Crops
void crops(){
    int i=180,j=100;
    for(i=180;i<=420;i+=15){
        for(j=100;j<=200;j+=10){
            draw_crop(i,j);
        }
    }
    for(i=90;i<180;i+=15){
        for(j=120;j<=180;j+=10){
            draw_crop(i,j);
        }
    }
    for(i=435;i<=510;i+=15){
        for(j=120;j<=180;j+=10){
            draw_crop(i,j);
        }
    }
    for(i=0;i<90;i+=15){
        for(j=120;j<=160;j+=10){
            draw_crop(i,j);
        }
    }
    for(i=510;i<=570;i+=15){
        for(j=140;j<=160;j+=10){
            draw_crop(i,j);
        }
    }
    for(i=240;i<=390;i+=15){
        for(j=215;j<=220;j+=10){
            draw_crop(i,j);
        }
        for(j=80;j<=100;j+=10){
            draw_crop(i,j);
        }
    }
    draw_crop(45,170);
    draw_crop(60,170);
    draw_crop(90,170);
    draw_crop(135,190);
    draw_crop(165,190);
    draw_crop(210,210);
    draw_crop(225,210);
    draw_crop(270,230);
    draw_crop(285,230);
    draw_crop(300,230);
    draw_crop(315,230);
    draw_crop(330,230);
    draw_crop(350,230);
    draw_crop(405,210);
    draw_crop(420,210);
    draw_crop(435,210);
    draw_crop(435,190);
    draw_crop(435,180);
    draw_crop(440,210);
    draw_crop(450,200);
    draw_crop(450,190);
    draw_crop(450,180);
    draw_crop(465,180);
    draw_crop(465,200);
    draw_crop(480,180);
    draw_crop(525,170);
    draw_crop(540,170);
    draw_crop(585,150);
    draw_crop(535,110);
    draw_crop(465,110);
    draw_crop(420,110);
    draw_crop(435,115);
    draw_crop(435,115);
    draw_crop(435,120);
    draw_crop(440,110);
    draw_crop(405,90);
    draw_crop(375,70);
    draw_crop(360,70);
    draw_crop(345,70);
    draw_crop(330,70);
    draw_crop(315,70);
    draw_crop(300,75);
    draw_crop(225,90);
    draw_crop(210,90);
    draw_crop(165,100);
    draw_crop(150,100);
    draw_crop(135,110);
    draw_crop(120,110);
    draw_crop(100,110);
    draw_crop(110,110);
    draw_crop(150,110);
    draw_crop(165,110);
    draw_crop(90,110);
    draw_crop(80,110);
    draw_crop(75,115);
    draw_crop(60,175);
}

//Plot Trees
void trees(){
    glPushMatrix();
    glScalef(0.5,0.5,1);
    tree(-900,110);
    tree(-750,120);
    tree(-550,120);
    tree(-420,140);
    tree(-200,200);
    tree(-80,180);
    tree(30,200);
    tree(160,160);
    tree(320,200);
    tree(600,250);
    tree(800,260);
    tree(900,300);
    tree(1100,300);
    tree(1400,380);
    glPopMatrix();

}
    void farmer(int x,int y){

	//Buttons
	glBegin(GL_POINTS);
		glVertex2f(x+250,375+y);
		glVertex2f(x+250,385+y);
		glVertex2f(x+250,395+y);
		glVertex2f(x+250,405+y);
	glEnd();

	//Eyes
	glBegin(GL_POINTS);
		glVertex2f(x+250-3.3,422+y);
		glVertex2f(x+250+3.3,422+y);
	glEnd();

	//Eyebrows
	glColor3f(0,0,0);
	glBegin(GL_LINES);
		glVertex2f(x+250-6,423+y);
		glVertex2f(x+250-5,424+y);

		glVertex2f(x+250-5,424+y);
		glVertex2f(x+250-4,425+y);

		glVertex2f(x+250-4,425+y);
		glVertex2f(x+250-3,425+y);

		glVertex2f(x+250-3,425+y);
		glVertex2f(x+250-2,424+y);

		glVertex2f(x+250-2,424+y);
		glVertex2f(x+250-1,423+y);

		glVertex2f(x+250+1,423+y);
		glVertex2f(x+250+2,424+y);

		glVertex2f(x+250+2,424+y);
		glVertex2f(x+250+3,425+y);

		glVertex2f(x+250+3,425+y);
		glVertex2f(x+250+4,425+y);

		glVertex2f(x+250+4,425+y);
		glVertex2f(x+250+5,424+y);

		glVertex2f(x+250+5,424+y);
		glVertex2f(x+250+6,423+y);
	glEnd();


	//Nose
	glLineWidth(0.1);
	glBegin(GL_LINES);
		glVertex2f(x+250,419+y);
		glVertex2f(x+250,416+y);
	glEnd();

	//Mouth
	glBegin(GL_LINE_LOOP);
		glVertex2f(x+250-4,414+y);
		glVertex2f(x+250-3,413.5+y);
		glVertex2f(x+250-2,412.5+y);
		glVertex2f(x+250-1,412.5+y);
		glVertex2f(x+250,411.5+y);
		glVertex2f(x+250+1,412.5+y);
		glVertex2f(x+250+2,412.5+y);
		glVertex2f(x+250+3,413.5+y);
		glVertex2f(x+250+4,414+y);
	glEnd();

	//Ears
	glBegin(GL_POLYGON);
		glVertex2f(x+250-10.5,422+y);
		glVertex2f(x+250-11.5,420+y);
		glVertex2f(x+250-11,417+y);
		glVertex2f(x+250-10.2,415+y);
	glEnd();
	glBegin(GL_POLYGON);
		glVertex2f(x+250+10.5,422+y);
		glVertex2f(x+250+11.5,420+y);
		glVertex2f(x+250+11,417+y);
		glVertex2f(x+250+10.2,415+y);
	glEnd();

	//Head
	glColor3f(0.1,.9,.5);
	drawEllipse(10.5,10.5,x+250,420+y);

	//Hair
	glColor3f(0,0,0);
	glBegin(GL_POLYGON);
		glVertex2f(x+250-10,420+y);
		glVertex2f(x+250-10,436+y);
		glVertex2f(x+250-7,434+y);
		glVertex2f(x+250-5,437+y);
		glVertex2f(x+250-3,435+y);
		glVertex2f(x+250-1,437+y);
		glColor3f(0,0.3,0.1);
		glVertex2f(x+250,435+y);
		glVertex2f(x+250+1,437+y);
		glVertex2f(x+250+3,435+y);
		glVertex2f(x+250+5,437+y);
		glVertex2f(x+250+7,434+y);
		glVertex2f(x+250+10,436+y);
		glVertex2f(x+250+10,420+y);

	glEnd();

	//Belt
	glColor3f(0.2,0,0);
    glBegin(GL_POLYGON);
		glVertex2f(x+250-14,370+y);
		glVertex2f(x+250+14,370+y);
		glVertex2f(x+250+13,367+y);
		glVertex2f(x+250-13,367+y);
	glEnd();


	//Pants
	glColor3f(0,0,1);
    glBegin(GL_POLYGON);
		glVertex2f(x+250-14,370+y);
		glVertex2f(x+250-16,330+y);
		glVertex2f(x+250-6,330+y);
		glVertex2f(x+250,357+y);
		glVertex2f(x+250,357+y);
		glVertex2f(x+250+6,330+y);
		glVertex2f(x+250+16,330+y);
		glVertex2f(x+250+14,370+y);
		glVertex2f(x+250-14,370+y);
	glEnd();


	//Left-Hand
	glColor3f(0.5,0,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(x+250-12,400+y);
		glVertex2f(x+250-30,375+y);
		glVertex2f(x+250-30,365+y);
		glVertex2f(x+250-14,390+y);
		glVertex2f(x+250-12,400+y);
	glEnd();

	//Right-Hand
	glColor3f(0.5,0,0.5);
	glBegin(GL_POLYGON);
		glVertex2f(x+250+12,400+y);
		glVertex2f(x+250+30,375+y);
		glVertex2f(x+250+30,365+y);
		glVertex2f(x+250+14,390+y);
		glVertex2f(x+250+12,400+y);
	glEnd();

	//Body
	glColor3f(0.9,0.8,.1);
    drawEllipse(15,(410-350)/2,x+250,380+y);

    //Feet(Left and Right)
    glColor3f(1,0,0);
	drawEllipse(6.5,4.5,x+250-10,330-4.5+y);
	drawEllipse(6.5,4.5,x+250+10,330-4.5+y);

	//Fist(LEFT and Right)
	glColor3f(1,0,0);
	drawEllipse(2.5,4,x+250-30-3/2,(365+375)/2+y);
	drawEllipse(2.5,4,x+250+30+5/2,(365+375)/2+y);

}


#endif // FARM
