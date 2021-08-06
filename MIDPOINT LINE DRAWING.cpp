//Compute points on line using mid point line drawing algorithm for a starting coordinates(20,10) and ending coordinates(30,18).

#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdio.h>
int x1, y1, x2, y2;   //initialization of points
void myInit()
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0,0.0,0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(-50, 50, -50, 50);
	glPointSize(10);
}
void draw_pixel(int x, int y) //initializing the value to draw the line in graph
{
	glBegin(GL_POINTS);
	glVertex2i(x, y);
	glEnd();
	glFlush();
}
void draw_line(int x1, int x2, int y1, int y2) //algorithm starts from here
{
	int dx, dy, i, e; //initializing the values which ll be used in algorithm
	int incx, incy, inc1, inc2;
	int x, y;
	dx = x2 - x1;
	dy = y2 - y1;
	if (dx < 0) dx = -dx;   //if d is negative the midpoint will be above the line chosen.
	if (dy < 0) dy = -dy;   //if d is negative the midpoint will be below the line chosen.
	incx = 1;
	if (x2 < x1) incx = -1;
	incy = 1;
	if (y2 < y1) incy = -1;
	x = x1; y = y1;
	if (dx > dy)
	{
		draw_pixel(x, y);
		e = 2 * dy - dx;
		inc1 = 2 * (dy - dx);
		inc2 = 2 * dy;
		for (i = 0; i < dx; i++)
		{
			if (e >= 0)
			{
				y += incy;
				e += inc1;
			}
			else
				e += inc2;
            x += incx;
			draw_pixel(x, y);
		}
	}
	else
	{
		draw_pixel(x, y);
		e = 2 * dx - dy;
		inc1 = 2 * (dx - dy);
		inc2 = 2 * dx;
		for (i = 0; i < dy; i++)
		{
			if (e >= 0)
			{
				x += incx;
				e += inc1;
			}
			else
				e += inc2;
			y += incy;
			draw_pixel(x, y);
		}
	}
}
void myDisplay()
{
	draw_line(x1, x2, y1, y2);
	glFlush();
}
int main(int argc, char** argv)
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(3000, 3000);
	glutInitWindowPosition(0, 0);
	glutCreateWindow("Bresenham's Line Drawing");
	myInit();
	glutDisplayFunc(myDisplay);
	glutMainLoop();
	return 0;
}
