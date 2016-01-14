#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class CinderOpenGLApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void CinderOpenGLApp::setup()
{
}

void CinderOpenGLApp::mouseDown( MouseEvent event )
{
}

void CinderOpenGLApp::update()
{
}

void CinderOpenGLApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( CinderOpenGLApp, RendererGl )
