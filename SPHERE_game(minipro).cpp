#include<stdio.h>
#include<stdlib.h>
#include<GL/glut.h>
#include<math.h>
#include<string.h>
#include<time.h>
int i;
int count1=0,count2=0,count3=0,count4=0;
int count5=0,count6=0,count7=0,count8=0,count9=0,points=0;
float px=45,py=570;

int flag=0, val=0,key,df=5;
float a[5][2]={{465.0,250.0},{45.0,50.0},{255.0,210.0},{105.0,510.0},{195.0,330.0}};
clock_t start, end;
int count;
char t[2],c[2],p[2];


void point()

{
 glColor3f(0.5,0.5,0);
 glBegin(GL_POINTS);
   glVertex2f(px,py);
 glEnd();
}

class sphere

{
 public :
int flag;
float x1,y1,z1;

sphere()

{
    flag=0;

        }

~sphere()

      {

}

void pos(float x,float y)   //position of the sphere

{
  x1=x;
  y1=y;
  z1=0;
}

void sphere_draw()   //starts drawing

{
glColor3f(1,0,0);
float sp_glow[]={0.6,0.0,0.0,1.0};
  glPushMatrix();
  glPushAttrib(GL_CURRENT_BIT);

  glMaterialfv(GL_FRONT, GL_EMISSION, sp_glow);
           glTranslatef(x1,y1,z1);
           glutSolidSphere(10,50,50);
           glTranslatef(-x1,-y1,z1);
  glPopAttrib();   //attribute stack
  glPopMatrix();

}

        void moveright(sphere s[])

        {
            for(int i=0;i<30;i++)

              {
if((x1==45 && y1>480 && y1<500 ) || (x1==195 && y1>320 && y1<540 ) ||(x1==105 && y1==340 && y1==460 ) ||(x1==45 && y1==260 && y1==460 ) ||(x1==285 && y1==540 && y1==560 ) ||(x1==255 && y1>500 && y1<520 ) ||(x1==255 && y1>440 && y1<480 ) ||(x1==255 && y1>360 && y1<400 ) ||(x1==385 && y1>380 && y1<440 ) ||(x1==465 && y1>160 && y1<500 ) ||(x1==105 && y1>300 && y1<320 ) ||(x1==45 && y1>120 && y1<160 ) ||(x1==75 && y1>200 && y1<240 ) ||(x1==75 && y1>40 && y1<60 ) ||(x1==135 && y1>60 && y1<300 ) ||(x1==195 && y1>220 && y1<260 ) ||(x1==195 && y1>140 && y1<180 ) ||(x1==195 && y1>80 && y1<100 ) ||(x1==315 && y1>80 && y1<260 ) ||(x1==405 && y1>180 && y1<340 ) ||(x1==405 && y1>80 && y1<120 ) )break;

    else if(x1<=555)

    {
        for(int j=0;j<5;j++)

        {

      if(((s[val].x1+10)==(s[j].x1-10)) && j!=val && (s[val].y1==s[j].y1)) return;
}
                   x1++;
                   glutPostRedisplay();    //request redisplay
                }

else break;
      }

      }

void moveleft(sphere s[])

    {
    for(int i=0;i<30;i++)

       {

if((x1==285 && y1>540 && y1<560)||(x1==465 && y1>540 && y1<560)||(x1==195 && y1>480 && y1<500)||(x1==255 && y1>320 && y1<540)||(x1==435 && y1>500 && y1<520)||(x1==465 && y1>380 && y1<480)||(x1==375 && y1>360 && y1<400)||(x1==105 && y1>260 && y1<460)||(x1==195 && y1>340 && y1<460)||(x1==405 && y1>300 && y1<320)||(x1==195 && y1>60 && y1<300)||(x1==135 && y1>200 && y1<240)||(x1==135 && y1>120 && y1<160)||(x1==315 && y1>220 && y1<260)||(x1==315 && y1>140 && y1<180)||(x1==315 && y1>80 && y1<100)||(x1==405 && y1>80 && y1<260)||(x1==465 && y1>180 && y1<340)||(x1==555 && y1>160 && y1<500)||(x1==525 && y1>40 && y1<60))break;

                if(x1>=45)
  {
   for(int j=0;j<5;j++)

        {
                          if(((s[val].x1-10)==(s[j].x1+10)) && j!=val && (s[val].y1==s[j].y1)) return;
}

     x1--;
       glutPostRedisplay();
  }

      else break;
       }
}

  void moveup(sphere s[])
  {
      for(int i=0;i<20;i++)
    {
       if((x1<270 && x1>30 && y1==530) || (x1>300 && x1<450 && y1==530) || (x1>60 && x1<180 && y1==470) || (x1>270  && x1<420  && y1==490)|| (x1>60 && x1<90 && y1==250)||(x1>120 && x1<180 && y1==330)||(x1>270 && x1<450 && y1==430)||(x1>270 && x1<360 && y1==350)||(x1>120 && x1<390 && y1==290)||(x1>420 && x1<450 && y1==170)||(x1>90 && x1<120 && y1==190)||(x1>210 && x1<300 && y1==210)||(x1>330 && x1<390 && y1==70)||(x1>60 && x1<120 && y1==110)||(x1>210 && x1<300 && y1==130)||(x1>210 && x1<300 && y1==70)||(x1>480 && x1<540 && y1==150)||(x1>420 && x1<570 && y1==70)||(x1>90 && x1<500 && y1==30)||(x1>390 && x1<450 && y1==370)) break;

                  else if(y1<=570)
        {
  for(int j=0;j<5;j++)
        {
       if(((s[val].y1+10)==(s[j].y1-10)) && j!=val && (s[val].x1==s[j].x1)) return;
}
      y1++;
    glutPostRedisplay();
        }
       else break;
    }
  }


void movedown(sphere s[])

  {
  for(int i=0;i<20;i++)

    {
     if((x1<270 && x1>30 && y1==570) || (x1>300 && x1<450 && y1==570) || (x1>60 && x1<180 && y1==510) || (x1>270  && x1<420  && y1==530)|| (x1>60 && x1<90 && y1==470)||(x1>120 && x1<180 && y1==470)||(x1>270 && x1<450 && y1==490)||(x1>270 && x1<360 && y1==410)||(x1>120 && x1<390 && y1==330)||(x1>420 && x1<450 && y1==350)||(x1>90 && x1<120 && y1==250)||(x1>210 && x1<300 && y1==270)||(x1>330 && x1<390 && y1==270)||(x1>60 && x1<120 && y1==170)||(x1>210 && x1<300 && y1==190)||(x1>210 && x1<300 && y1==110)||(x1>480 && x1<540 && y1==510)||(x1>420 && x1<570 && y1==130)||(x1>90 && x1<500 && y1==70)) break;

                  else if(y1>=30)

        {

for(int j=0;j<5;j++)

        {

       if(((s[val].y1-10)==(s[j].y1+10)) && j!=val && (s[val].x1==s[j].x1)) return;
}

    y1--;
        glutPostRedisplay();
                     }
     else break;
    }
  }

};

sphere s[5];



void wall(GLfloat x,GLfloat y,GLfloat x1,GLfloat y1)

{


  glBegin(GL_POLYGON);    //draw a polygon via list of vertices
glVertex3f(x,y,0);
glVertex3f(x1,y,0);
glVertex3f(x1,y1,0);
glVertex3f(x,y1,0);
  glEnd();   //terminare a list of vertices

}



void line()

{
glColor3f(0.6,0,0);
  glBegin(GL_LINES);
glVertex2f(450,580);
glVertex2f(450,500);
glVertex2f(450,500);
glVertex2f(570,500);
glVertex2f(480,580);
glVertex2f(480,520);
glVertex2f(480,520);
glVertex2f(570,520);
glVertex2f(510,580);
glVertex2f(510,520);
glVertex2f(540,580);
glVertex2f(540,520);
glVertex2f(480,560);
glVertex2f(570,560);
glVertex2f(480,540);
glVertex2f(570,540);
  glEnd();
}



void sph()
{
  for(int i=0;i<5;i++)
      s[i].sphere_draw();
}

void output(int x, int y,const char *string)
{
      int len, i;

           glRasterPos2f(x, y);
           len = (int) strlen(string);
           for (i = 0; i < len; i++)
  {
             glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, string[i]);
           }
}


void startscreen()
{

glColor3f(0,0,1);
output(250,500,"SPHERE ZONE");
output(250,350,"1.NEW GAME");
output(250,275,"2.INSTRUCTIONS");
output(250,200,"3.QUIT");
}


void instructions()
{
  glColor3f(0,0,1);
  output(75,500,"INSTRUCTIONS:");
  output(75,375,"To move the point use the keys 2, 4, 8 and 6. To move the sphere use a, w, d and s.");
  output(75,300,"Place the point on the sphere to select that particular sphere.");
  output(75,275,"Move all the spheres to the destination which is at the top right corner within the provided time.");
}

void startscreen2()

{
// glClearColor(0,0.7,0.8,0);
// glClear(GL_COLOR_BUFFER_BIT);


output(250,560,"A MINI PROJECT ON:-");

output(250,550,"-----------------");


output(200,510,"SPHERE ZONE GAME        USING OPENGL");

output(280,430,"Submitted by:");

output(100,355,"karthik S                                                                                                    4al18cs034");

output(100,320,"Anvitha                                                                                                    4al18cs010");




output(100,100,"Department of CS&E                                                                                     Department of CS&E");

output(240,40,"PRESS SPACE BAR TO START");

glFlush();
}

void timeover()
{
 glClearColor(0,0,0,0);
 glColor3f(1,0,0);
 for(i=0;i<5;i++)
 {
if(s[i].x1>480 && s[i].x1<510 && s[i].y1>560 && s[i].y1<580)

count1=1;

if(s[i].x1>510 && s[i].x1<540 && s[i].y1>560 && s[i].y1<580)

count2=1;

if(s[i].x1>540 && s[i].x1<570 && s[i].y1>560 && s[i].y1<580)
count3=1;

if(s[i].x1>480 && s[i].x1<510 && s[i].y1>540 && s[i].y1<560)
count4=1;

if(s[i].x1>510 && s[i].x1<540 && s[i].y1>540 && s[i].y1<560)
count5=1;

if(s[i].x1>540 && s[i].x1<570 && s[i].y1>540 && s[i].y1<560)

count6=1;

if(s[i].x1>480 && s[i].x1<510 && s[i].y1>520 && s[i].y1<540)

count7=1;

        if(s[i].x1>510 && s[i].x1<540 && s[i].y1>520 && s[i].y1<540)

count8=1;

     if(s[i].x1>540 && s[i].x1<570 && s[i].y1>520 && s[i].y1<540)

count9=1;


}

 if(count1+count2+count3+count4+count5+count6+count7+count8+count9==1)
points=10;

 if(count1+count2+count3+count4+count5+count6+count7+count8+count9==2)
points=20;

 if(count1+count2+count3+count4+count5+count6+count7+count8+count9==3)
points=30;

 if(count1+count2+count3+count4+count5+count6+count7+count8+count9==4)
points=40;

  if(count1+count2+count3+count4+count5+count6+count7+count8+count9==5)
points=50;



 sprintf(c,"%d",count1+count2+count3+count4+count5+count6+count7+count8+count9);

  output(240,158,"no. of spheres  moved =");

 output(356,160,c);

  sprintf(p,"%d",points);

   output(285,135,p);

     output(240,135,"points =");

 output(250,300,"TIMEOVER");

}

void init(void)

{

/* //set properties of the surface material
GLfloat mat_ambient[] = {0.7f, 0.7f, 0.7f, 1.0f}; // gray
GLfloat mat_diffuse[] = {.5f, .5f, .5f, 1.0f};
GLfloat mat_specular[] = {1.0f, 1.0f, 1.0f, 1.0f};
GLfloat mat_shininess[] = {50.0f};
glMaterialfv (GL_FRONT, GL_AMBIENT, mat_ambient);
glMaterialfv (GL_FRONT, GL_DIFFUSE, mat_diffuse);
glMaterialfv (GL_FRONT, GL_SPECULAR, mat_specular);
glMaterialfv (GL_FRONT, GL_SHININESS, mat_shininess);

//set the light source properties
GLfloat lightIntensity[] = {0.7f, 0.7f, 0.7f, 1.0f};
GLfloat light_position[] = {2.0f, 6.0f, 3.0f, 0.0f};
glLightfv (GL_LIGHT0, GL_POSITION, light_position);
glLightfv (GL_LIGHT0, GL_DIFFUSE, lightIntensity);
*/


      GLfloat mat_specular[] = { 0.7, 0.2, 0.5, 1.0 };
      GLfloat mat_shininess[] = { 100.0 };      //sphere shininess
      GLfloat light_position[] = { 5.0, 5.0, 0.0, 5.0 };
      glClearColor (0,0,0,0);
      glShadeModel (GL_SMOOTH); //enable smooth shading

 /*define material properties for front face of all polygons*/

      glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);  //sets parameter for face
      glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);   //sets properties of surface material

      glLightfv(GL_LIGHT0, GL_POSITION, light_position);   //sets the light source properties
      glEnable(GL_LIGHTING);  //enale lighting
      glEnable(GL_LIGHT0); //enable light0
      glEnable(GL_DEPTH_TEST);  //enable z buffer
  glClearColor(1,1,1,1);       //set display window color

glColor3f(0,0,1);

}



void display(void)
{


   glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT); //clear display window
    if(df==5)

{
startscreen2();
}

   if(df==0)

      startscreen();
    if(df==1)
     {

      output(400,584,"TIME REMAINING : ");
       sprintf(t,"%d",60-count);
       output(500,584,t);
      glutPostRedisplay();
     float wall_glow[]={0,0,0,1};
       glPushMatrix();    //pushes and pops from the matrix stack corresponding to current matrix mode.
       glPushAttrib(GL_POLYGON_BIT);          //pushes to and pops from the attribute stack.
       glColor3f(0,1,1);
//  GLfloat emission[]={0,3,3,1};
        glMaterialfv(GL_FRONT,GL_EMISSION,wall_glow);  //sets the parameter param for face.

    wall(30,560,270,540);
wall(300,560,450,540);
wall(60,500,180,480);
wall(60,460,90,260);
wall(120,460,180,340);
wall(210,540,240,320);
wall(120,320,390,300);
wall(90,240,120,200);
wall(60,160,120,120);
wall(150,300,180,60);
wall(90,60,510,40);
wall(210,100,300,80);
wall(210,180,300,140);
wall(210,260,300,220);
wall(270,520,420,500);
wall(270,480,450,440);
wall(390,440,450,380);
wall(270,400,360,360);
wall(480,500,540,160);
wall(420,340,450,180);
wall(330,260,390,80);
wall(420,120,570,80);

line();   //call line
glColor3f(0.5,0.6,0.5);

    wall(0,600,30,0);
wall(570,600,600,0);
wall(30,20,570,0);
wall(30,600,570,580);

glPopAttrib();
        glPopMatrix();
        sph();   //call sphere

point();     //call point
 }
    else if(df==2)
        instructions();
    else if(df==3)

     {
      exit(1);
     }

    else if(df==4)
      timeover();
  glFlush();  //process all openGL routines as quickly as possible
  glutSwapBuffers();  //swaps the front and back buffer

}


void keyboard2(unsigned char key,int x,int y)

{

  if(key=='A'||key=='a')
       s[val].moveleft (s) ;

  if(key=='D'||key=='d')
      s[val].moveright(s);

  if(key=='W'||key=='w')
      s[val].moveup(s);

  if(key=='S'||key=='s')
      s[val].movedown(s);

  glutPostRedisplay();
}


void keyboard(unsigned char key,int x,int y)

{

  if(df==0 && key=='1')

   {
     df=1;
     start=clock();

   }

  if(df==5 && key==32)
df=0;

  if(df==0 && key=='2')
   df=2;
  if(df==0 && key=='3')
   df=3;
  if(df==1 && key==27)

   {

df=0;
s[0].pos(465.0,250.0);
  s[1].pos(45.0,50.0);
  s[2].pos(255.0,210.0);
  s[3].pos(105.0,510.0);
  s[4].pos(195.0,330.0);
  px=45,py=570;
glutPostRedisplay();

   }

  if(df==2 && key==27)

  {
 df=0;

}
if(key=='8')


    {
      flag=0;

      if(py<=550)

 {
 if((px>=30 && px<=270 && py+20<=560 && py+20>=540) || (px>=300 && px<=450 && py+20<=560 && py+20>=540) || (px>=60 && px<=180 && py+20<=500 && py+20>=480) || (px>=60 && px<=90 && py+20<=460 && py+20>=260) || (px>=120 && px<=180 && py+20<=460 && py+20>=340) || (px>=210 && px<=240 && py+20<=540 && py+20>=320) || (px>=120 && px<=390 && py+20<=320 && py+20>=300) || (px>=90 && px<=120 && py+20<=240 && py+20>=200) || (px>=60 && px<=120 && py+20<=160 && py+20>=120) || (px>=150 && px<=180 && py+20<=300 && py+20>=60)|| (px>=90 && px<=510 && py+20<=60 && py+20>=40) || (px>=210 && px<=300 && py+20<=100 && py+20>=80)|| (px>=210 && px<=300 && py+20<=180 && py+20>=140)|| (px>=210 && px<=300 && py+20<=260 && py+20>=220)|| (px>=270 && px<=420 && py+20<=520 && py+20>=500)|| (px>=270 && px<=450 && py+20<=480 && py+20>=440)|| (px>=390 && px<=450 && py+20<=440 && py+20>=380)|| (px>=270 && px<=360 && py+20<=400 && py+20>=360)|| (px>=480 && px<=540 && py+20<=500 && py+20>=160) || (px>=420 && px<=450 && py+20<=340 && py+20>=180) || (px>=330 && px<=390 && py+20<=260 && py+20>=80) || (px>=420 && px<=570 && py+20<=120 && py+20>=80) || (px>=0 && px<=30 && py+20<=600 && py+20>=0) || (px>570 && px<=600 && py+20<=600 && py+20>=0) || (px>=30 && px<=570 && py+20<=20 && py+20>=0) || (px>=30 && px<=570 && py+20<=600 && py+20>=580))

 px=45,py=570;

 else

        py=py+20;

 }
}

  if(key=='6')

    {
      flag=0;

      if(px<=550)

 {
if((px+30>=30 && px+30<=270 && py<=560 && py>=540) || (px+30>=300 && px+30<=450 && py<=560 && py>=540) || (px+30>=60 && px+30<=180 && py<=500 && py>=480) || (px+30>=60 && px+30<=90 && py<=460 && py>=260) || (px+30>=120 && px+30<=180 && py<=460 && py>=340) || (px+30>=210 && px+30<=240 && py<=540 && py>=320) || (px+30>=120 && px+30<=390 && py<=320 && py>=300) || (px+30>=90 && px+30<=120 && py<=240 && py>=200) || (px+30>=60 && px+30<=120 && py<=160 && py>=120) || (px+30>=150 && px+30<=180 && py<=300 && py>=60)|| (px+30>=90 && px+30<=510 && py<=60 && py>=40) || (px+30>=210 && px+30<=300 && py<=100 && py>=80)|| (px+30>=210 && px+30<=300 && py<=180 && py>=140)|| (px+30>=210 && px+30<=300 && py<=260 && py>=220)|| (px+30>=270 && px+30<=420 && py<=520 && py>=500)|| (px+30>=270 && px+30<=450 && py<=480 && py>=440)|| (px+30>=390 && px+30<=450 && py<=440 && py>=380)|| (px+30>=270 && px+30<=360 && py<=400 && py>=360)|| (px+30>=480 && px+30<=540 && py<=500 && py>=160) || (px+30>=420 && px+30<=450 && py<=340 && py>=180) || (px+30>=330 && px+30<=390 && py<=260 && py>=80) || (px+30>=420 && px+30<=570 && py<=120 && py>=80) || (px+30>=0 && px+30<=30 && py<=600 && py>=0) || (px+30>=570 && px+30<=600 && py<=600 && py>=0) || (px+30>=30 && px+30<=570 && py<=20 && py>=0) || (px+30>=30 && px+30<=570 && py<=600 && py>=580))

px=45,py=570;

else

       px=px+30;

 }
    }

  if(key=='4')

    {
      flag=0;

      if(px>=60)

 {
 if((px-30>=30 && px-30<=270 && py<=560 && py>=540) || (px-30>=300 && px-30<=450 && py<=560 && py>=540) || (px-30>=60 && px-30<=180 && py<=500 && py>=480) || (px-30>=60 && px-30<=90 && py<=460 && py>=260) || (px-30>=120 && px-30<=180 && py<=460 && py>=340) || (px-30>=210 && px-30<=240 && py<=540 && py>=320) || (px-30>=120 && px-30<=390 && py<=320 && py>=300) || (px-30>=90 && px-30<=120 && py<=240 && py>=200) || (px-30>=60 && px-30<=120 && py<=160 && py>=120) || (px-30>=150 && px-30<=180 && py<=300 && py>=60)|| (px-30>=90 && px-30<=510 && py<=60 && py>=40) || (px-30>=210 && px-30<=300 && py<=100 && py>=80)|| (px-30>=210 && px-30<=300 && py<=180 && py>=140)|| (px-30>=210 && px-30<=300 && py<=260 && py>=220)|| (px-30>=270 && px-30<=420 && py<=520 && py>=500)|| (px-30>=270 && px-30<=450 && py<=480 && py>=440)|| (px-30>=390 && px-30<=450 && py<=440 && py>=380)|| (px-30>=270 && px-30<=360 && py<=400 && py>=360)|| (px-30>=480 && px-30<=540 && py<=500 && py>=160) || (px-30>=420 && px-30<=450 && py<=340 && py>=180) || (px-30>=330 && px-30<=390 && py<=260 && py>=80) || (px-30>=420 && px-30<=570 && py<=120 && py>=80) || (px-30>=0 && px-30<=30 && py<=600 && py>=0) || (px-30>=570 && px-30<=600 && py<=600 && py>=0) || (px-30>=30 && px-30<=570 && py<=20 && py>=0) || (px-30>=30 && px-30<=570 && py<=600 && py>=580))

px=45,py=570;

 else

 px=px-30;
 }
    }

  if(key=='2')

    {
      flag=0;

      if(py>=50 )

 {
 if((px>=30 && px<=270 && py-20<=560 && py-20>=540) || (px>=300 && px<=450 && py-20<=560 && py-20>=540) || (px>=60 && px<=180 && py-20<=500 && py-20>=480) || (px>=60 && px<=90 && py-20<=460 && py-20>=260) || (px>=120 && px<=180 && py-20<=460 && py-20>=340) || (px>=210 && px<=240 && py-20<=540 && py-20>=320) || (px>=120 && px<=390 && py-20<=320 && py-20>=300) || (px>=90 && px<=120 && py-20<=240 && py-20>=200) || (px>=60 && px<=120 && py-20<=160 && py-20>=120) || (px>=150 && px<=180 && py-20<=300 && py-20>=60)|| (px>=90 && px<=510 && py-20<=60 && py-20>=40) || (px>=210 && px<=300 && py-20<=100 && py-20>=80)|| (px>=210 && px<=300 && py-20<=180 && py-20>=140)|| (px>=210 && px<=300 && py-20<=260 && py-20>=220)|| (px>=270 && px<=420 && py-20<=520 && py-20>=500)|| (px>=270 && px<=450 && py-20<=480 && py-20>=440)|| (px>=390 && px<=450 && py-20<=440 && py-20>=380)|| (px>=270 && px<=360 && py-20<=400 && py-20>=360)|| (px>=480 && px<=540 && py-20<=500 && py-20>=160) || (px>=420 && px<=450 && py-20<=340 && py-20>=180) || (px>=330 && px<=390 && py-20<=260 && py-20>=80) || (px>=420 && px<=570 && py-20<=120 && py-20>=80) || (px>=0 && px<=30 && py-20<=600 && py-20>=0) || (px>=570 && px<=600 && py-20<=600 && py-20>=0) || (px>=30 && px<=570 && py-20<=20 && py-20>=0) || (px>=30 && px<=570 && py-20<=600 && py-20>=580))

 px=45,py=570;
 else

 py=py-20;
 }

    }



  glutPostRedisplay ();
  if(key=='0')

  {
    for(int i=0;i<5;i++)

      {
if(px==s[i].x1 && py==s[i].y1)

 {
   val = i ;

}
      }
    flag=1;

  }

  if(flag==1)

    keyboard2(key,x,y);
}

/*void myReshape(int w,int h)
{
glViewport(0,0,w,h);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
if(w<=h)
glOrtho(-4.0,4.0,-4.0*(GLfloat)h/(GLfloat)w,4.0*(GLfloat)h/(GLfloat)w,-10.0,10.0);
else
glOrtho(-4.0*(GLfloat)w/(GLfloat)h,4.0*(GLfloat)w/(GLfloat)h,-4.0,4.0,-10.0,10.0);
    glMatrixMode(GL_MODELVIEW);
display();
}*/


void myinit()

{

  glMatrixMode(GL_PROJECTION);  //set projection parameter
  glLoadIdentity();  //sets current transformation matrix to an identity matrix
  glPointSize(8.0);
  glOrtho(0,600,0,600,0,600);  //orthographic veiwing centre of projection plane
  glMatrixMode(GL_MODELVIEW);  //specifies which attribute will be affected
  glClearColor(0.6,0.7,0.6,0.0);
  for(int i=0;i<5;i++)

   {
    s[i].pos(a[i][0],a[i][1]);
   }
}

void idle()

{
  if(df==1)

  {
    end=clock();
    count=(end-start)/CLOCKS_PER_SEC;
    if(count==60)

    {
       df=4;
    }

   }

   glutPostRedisplay();
}


int main(int argc,char **argv)

{
  glutInit(&argc,argv);  //initializes GLUT
  glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB|GLUT_DEPTH);
  glutInitWindowSize(640,480);
  glutInitWindowPosition (0,0);
  glutCreateWindow("sphere game go");
  glutIdleFunc(idle); //register display call back function
  init();

  glutKeyboardFunc(keyboard); //keyboard callback func
  glEnable(GL_DEPTH_TEST);  //enable  hidden surface removal
  myinit();
  //glutReshapeFunc(myReshape);
   glutDisplayFunc(display);
  glutMainLoop(); //processing loop
  return 0;
}
