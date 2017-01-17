#pragma once
#include "B4RDefines.h"
#include "Adafruit_GFX.h"
//~version: 1.01
namespace B4R {
	//~shortname: AdafruitGFX
	//This is a generic graphics library. It always works together with another hardware specific library.
	class B4RAdafruitGFX {
		public:
			//~hide
			Adafruit_GFX* gfx;
			//Draws a line between the two points.
			void DrawLine(Int X0, Int Y0, Int X1, Int Y1, UInt Color);
			//Draws a circle.
			void DrawCircle(Int X0, Int Y0, Int Radius, UInt Color, bool Filled);
			//Draws a rectangle.
			void DrawRect(Int X0, Int Y0, Int Width, Int Height, UInt Color, bool Filled);
			//Returns the display width.
			Int getWidth();
			//Returns the display height.
			Int getHeight();
			//Sets the cursor position.
			void SetCursor(Int X, Int Y);
			//Gets the cursor X position.
			Int getCursorX();
			//Gets the cursor Y position.
			Int getCursorY();
			//Draws Text. Text can be a string, array of bytes or a number.
			//Returns the object itself.
			B4RAdafruitGFX* DrawText(Object* Text);
			//Configures the text drawing settings.
			//Size - 1 is the default size (6 * 8 pixels per character).
			//Color - The text color.
			//Wrap - Whether exceeding text will be wrapped to the next line.
			void ConfigureText(Byte Size, UInt Color, bool Wrap);
			
	};
}