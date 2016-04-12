#ifndef OGLWINDOW_H
#define OGLWINDOW_H


#include <QOpenGLFunctions>
#include <QOpenGLWidget>

class OGLWindow : public QOpenGLWidget, protected QOpenGLFunctions
{
    Q_OBJECT
public:
    explicit OGLWindow(QWidget *parent = 0);

signals:

public slots:

protected:
     void initializeGL();
     void paintGL();
     void resizeGL();
     void setViewport();
     void setProjection();
     void setModelView();
};

#endif // OGLWINDOW_H
