#include <GL/glut.h>
#include <math.h> 
#include <time.h>
#include <cstdlib>
#define PI 3.14159265

void drawSQ() {
	glBegin(GL_LINE_LOOP);
	glVertex2f(0, 0);
	glVertex2f(0.5, 0);
	glVertex2f(0.5, 0.25);
	glVertex2f(0, 0.25);
	glEnd();
}

void display() {
	glEnable(GL_DEPTH_TEST);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	drawSQ();
	for (int i = 0; i < 40; i++) {
		glRotatef(15, 0, 0, 1);
		//glTranslatef(0.02, 0.01, 0);
		drawSQ();
	}
	glFlush();
}


int main(int argc, char * argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA | GLUT_DEPTH);
	glutInitWindowSize(500, 500);
	glutCreateWindow("Ex 2");
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}