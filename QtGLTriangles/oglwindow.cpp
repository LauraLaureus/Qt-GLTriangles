#include "oglwindow.h"

OGLWindow::OGLWindow(QWidget *parent) : QOpenGLWidget(parent)
{

}

void OGLWindow::initializeGL(){
    initializeOpenGLFunctions();
    glClearColor(1.0,1.0,0.0,0.0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    setViewport();
    setProjection();
}


void OGLWindow::paintGL(){
    glClear(GL_COLOR_BUFFER_BIT| GL_DEPTH_BUFFER_BIT);
    setModelView();

    glColor3f(1.0f,0.0f,0.0f);
    glBegin(GL_TRIANGLES);
        glVertex3f(0.0f, 0.0f, 0.0f);
        glVertex3f(-1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, -1.0f, 0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
        glColor3f(1.0f, 0.0f, 0.0f);
        glVertex3f(0.0f, 0.0f, 0.0f);
        glColor3f(0.0f, 1.0f, 0.0f);
        glVertex3f(1.0f, 0.0f, 0.0f);
        glColor3f(0.0f, 0.0f, 1.0f);
        glVertex3f(0.0f, 1.0f, 0.0f);
    glEnd();
}


void OGLWindow::resizeGL(){
    setViewport();
    setProjection();
}

void OGLWindow::setViewport(){
    int width = this->width();
    int height = this->height();
    glViewport(0,0,width,height);
}

void OGLWindow::setProjection(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-1.0,1.0,-1.0,1.0,-1.0,1.0);
}

void OGLWindow::setModelView(){
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}
