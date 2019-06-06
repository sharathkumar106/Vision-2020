#ifndef PLANE
#define PLANE

void draw_plane(){

    //Pilot Window
    glColor3f(0.2,0,8);
    glBegin(GL_POLYGON);
        glVertex2f(135,640);
        glVertex2f(140,634);
        glVertex2f(147.5,640);
        glVertex2f(140,646);
        glVertex2f(135,640);
        glVertex2f(142.5,634);
        glVertex2f(157.5,634);
        glVertex2f(157.5,638);
        glVertex2f(150,638);
        glVertex2f(142.5,634);
    glEnd();

    //Windows
    int x=0;
    while(x<140){
    glColor3f(0,0.5,0);
    glBegin(GL_POLYGON);
        glVertex2f(180+x,630);
        glVertex2f(180+x,640);
        glVertex2f(190+x,640);
        glVertex2f(190+x,630);
     glEnd();
     x+=20;
    }

    //Plane Tail Wing
    glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2f(340,644);
        glVertex2f(400,641);
        glVertex2f(400,640);
        glVertex2f(340,636);
     glEnd();

     //Plane Back Tail Inside
    glColor3f(0,0,1);
    glBegin(GL_POLYGON);
        glVertex2f(377,696);
        glVertex2f(367.5,696);
        glVertex2f(332.5,652);
        glVertex2f(350,652);
    glEnd();

    //Plane Back Tail
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(290,650);
        glVertex2f(362.5,700);
        glVertex2f(380,700);
        glVertex2f(350,650);
        glVertex2f(290,650);
    glEnd();

    //Plane Wings Side
    glColor3f(0,0,0.9);
    glBegin(GL_POLYGON);
        glVertex2f(200,616);
        glVertex2f(198,618);
        glVertex2f(195,620);
        glVertex2f(196,622);
        glVertex2f(198,623);
        glVertex2f(200,624);
        glVertex2f(320,622);
        glVertex2f(320,621);
        glVertex2f(200,616);
    glEnd();

    //Plane BlackBox Inside
    glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2f(207.5,620);
        glVertex2f(200,620);
        glVertex2f(200,600);
        glVertex2f(207.5,600);
     glEnd();
     glBegin(GL_POLYGON);
        glColor3f(0,0,1);
        glVertex2f(250,616);
        glVertex2f(255,616);
        glVertex2f(255,602);
        glVertex2f(250,602);
     glEnd();

    //Plane BlackBox
    glColor3f(0.5,0.8,0.8);
    glBegin(GL_POLYGON);
        glVertex2f(200,620);
        glVertex2f(250,616);
        glVertex2f(255,614);
        glVertex2f(257.5,612);
        glVertex2f(258,610);
        glVertex2f(257.5,608);
        glVertex2f(255,606);
        glVertex2f(250,602);
        glVertex2f(200,600);
        glVertex2f(200,620);
    glEnd();

    //Plane Sidelines
    glColor3f(0,0.7,0);
    glBegin(GL_POLYGON);
        glVertex2f(110,616);
        glVertex2f(322.5,616);
        glVertex2f(312.5,610);
        glVertex2f(150,610);
    glEnd();

    //Plane Body
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(150,650);
        glVertex2f(350,650);
        glVertex2f(352.5,649);
        glVertex2f(355,648);
        glVertex2f(357.5,647);
        glVertex2f(360,646);
        glVertex2f(362.5,644);
        glVertex2f(362.5,642);
        glVertex2f(363,640);
        glVertex2f(362.5,638);
        glVertex2f(362.5,636);
        glVertex2f(360,634);
        glVertex2f(357.5,633);
        glVertex2f(355,632);
        glVertex2f(352.5,631);
        glVertex2f(350,630);
        glVertex2f(350,630);
        glVertex2f(312.5,610);
        glVertex2f(150,610);
        glVertex2f(145,611);
        glVertex2f(140,611.5);
        glVertex2f(135,612);
        glVertex2f(130,612);
        glVertex2f(125,612.5);
        glVertex2f(120,613);
        glVertex2f(115,614);
        glVertex2f(110,616);
        glVertex2f(105,618);
        glVertex2f(100,620);
        glVertex2f(100,622);
        glVertex2f(99,624);
        glVertex2f(101,626);
        glVertex2f(102,628);
        glVertex2f(102.5,630);
        glVertex2f(105,631);
        glVertex2f(110,632.5);
        glVertex2f(115,634);
        glVertex2f(120,636);
        glVertex2f(125,637.5);
        glVertex2f(130,638.5);
        glVertex2f(135,640);
        glVertex2f(137,640);
        glVertex2f(140,644);
        glVertex2f(142.5,646);
        glVertex2f(145,648);
        glVertex2f(150,650);
    glEnd();





}


#endif // PLANE
