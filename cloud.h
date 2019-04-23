//bushes
void shrub3d()
{
    //bushbase
    glColor3ub(0,160,0);
    double len0=57;
	double thick0=13;
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+355,207,0);
    glScalef(len0,thick0,len0);
	glutSolidCube(1.0);
	glPopMatrix();
	//leaves1
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+335,220,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
	//leaves2
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(115+370,220,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();
    //leaves3
    glColor3ub(0,160,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(130+340,240,70);
	glutSolidSphere(20,20,20);
	glPopMatrix();

    //flower1

    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(105+350,225,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();


    //flower2
    glColor3ub(140,0,0);
	glPushMatrix();
	glLoadIdentity();
	glTranslatef(102+365,243,70);
	glutSolidSphere(5,20,20);
	glPopMatrix();
}
