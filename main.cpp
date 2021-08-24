
#include<windows.h>
#include <GL/glut.h>
#include<stdio.h>

void init2D(float r, float g, float b)
{
	glClearColor(r,g,b,0.0);
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0.0, 100.0, 0.0, 100.0);
}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	// Green
	glBegin(GL_QUADS);
	glColor3f(0.0, 0.6, 0.0);
	glVertex2i(0,100);
	glVertex2i(100,100);
	glVertex2i(100,65);
	glVertex2i(0,65);

	// Blue
    glBegin(GL_QUADS);
	glColor3f(0.0f, 0.4f, 1.0f);
	glVertex2i(0,35);
	glVertex2i(100,35);
	glVertex2i(100,0);
	glVertex2i(0,0);
	glEnd();
	printf("The national flag of Sierra leone\n");
	glFlush();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition (400, 300);
	glutInitWindowSize (500, 300);
	glutCreateWindow ("Flag of Sierra leone");
	init2D(1,1,1);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
