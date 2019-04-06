#ifndef TREE
#define TREE

/*---------------------------TRIANGULAR TREE--------------------------*/
void tree(int pos,int loc){
	int i=0,x=0,y=0;

	//Tree-Leaves
	glColor3f(0.0,0.6,0.05);
	for(i=0;i<3;i++){
		glBegin(GL_TRIANGLES);
			glVertex2f(200+x+pos,450+loc+y);
			glVertex2f(300-x+pos,450+loc+y);
			glVertex2f(250+pos,500+loc+y);
		glEnd();
		x+=10;
		y+=25;
	}

	//Tree-Trunk
	glColor3b(95,6,5);
	glBegin(GL_POLYGON);
		glVertex2f(245+pos,450+loc);
		glVertex2f(255+pos,450+loc);
		glVertex2f(260+pos,400+loc);
		glVertex2f(240+pos,400+loc);
	glEnd();
}
/*---------------------------TRIANGULAR TREE END------------------------*/


#endif // TREE
