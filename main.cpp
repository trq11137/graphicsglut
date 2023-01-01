#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>

//int windowWidth=800;
//int windowHeight=500;


//double windowWidth=700;
//double windowHeight=700;
int windowWidth=1500; int windowHeight=1500;
double txval=0, txval1=0;
int i;
double sval=1;
 bool flagScale=false;

void hill(){
///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-12,3);
    glVertex2f(-11.5,4.5);
    glVertex2f(-7.5,4.5);
    glVertex2f(-7,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11.5,4.5);
    glVertex2f(-11,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-7.5,4.5);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-11,5.5);
    glVertex2f(-10.5,6);
    glVertex2f(-8.5,6);
    glVertex2f(-8,5.5);
    //glVertex2f();
    glEnd();

//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.5,6);
    glVertex2f(-10.3,6.2);
    glVertex2f(-8.7,6.2);
    glVertex2f(-8.5,6);
    //glVertex2f();
    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(0,100,0);
    glVertex2f(-10.3,6.2);
    glVertex2f(-10.2,6.3);
    glVertex2f(-8.8,6.3);
    glVertex2f(-8.7,6);
    //glVertex2f();
    glEnd();
}
void boat(){
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(21.0f, -15.5f);
        glVertex2f(17.50f, -15.5f);
        glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(17.0f, -17.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
        glVertex2f(20.5f, -15.5f);
        glVertex2f(21.0f, -13.5f);
        glVertex2f(18.5f, -13.5f);
        glVertex2f(18.0f, -15.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(19.8f, -13.5f);
        glVertex2f(19.8f, -13.0f);
        glVertex2f(19.7f, -13.0f);
        glVertex2f(19.7f, -13.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -17.0f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(15.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(23.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(18.0f, -16.5f);
        glVertex2f(17.5f, -15.5f);

    glEnd();

    glPopMatrix();
    }
void treeleaf(){
float theta2;
    glColor3ub(50,205,50);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta2=i*31416/180;
        glVertex2f(1*cos(theta2),1*sin(theta2));
    }
    glEnd();
}
void house(){
//polygon 1
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();

glPopMatrix();
//polygon 2
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();
glPopMatrix();
//polygon 3
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3ub(205,133,63);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();
glPopMatrix();
//polygon 4
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();
glPopMatrix();
//polygon 5
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();
glPopMatrix();
//polygon 6
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(184,134,11);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();
glPopMatrix();
//polygon 7
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();
glPopMatrix();

///door:left
//polygon a
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();
glPopMatrix();
//polygon b
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

glPopMatrix();

///tree left side
//polygon 1
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();
glPopMatrix();
//polygon 2
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();
glPopMatrix();
//polygon 3
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();
glPopMatrix();
//polygon 4
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();
glPopMatrix();


//triangle 1
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();
glPopMatrix();
//triangle 2
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
    glPopMatrix();
///tree upper side///

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.5, 2.5, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.5, 3.0, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 1.5, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-7.5, 2.5, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.5, 3.5, 0);
   treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-10.0, 4.0, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-8.0, 4.0, 0);
    treeleaf();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(50,205,50);
    glTranslatef(-9.0, 5.0, 0);
   treeleaf();
    glPopMatrix();




}

void cloud(){
float theta1;
    glColor3d(255,255,255);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta1=i*31416/180;
        glVertex2f(0.7*cos(theta1),0.7*sin(theta1));
    }
    glEnd();
}
void cloudfull(){
 glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 8.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(0.0, 9.0, 0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 9.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(1.0, 8.0, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(-1, 8.5, 0);
     cloud();
    glPopMatrix();

    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(2.0, 8.5, 0);
    cloud();
    glPopMatrix();

glPopMatrix();


}
void cloudfinal(){
glPushMatrix();
glTranslatef(txval1, 0, 0);
cloudfull();
glPopMatrix();
}
///night///
void hilln(){
///hillview///
///hill-1///
//polygon1//
    glBegin(GL_POLYGON);
    glColor3ub(0,25,0);
    glVertex2f(-12,3);
    glVertex2f(-11.5,4.5);
    glVertex2f(-7.5,4.5);
    glVertex2f(-7,3);
    //glVertex2f();
    glEnd();

//polygon2//
    glBegin(GL_POLYGON);
    glColor3ub(0,25,0);
    glVertex2f(-11.5,4.5);
    glVertex2f(-11,5.5);
    glVertex2f(-8,5.5);
    glVertex2f(-7.5,4.5);
    //glVertex2f();
    glEnd();

//polygon3//
    glBegin(GL_POLYGON);
    glColor3ub(0,25,0);
    glVertex2f(-11,5.5);
    glVertex2f(-10.5,6);
    glVertex2f(-8.5,6);
    glVertex2f(-8,5.5);
    //glVertex2f();
    glEnd();

//polygon4//
    glBegin(GL_POLYGON);
    glColor3ub(0,25,0);
    glVertex2f(-10.5,6);
    glVertex2f(-10.3,6.2);
    glVertex2f(-8.7,6.2);
    glVertex2f(-8.5,6);
    //glVertex2f();
    glEnd();

//polygon5//
    glBegin(GL_POLYGON);
    glColor3ub(0,25,0);
    glVertex2f(-10.3,6.2);
    glVertex2f(-10.2,6.3);
    glVertex2f(-8.8,6.3);
    glVertex2f(-8.7,6);
    //glVertex2f();
    glEnd();
}
void boatn(){
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(21.0f, -15.5f);
        glVertex2f(17.50f, -15.5f);
        glVertex2f(18.0f, -16.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(17.0f, -17.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255,99,71);
        glVertex2f(20.5f, -15.5f);
        glVertex2f(21.0f, -13.5f);
        glVertex2f(18.5f, -13.5f);
        glVertex2f(18.0f, -15.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
        glVertex2f(19.8f, -13.5f);
        glVertex2f(19.8f, -13.0f);
        glVertex2f(19.7f, -13.0f);
        glVertex2f(19.7f, -13.5f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -17.0f);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(15.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(22.0f, -16.5f);
        glVertex2f(22.0f, -17.0f);
        glVertex2f(23.5f, -16.2f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
        glVertex2f(17.0f, -16.5f);
        glVertex2f(18.0f, -16.5f);
        glVertex2f(17.5f, -15.5f);

    glEnd();

    glPopMatrix();
    }
void treeleafn(){
float theta2;
    glColor3ub(0,55,0);

    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta2=i*31416/180;
        glVertex2f(1*cos(theta2),1*sin(theta2));
    }
    glEnd();
}
void housen(){
//polygon 1
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(89,49,9);
    glVertex2f(-2.7f,1.2f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-1.0f,-1.0f);

    glEnd();

glPopMatrix();
//polygon 2
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(89,49,9);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-6.7f,1.2f);
    glVertex2f(-8.5f,-1.0f);
    glVertex2f(-8.0f,-1.0f);

    glEnd();
glPopMatrix();
//polygon 3
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3ub(105,83,33);
    glVertex2f(-6.5f,1.0f);
    glVertex2f(-8.0f,-1.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-1.0f);

    glEnd();
glPopMatrix();
//polygon 4
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(88,85,12);
    glVertex2f(-6.0f,-2.0f);
    glVertex2f(-6.0f,-1.0f);
    glVertex2f(-7.0f,-1.0f);
    glVertex2f(-7.0f,-2.0f);

    glEnd();
glPopMatrix();
//polygon 5
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(89,39,9);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-8.0f,-2.5f);
    glVertex2f(-8.3f,-2.9f);
    glVertex2f(-5.0f,-3.5f);

    glEnd();
glPopMatrix();
//polygon 6
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(144,94,0.1);
    glVertex2f(-1.5f,-3.0f);
    glVertex2f(-1.5f,-1.0f);
    glVertex2f(-5.0f,-1.0f);
    glVertex2f(-5.0f,-3.0f);

    glEnd();
glPopMatrix();
//polygon 7
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(89,39, 9);
    glVertex2f(-5.0f,-3.0f);
    glVertex2f(-5.0f,-3.5f);
    glVertex2f(-1.0f,-3.5f);
    glVertex2f(-1.5f,-3.0f);

    glEnd();
glPopMatrix();

///door:left
//polygon a
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(-2.5f,-3.0f);
    glVertex2f(-2.5f,-1.2f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();
glPopMatrix();
//polygon b
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(128,135,32);
    glVertex2f(-3.3f,-3.0f);
    glVertex2f(-3.3f,-1.4f);
    glVertex2f(-4.0f,-1.2f);
    glVertex2f(-4.0f,-3.0f);

    glEnd();

glPopMatrix();

///tree left side
//polygon 1
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-9.5,2.5);
    glVertex2f(-10,2);
    glEnd();
glPopMatrix();
//polygon 2
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glVertex2f(-8,2);
    glVertex2f(-8,2.5);
    glEnd();
glPopMatrix();
//polygon 3
glPushMatrix();
glBegin(GL_POLYGON);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9.5,-3.5);
    glVertex2f(-9,-4);
    glVertex2f(-8.5,-3.5);
    glVertex2f(-8.5,1);
    glEnd();
glPopMatrix();
//polygon 4
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(139,69,19);
    glVertex2f(-8.5,-3);
    glVertex2f(-9.5,-3);
    glVertex2f(-10.5,-3.5);
    glVertex2f(-7.5,-3.5);
    glEnd();
glPopMatrix();


//triangle 1
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-10,-0.5);
    glVertex2f(-9.5,-1);
    glVertex2f(-9.5,-0.6);
    glEnd();
glPopMatrix();
//triangle 2
glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2f(-9.5,1);
    glVertex2f(-9,1.5);
    glVertex2f(-8.5,1);
    glEnd();
    glPopMatrix();
///tree upper side///

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-10.5, 2.5, 0);
    treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-9.5, 3.0, 0);
   treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-7.5, 1.5, 0);
   treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-7.5, 2.5, 0);
    treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-8.5, 3.5, 0);
   treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-10.0, 4.0, 0);
    treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-8.0, 4.0, 0);
    treeleafn();
    glPopMatrix();

    glPushMatrix();
    glColor3ub(0,55,0);
    glTranslatef(-9.0, 5.0, 0);
   treeleafn();
    glPopMatrix();




}

void cloudn(){
float theta1n;
    glColor3d(166,166,166);

    glBegin(GL_POLYGON);
    for(int l=0;l<360;l++)
    {
        theta1n=l*31416/180;
        glVertex2f(0.7*cos(theta1n),0.7*sin(theta1n));
    }
    glEnd();
}
void cloudfulln(){
 glPushMatrix();


    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(0.0, 8.0, 0);
    cloudn();
    glPopMatrix();

    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(0.0, 9.0, 0);
    cloudn();
    glPopMatrix();

    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(1.0, 9.0, 0);
     cloudn();
    glPopMatrix();

    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(1.0, 8.0, 0);
     cloudn();
    glPopMatrix();

    glPushMatrix();
    glColor3d(201,201,201);
    glTranslatef(-1, 8.5, 0);
     cloudn();
    glPopMatrix();

    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(2.0, 8.5, 0);
    cloudn();
    glPopMatrix();

glPopMatrix();


}
void cloudfinaln(){
glPushMatrix();
glTranslatef(txval1, 0, 0);
cloudfulln();
glPopMatrix();
}

void StartingText()
{
    char text[120];

        sprintf(text, "UNIVERSITY OF INFORMATION TECHNOLOGY & SCIENCE",5.00,8.00);
    glColor3f(0, 1, 0);
    glRasterPos2f( -35 , 55 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

    sprintf(text, "VILLAGE SCENARIO",5.00,8.00);
    glColor3f(1, 1, 0);
    glRasterPos2f( -20 , 45 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }

        sprintf(text, "NAME-MD. TORIQUL ISLAM",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 35 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, "ID-1914551066",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 30 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "DEPARTMENT OF CSE",5.00,8.00);
    glColor3f(1, 0, 0);
    glRasterPos2f( -20 , 25 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
            sprintf(text, "SUBMITTED TO-",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -20 , 17 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "SALIM SHADMAN ANKUR & PROPA PUNAM",5.00,8.00);
    glColor3f(0, 0, 1);
    glRasterPos2f( -10 , 12 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
                sprintf(text, "PRESS 'd' FOR DAY MOOD",5.00,8.00);
    glColor3f(1, 0, 1);
    glRasterPos2f( -20 , 0 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
        sprintf(text, " PRESS 'n' FOR NIGHT MOOD",5.00,8.00);
    glColor3f(1, 1, 1);
    glRasterPos2f( -21 , -5 );
    for(int i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' '  && text[i+1]==' ')
        {
            glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
            glRasterPos2f( -32 , 02 );
        }
        else glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, text[i]);
    }
}


void drawScene(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);
    ///sky///
    glBegin(GL_QUADS);
    glColor4f(0.7f, 1.0f, 1.0f, 1.0f);

    glVertex2f(38.0,14.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,14.0);


    glEnd();
     ///sun///
    glPushMatrix();
    float theta;
    glColor3d(255,255,0);
    glTranslatef(30.0, 7.0, 0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta=i*31416/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();


    glPopMatrix();

glPushMatrix();
cloudfinal();
glPopMatrix();


///cloud 2///


    glPushMatrix();


    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(15.0, 0.5, 0);
   cloudfinal();
    glPopMatrix();



  ///cloud 3///





    glPushMatrix();
    glColor3d(255,255,255);
    glTranslatef(22.0, 0, 0);
 cloudfinal();
    glPopMatrix();




    //hill//
    glPushMatrix();
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(3,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(8,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(13,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(17,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(22,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(25,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(29,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(33,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(37,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(39,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(43,0,0);
hill();
glPopMatrix();
 glPushMatrix();
 glTranslatef(47,0,0);
hill();
glPopMatrix();
///sea portion///
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glColor3ub(65,105,225);
    glVertex2f(38.0,-19.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,-19.0);

    glEnd();
    ///left soil portion///
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(4.0,0.0);
    glVertex2f(6.0,1.0);
    glVertex2f(3.0,3.0);
    glVertex2f(-12.0f,3.0);
    glVertex2f(-12.0,0.0);

    glEnd();
    //polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();
///left sidewise border partition///
 //polygon 1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();



house();
glPushMatrix();

///right soil portion///
//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,128,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(16.0f,1.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(38.0f,3.0f);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,128,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(12.5,3);
    glVertex2f(15.6,0.8);
    glVertex2f(16,1);
    glVertex2f(13,3);

    glEnd();

//polygon2//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);

    glEnd();


glPushMatrix();
glTranslatef(txval,0,0);
boat();
glPopMatrix();

glPushMatrix();
 glTranslatef(31,-3,0);
 house();
glPopMatrix();

glPushMatrix();
glRotatef(8,0,0,1);
glTranslatef(-4,10,0);
glScalef(0.75,1,1);
boat();
glPopMatrix();






/*void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
case 'l':
    txval+=0.45;
    break;
    case 'f':
    txval-=0.45;
    break;
    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}
void animate()
{*/
	if (flagScale == true)
	{
		txval+= 0.0055;
		if(txval > 21)
			txval = -27;
		txval1+= 0.0055;
		if(txval1 > 21)
			txval1 = -15;
	}
	if (flagScale == false)
	{
	txval -= 0.0050001;
			if(txval < -28)
			txval = 1;
txval1 -= 0.0050001;
    if(txval1 < -28)
    txval1 = 1;
	}



	glutPostRedisplay();
	     glFlush();
    glutSwapBuffers();
}

void display2()
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-12,38,-19,14);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
//    glViewport(0, 0 ,windowWidth ,windowHeight);
    ///sky///
    glBegin(GL_QUADS);
    glColor4f(0.1f, 0.1f, 0.1f, 0.1f);

    glVertex2f(38.0,14.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,14.0);


    glEnd();
     ///sun///
    glPushMatrix();
    float theta;
    glColor3d(166,166,166);
    glTranslatef(30.0, 7.0, 0);
    glBegin(GL_POLYGON);
    for(int i=0;i<360;i++)
    {
        theta=i*31416/180;
        glVertex2f(1*cos(theta),1*sin(theta));
    }
    glEnd();


    glPopMatrix();

glPushMatrix();
cloudfinaln();
glPopMatrix();


///cloud 2///


    glPushMatrix();


    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(15.0, 0.5, 0);
   cloudfinaln();
    glPopMatrix();



  ///cloud 3///





    glPushMatrix();
    glColor3d(166,166,166);
    glTranslatef(22.0, 0, 0);
 cloudfinaln();
    glPopMatrix();




    //hill//
    glPushMatrix();

hilln();

glPopMatrix();
 glPushMatrix();

 glTranslatef(3,0,0);

hilln();

glPopMatrix();
 glPushMatrix();
 glTranslatef(8,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(13,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(17,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(22,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(25,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(29,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(33,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(37,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(39,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(43,0,0);
hilln();
glPopMatrix();
 glPushMatrix();
 glTranslatef(47,0,0);
hilln();
glPopMatrix();
///sea portion///
    glBegin(GL_QUADS);// Draw a Red 1x1 Square centered at origin
    glColor3ub(32,32,32);
    glVertex2f(38.0,-19.0);
    glVertex2f(38.0,3.0);
    glVertex2f(-12.0,3.0);
    glVertex2f(-12.0,-19.0);

    glEnd();
    ///left soil portion///
//polygon 1
    glBegin(GL_POLYGON);
    glColor3ub(0,18,0);
    glVertex2f(4.0,0.0);
    glVertex2f(6.0,1.0);
    glVertex2f(3.0,3.0);
    glVertex2f(-12.0f,3.0);
    glVertex2f(-12.0,0.0);

    glEnd();
    //polygon 2
    glBegin(GL_POLYGON);
    glColor3ub(0,18,0);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(-12.0f,0.0f);
    glVertex2f(-12.0f,-3.0f);

    glEnd();

//polygon 3
    glBegin(GL_POLYGON);
    glColor3ub(0,18,0);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(-12.0f,-3.0f);
    glVertex2f(-12.0f,-4.5f);

    glEnd();

//polygon 4
    glBegin(GL_POLYGON);
    glColor3ub(0,18,0);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(-12.0f,-4.5f);
    glVertex2f(-12.0f,-9.5f);

    glEnd();

//polygon 5
    glBegin(GL_POLYGON);
    glColor3ub(0,18,0);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(-12.0f,-9.0f);
    glVertex2f(-12.0f,-11.5f);

    glEnd();
///left sidewise border partition///
 //polygon 1
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(6.0f,0.5f);
    glVertex2f(6.0f,1.0f);
    glVertex2f(4.0f,0.0f);
    glVertex2f(4.5f,-0.25f);

    glEnd();

 //polygon 2
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(7.0f,-2.0f);
    glVertex2f(7.0f,-1.5f);
    glVertex2f(5.0f,-3.0f);
    glVertex2f(5.5f,-3.15f);

    glEnd();

//polygon 3
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(8.0f,-4.4f);
    glVertex2f(8.0f,-4.0f);
    glVertex2f(6.0f,-4.5f);
    glVertex2f(6.3f,-4.8f);

    glEnd();

//polygon 4
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(9.5f,-7.5f);
    glVertex2f(9.5f,-7.0f);
    glVertex2f(2.0f,-9.0f);
    glVertex2f(3.0f,-9.3f);

    glEnd();

//polygon 5
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(5.0f,-10.5f);
    glVertex2f(5.0f,-10.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(2.0f,-12.0f);

    glEnd();

//polygon 6
    glBegin(GL_QUADS);
    glColor3ub(0,0,0);
    glVertex2f(2.0f,-12.0f);
    glVertex2f(2.0f,-11.5f);
    glVertex2f(-12.0f,-11.5f);
    glVertex2f(-12.0f,-12.0f);

    glEnd();



housen();
glPushMatrix();

///right soil portion///
//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,18,0);
    glVertex2f(13.0f,3.0f);
    glVertex2f(16.0f,1.0f);
    glVertex2f(38.0f,1.0f);
    glVertex2f(38.0f,3.0f);

    glEnd();

//polygon2//
    glBegin(GL_POLYGON);

    glColor3ub(0,18,0);
    glVertex2f(16,1);
    glVertex2f(14,0);
    glVertex2f(17,-1.5);
    glVertex2f(38,-1.5);
    glVertex2f(38,1);

    glEnd();

//polygon3//
    glBegin(GL_POLYGON);

    glColor3ub(0,18,0);
    glVertex2f(17,-1.5);
    glVertex2f(15,-3);
    glVertex2f(18,-4);
    glVertex2f(38,-4);
    glVertex2f(38,-1.5);

    glEnd();

//polygon4//
    glBegin(GL_POLYGON);

    glColor3ub(0,18,0);
    glVertex2f(18,-4);
    glVertex2f(16,-4.5);
    glVertex2f(21,-7);
    glVertex2f(38,-7);
    glVertex2f(38,-4);

    glEnd();

//polygon5//
    glBegin(GL_POLYGON);

    glColor3ub(0,18,0);
    glVertex2f(21,-7);
    glVertex2f(19,-8);
    glVertex2f(22,-9);
    glVertex2f(38,-9);
    glVertex2f(38,-7);

    glEnd();

///right sidewise border partition///

//polygon1//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(12.5,3);
    glVertex2f(15.6,0.8);
    glVertex2f(16,1);
    glVertex2f(13,3);

    glEnd();

//polygon2//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(14,-0.5);
    glVertex2f(16.4,-1.9);
    glVertex2f(17,-1.5);
    glVertex2f(14,0);

    glEnd();

//polygon3//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(15,-3.5);
    glVertex2f(17,-4.2);
    glVertex2f(18,-4);
    glVertex2f(15,-3);

    glEnd();

//polygon4//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(16,-5);
    glVertex2f(20.5,-7.2);
    glVertex2f(21,-7);
    glVertex2f(16,-4.5);

    glEnd();

//polygon5//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(19,-8.5);
    glVertex2f(22,-9.5);
    glVertex2f(22,-9);
    glVertex2f(19,-8);

    glEnd();

//polygon6//
    glBegin(GL_QUADS);

    glColor3ub(0,0,0);
    glVertex2f(38,-9);
    glVertex2f(22,-9);
    glVertex2f(22,-9.5);
    glVertex2f(38,-9.5);

    glEnd();


glPushMatrix();
glTranslatef(txval,0,0);
boat();
glPopMatrix();

glPushMatrix();
 glTranslatef(31,-3,0);
 housen();
glPopMatrix();

glPushMatrix();
glRotatef(8,0,0,1);
glTranslatef(-4,10,0);
glScalef(0.75,1,1);
boat();
glPopMatrix();






/*void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {
case 'l':
    txval+=0.45;
    break;
    case 'f':
    txval-=0.45;
    break;
    case 'R':
        flagScale=true;
        break;
    case 'r':
        flagScale=false;
        break;



    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}
void animate()
{*/
	if (flagScale == true)
	{
		txval+= 0.0055;
		if(txval > 116)
			txval = -37.5;
		txval1+= 0.0055;
		if(txval1 > 116)
			txval1 = -37.5;
	}
	if (flagScale == false)
	{
	txval -= 0.0050001;
			if(txval < -37.5)
			txval = 1;
txval1 -= 0.0050001;
    if(txval1 < -37.5)
    txval1 = 1;
	}



	glutPostRedisplay();
	     glFlush();
    glutSwapBuffers();
}




   void init(void)
{
    glClearColor( 0.0f, 0.0f, 0.0f, 1.0f);


    //std::cout<<"Init is called"<<std::endl;
}


void Display1()
{
        glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glClearColor(0,0,0,0);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-60,60,-40,60
               );
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    glPushMatrix();
    StartingText();
    glEnd();
    glPopMatrix();
     glFlush();
    glutSwapBuffers();



}

void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1500, 1000);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(drawScene);
              break;



        case 'n':
           glutDestroyWindow(1);
	        glutInitWindowSize(1500, 1000);

            glutCreateWindow("village scenario");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(display2);

            glutPostRedisplay();
            break;
		case 27:	// Escape key
			exit(1);

	}
}

int main (int argc, char **argv)
{
glutInit(&argc, argv);
glutInitWindowSize(1500, 1000);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
glutInitDisplayMode(GLUT_DOUBLE); // Enable double buffered mode

glutInitWindowPosition(10,10);

glutCreateWindow("VILLAGE SCENARIO");
glShadeModel( GL_SMOOTH );
glEnable( GL_DEPTH_TEST );

glutKeyboardFunc(handleKeypress);
  init();
	glShadeModel( GL_SMOOTH );
//   glutReshapeFunc(reshape);


glutDisplayFunc(drawScene);
glutDisplayFunc(display2);

glutDisplayFunc(Display1);

glDepthFunc(GL_LEQUAL);    // Set the type of depth-test
//glutKeyboardFunc(myKeyboardFunc);
//    glutIdleFunc(animate);
glutMainLoop();
return 0;
}



