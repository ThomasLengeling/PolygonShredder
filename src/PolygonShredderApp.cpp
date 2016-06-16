#include "cinder/app/App.h"
#include "cinder/app/RendererGl.h"
#include "cinder/gl/gl.h"

using namespace ci;
using namespace ci::app;
using namespace std;

class PolygonShredderApp : public App {
  public:
	void setup() override;
	void mouseDown( MouseEvent event ) override;
	void update() override;
	void draw() override;
};

void PolygonShredderApp::setup()
{
}

void PolygonShredderApp::mouseDown( MouseEvent event )
{
}

void PolygonShredderApp::update()
{
}

void PolygonShredderApp::draw()
{
	gl::clear( Color( 0, 0, 0 ) ); 
}

CINDER_APP( PolygonShredderApp, RendererGl )
