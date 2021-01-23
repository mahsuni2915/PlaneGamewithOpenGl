#include"glew.h"
#include"freeglut.h"
#include<iostream>
#include <time.h>
using namespace std;
int t = 60;
float xt = 0, xt1 = 0, xt2 = 0, xt3 = 0;
int yon = 0, yon1 = 0, yon2 = 0, yon3 = 0;
float uxk = 0;
float uyk = 0;
int level = 1;
int Baslangýcpuaný[3] = { 0,0,0 };
int levelStringRight = 1;
int levelStringLeft = 0;
int can = 3;

void init2D(float r, float g, float b)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);
	gluOrtho2D(0.0, 480.0, 0.0, 640.0);
}
void random()
{
	srand(time(NULL));
	yon = rand() % 2;
	
	yon1 = rand() % 2;
	
	yon2 = rand() % 2;
	yon3 = rand() % 2;
	uyk = rand() % 200;
	uxk = rand() % 400;
	
}
void solh(float x, float y)
{
	glBegin(GL_QUADS);//gövde
	glColor3f(1, 0, 0);
	glVertex2f(0 + x, 240 + y);
	glColor3f(0, 1, 0);
	glVertex2f(0+ x, 260 + y);
	glColor3f(0, 0, 1);
	glVertex2f(20 + x, 260+ y);
	glColor3f(1, 1, 0);
	glVertex2f(20 + x, 240 + y);
	glEnd();
	glBegin(GL_QUADS);//kuyruk
	glColor3f(1, 0, 0);
	glVertex2f(20 + x, 250 + y);
	glColor3f(0, 1, 0);
	glVertex2f(20 + x, 255+ y);
	glColor3f(0, 0, 1);
	glVertex2f(50 + x, 255 + y);
	glColor3f(1, 1, 0);
	glVertex2f(50 + x, 250 + y);
	glEnd();
	glBegin(GL_LINES);//pervane kuyruk
	glColor3f(1, 0, 0);
	glVertex2f(35 + x, 255 + y);
	glColor3f(0, 1, 0);
	glVertex2f(50 + x, 260 + y);
	glColor3f(0, 0, 1);
	glVertex2f(35 + x, 260 + y);
	glColor3f(1, 1, 0);
	glVertex2f(50 + x, 255 + y);
	glEnd();
	glBegin(GL_LINES);//ayaklarý
	glColor3f(1, 0, 0);
	glVertex2f(8 + x, 235 + y);
	glColor3f(0, 1, 0);
	glVertex2f( 8+ x, 240 + y);
	glColor3f(0, 0, 1);
	glVertex2f(16+ x, 235 + y);
	glColor3f(1, 1, 0);
	glVertex2f(16 + x, 240 + y);
	glColor3f(1, 0, 0);
	glVertex2f(8 + x, 235 + y);
	glVertex2f(16 + x, 235 + y);
	glEnd();
	glBegin(GL_LINES);//pervanekafa
	glColor3f(1, 0, 0);
	glVertex2f(8 + x, 260 + y);
	glColor3f(0, 1, 0);
	glVertex2f(20 + x, 265 + y);
	glColor3f(0, 0, 1);
	glVertex2f(8 + x, 265 + y);
	glColor3f(1, 1, 0);
	glVertex2f(20 + x, 260 + y);
	glEnd();
	
	
}

void saðh(float x, float y)
{
	glBegin(GL_QUADS);//gövde
	glColor3f(1, 0, 0);
	glVertex2f(30+ x, 240 + y);
	glColor3f(0, 1, 0);
	glVertex2f(30 + x, 260 + y);
	glColor3f(0, 0, 1);
	glVertex2f(50 + x, 260 + y);
	glColor3f(1, 1, 0);
	glVertex2f(50 + x, 240 + y);
	glEnd();
	glBegin(GL_QUADS);//kuyruk
	glColor3f(1, 0, 0);
	glVertex2f(0 + x, 250 + y);
	glColor3f(0, 1, 0);
	glVertex2f(0 + x, 255 + y);
	glColor3f(0, 0, 1);
	glVertex2f(30 + x, 255 + y);
	glColor3f(1, 1, 0);
	glVertex2f(30 + x, 250 + y);
	glEnd();
	glBegin(GL_LINES);//pervane kuyruk
	glColor3f(1, 0, 0);
	glVertex2f(0 + x, 255 + y);
	glColor3f(0, 1, 0);
	glVertex2f(15 + x, 260 + y);
	glColor3f(0, 0, 1);
	glVertex2f(0 + x, 260 + y);
	glColor3f(1, 1, 0);
	glVertex2f(15 + x, 255 + y);
	glEnd();
	glBegin(GL_LINES);//ayaklarý
	glColor3f(1, 0, 0);
	glVertex2f(38 + x, 235 + y);
	glColor3f(0, 1, 0);
	glVertex2f(38 + x, 240 + y);
	glColor3f(0, 0, 1);
	glVertex2f(46 + x, 235 + y);
	glColor3f(1, 1, 0);
	glVertex2f(46 + x, 240 + y);
	glColor3f(1, 0, 0);
	glVertex2f(38 + x, 235 + y);
	glVertex2f(46 + x, 235 + y);
	glEnd();
	glBegin(GL_LINES);//pervanekafa
	glColor3f(1, 0, 0);
	glVertex2f(38 + x, 260 + y);
	glColor3f(0, 1, 0);
	glVertex2f(46 + x, 265 + y);
	glColor3f(0, 0, 1);
	glVertex2f(38 + x, 265 + y);
	glColor3f(1, 1, 0);
	glVertex2f(46 + x, 260 + y);
	glEnd();


}
void plane(float x ,float y)
{
	glBegin(GL_QUADS);//ucak baþ
	glColor3f(1, 0, 0);
	glVertex2f(0 + x,30+ y);
	glColor3f(0, 1, 0);
	glVertex2f(0 + x,35 + y);
	glColor3f(0, 0, 1);
	glVertex2f(50 + x, 35 + y);
	glColor3f(1, 1, 0);
	glVertex2f(50 + x, 30 + y);
	glEnd();
	glBegin(GL_QUADS);//kuyruk
	glColor3f(1, 0, 0);
	glVertex2f(10 + x, 20 + y);
	glColor3f(0, 1, 0);
	glVertex2f(10 + x, 25 + y);
	glColor3f(0, 0, 1);
	glVertex2f(40 + x, 25 + y);
	glColor3f(1, 1, 0);
	glVertex2f(40 + x, 20 + y);
	glEnd();
	glBegin(GL_QUADS);//gövde
	glColor3f(1, 0, 0);
	glVertex2f(20 + x,10 + y);
	glColor3f(0, 1, 0);
	glVertex2f(20 + x, 50 + y);
	glColor3f(0, 0, 1);
	glVertex2f(30 + x, 50+ y);
	glColor3f(1, 1, 0);
	glVertex2f(30 + x, 10 + y);
	glEnd();
	


}
void display1(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);

	int topInfo[15] = { 'P' , 'U' , 'A' , 'N' ,  ':' , 48 + Baslangýcpuaný[2] , 48 + Baslangýcpuaný[1] , 48 + Baslangýcpuaný[0], ' '   , ' ' , 'C' ,  'A' , 'N', ':' , 48 + can };
	int xTopInfo = 250;
	for (int i = 0; i < 15; i++)
	{
		glRasterPos2i(xTopInfo, 630);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, topInfo[i]);
		xTopInfo = xTopInfo + 10;

	}
	int Gameinfo[9] = { 'O' , 'Y' , 'U' , 'N' , 'B', 'I','T','T','I'};
	int  xGameinfo = 180;
	for (int i = 0; i < 9; i++)
	{
		glRasterPos2i(xGameinfo,500);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, Gameinfo[i]);
		xGameinfo = xGameinfo + 10;

	}
	int Gameinfo1[35] = { 'Y' , 'E' , 'N' , 'I' , 'D', 'E','N',' ','o','Y','N','A','M','A','K',' ','I','C','I','N',' ','E','N','T','E','R','-','-','-','>','B','A','S','I','N' };
	int  x1Gameinfo = 100;
	for (int i = 0; i < 35; i++)
	{
		glRasterPos2i(x1Gameinfo, 400);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, Gameinfo1[i]);
		x1Gameinfo = x1Gameinfo + 10;

	}
	int Gameinfo2[25] = { 'C' , 'R' , 'E' , 'A' , 'T', 'E','D',' ','B','Y',' ',' ','M','A','H','S','U','N','I',' ','G','U','N','D','U'};
	int  x2Gameinfo =0;
	for (int i = 0; i < 25; i++)
	{
		glRasterPos2i(x2Gameinfo, 10);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, Gameinfo2[i]);
		x2Gameinfo = x2Gameinfo + 10;

	}



	glFlush();


}
void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 0.0, 0.0);


	glColor3f(0, 0, 1);
	int topInfo[15] = { 'p' , 'u' , 'a' , 'N' ,  ':' , 48 + Baslangýcpuaný[2] , 48 + Baslangýcpuaný[1] , 48 + Baslangýcpuaný[0], ' '   , ' ' , 'c' ,  'A' , 'n', ':' , 48 + can };
	int xTopInfo = 250;
	for (int i = 0; i < 15; i++)
	{
		glRasterPos2i(xTopInfo, 630);
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, topInfo[i]);
		xTopInfo = xTopInfo + 10;
	}

	if (yon == 0)
	{
		saðh(0 + xt, 0);
	}
	else if (yon == 1)
	{
		
		solh(0 + xt, 0);
	}

	if (yon1 == 0)
	{
		saðh(0 + xt1,110);
	}
	else if (yon1 == 1)
	{

		solh(0 + xt1,110);
	}

	if (yon2 == 0)
	{
		saðh(0 + xt2,220);
	}
	else if (yon2 == 1)
	{

		solh(0 + xt2,220);
	}

	if (yon3 == 0)
	{
		saðh(0 + xt3, 330);
	}
	else if (yon3 == 1)
	{

		solh(0 + xt3, 330);
	}

	plane(0 + uxk, 0 + uyk);
	

	glFlush();
}

void timer(int lifeValue)
{
	if (yon == 0)
	{
		xt = xt + 5;
		if (xt >= 480)
		{
			xt = -50;
		}
	}
	else if (yon == 1)
	{
		xt= xt - 5;
		if (xt <= 0)
		{
			xt = 480;
		}
	}
	
	if (yon1 == 0)
	{
		xt1 = xt1 + 5;
		if (xt1 >= 480)
		{
			xt1 = -50;
		}
	}
	else if (yon1 == 1)
	{
		xt1 = xt1 - 5;
		if (xt1 <= 0)
		{
			xt1 = 480;
		}
	}
	if (yon2 == 0)
	{
		xt2 = xt2 + 5;
		if (xt2 >= 480)
		{
			xt2 = -50;
		}
	}
	else if (yon2 == 1)
	{
		xt2 = xt2 - 5;
		if (xt2 <= 0)
		{
			xt2 = 480;
		}
	}

	if (yon3 == 0)
	{
		xt3 = xt3 + 5;
		if (xt3 >= 480)
		{
			xt3 = -50;
		}
	}
	else if (yon3 == 1)
	{
		xt3 = xt3 - 5;
		if (xt3 <= 0)
		{
			xt3 = 480;
		}
	}
	if ((xt >= uxk - 50 && xt <= uxk + 50 && uyk >=185 && uyk <= 250) )
	{	
		random();
		
		can = can - 1;
		if (can == 0)
		{	
			glutDisplayFunc(display1);
		}
	}
	if ((xt1 >= uxk - 50 && xt1 <= uxk + 50 && uyk >= 295 && uyk <= 360))
	{
		random();
		can = can - 1;
		if (can == 0)
		{
			glutDisplayFunc(display1);
		}
	}
	if ((xt2 >= uxk - 50 && xt2 <= uxk + 50 && uyk >= 405 && uyk <= 470))
	{
		random();
		can = can - 1;
		if (can == 0)
		{
			glutDisplayFunc(display1);
		}
	}
	if ((xt3 >= uxk - 50 && xt3 <= uxk + 50 && uyk >= 515 && uyk <= 580))
	{
		random();
		can = can - 1;
		if (can == 0)
		{
			glutDisplayFunc(display1);
		}
	}
	
	glutPostRedisplay();
	glutTimerFunc(t, timer, 0);
}
void klavye(int key, int x, int y)
{
	switch (key)
	{
	case GLUT_KEY_UP:
		uyk = uyk + 10;
		if (uyk >= 640)
		{
			
			t = t - 5;
			Baslangýcpuaný[1] += 1;
			if(Baslangýcpuaný[1] >9)
			{	
				Baslangýcpuaný[1] = 0 ;
				Baslangýcpuaný[2] += 1;

			}
			random();
		}
		
		break;
	case GLUT_KEY_DOWN:
		uyk = uyk - 10;
		if (uyk <= 0)
		{
			uyk = 0;
		}
		
		break;
	case GLUT_KEY_LEFT:
		uxk = uxk - 10;
		if (uxk <= 0)
		{
			uxk = 0;
		}
	
		break;
	case GLUT_KEY_RIGHT:
		uxk = uxk + 10;
		if (uxk >= 430)
		{
			uxk = 430;
		}
		
		break;
	
	case 13:
		random();
	}
}
void klavye1(unsigned char key, int x, int y)
{
	switch (key)
	{
	
	case 13:
		can = 3;
		random();
		glutDisplayFunc(display);
		break;
	}
}

int main(int argc, char** argv) 
{

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
	glutInitWindowSize(480, 640);
	glutCreateWindow("mahsuni");
	init2D(0.0, 0.0, 0.0);
	glutDisplayFunc(display);
	random();
	glutSpecialFunc(klavye);
	glutKeyboardFunc(klavye1);
	glutTimerFunc(0, timer, 0);
	glutMainLoop();
	return 0;
}