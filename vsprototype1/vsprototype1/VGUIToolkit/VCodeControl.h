#pragma once

#include <VGUIToolkit/VControl.h>
#include <sstream>

class VCodeControl : public VControl {
public:

	VCodeControl( int x, int y, int cx, int cy );

	void paint( HDC& hdc );

	bool loadTextFile( std::string filePath );

private:
	std::string m_plainText;
	HRGN m_clipRegion;
};
