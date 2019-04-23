#ifndef TITLEPAGE_H_INCLUDED
#define TITLEPAGE_H_INCLUDED



#endif // TITLEPAGE_H_INCLUDED

void renderSpacedBitmapString(float x, float y, void *font, char *str) {
	char *c;
	int x1 = x;
	for (c = str; *c != '\0'; c++) {
		glRasterPos2f(x1, y);
		glutBitmapCharacter(font, *c);
		x1 = x1 + glutBitmapWidth(font, *c);
	}
}

void clgname()
{
    glColor3f(0,0,1);
    renderSpacedBitmapString(520,655, GLUT_BITMAP_HELVETICA_18, "SRINIVAS INSTITUTE OF TECHNOLOGY");
    renderSpacedBitmapString(580,625, GLUT_BITMAP_HELVETICA_18, "MANGALORE-574143");


}


void depart()
{
    glColor3f(1,0,1);
    renderSpacedBitmapString(435,565, GLUT_BITMAP_HELVETICA_18, "DEPARTMENT OF COMPUTER SCIENCE AND ENGINEERING");

}
void projname()
{
    glColor3f(0.2,0,0.5);
    renderSpacedBitmapString(495,485, GLUT_BITMAP_HELVETICA_18, "COMPUTER GRAPHICS AND VISUALIZATION");
    renderSpacedBitmapString(600,455, GLUT_BITMAP_HELVETICA_18, "MINI PROJECT ON");
}
void title()
{
     glColor3f(1,0,0);
    renderSpacedBitmapString(475,395, GLUT_BITMAP_TIMES_ROMAN_24, "INDIA 2020: A Vision for the new Millennium");
}
void team()
{
    glColor3f(0.8,0.5,0);
    renderSpacedBitmapString(30,250, GLUT_BITMAP_HELVETICA_18, "TEAM MEMBERS ");
    renderSpacedBitmapString(30,220, GLUT_BITMAP_HELVETICA_18, "SHARATHKUMAR KR   4SN16CS083");
    renderSpacedBitmapString(30,190, GLUT_BITMAP_HELVETICA_18, "VIKRAM KUMAR           4SN16CS103");
    renderSpacedBitmapString(30,160, GLUT_BITMAP_HELVETICA_18, "DEPARTMENT OF CSE");
}
void guide()
{
    glColor3f(0.8,0.5,0);
    renderSpacedBitmapString(1150,250, GLUT_BITMAP_HELVETICA_18, "PROJECT GUIDED BY");
    renderSpacedBitmapString(1150,220, GLUT_BITMAP_HELVETICA_18, "Mr. RAVISHANKAR");
    renderSpacedBitmapString(1150,190, GLUT_BITMAP_HELVETICA_18, "ASSOCIATE PROFESSOR");
    renderSpacedBitmapString(1150,160, GLUT_BITMAP_HELVETICA_18, "DEPARTMENT OF CSE");
}
