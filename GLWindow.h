#ifndef GL_WINDOW_H
#define GL_WINDOW_H

#include <QtWidgets/qopenglwidget.h>


class TestCube;
class Vector2f;


class GLWindow: public QOpenGLWidget
{
public:
	GLWindow();
	~GLWindow();

protected:
	void initializeGL() override;
	void paintGL() override;
	void resizeGL(int w, int h) override;
	void mousePressEvent(QMouseEvent* buttonPress) override;

private:
	TestCube* cube;
	
private:
	void sendDataToGPU();
	void drawObjects();
	void screenToClip(Vector2f& screenCoordinate);

private:
	//mouse position
	int screenWidth, screenHeight;


};
#endif

