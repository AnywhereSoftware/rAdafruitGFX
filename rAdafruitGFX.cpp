#include "B4RDefines.h"
namespace B4R {
	void B4RAdafruitGFX::DrawLine(Int X0, Int Y0, Int X1, Int Y1, UInt Color) {
		gfx->drawLine(X0, Y0, X1, Y1, Color);
	}
	void B4RAdafruitGFX::DrawCircle(Int X0, Int Y0, Int Radius, UInt Color, bool Filled) {
		if (Filled)
			gfx->fillCircle(X0, Y0, Radius, Color);
		else
			gfx->drawCircle(X0, Y0, Radius, Color);
	}
	Int B4RAdafruitGFX::getWidth() {
		return gfx->width();
	}
	Int B4RAdafruitGFX::getHeight() {
		return gfx->height();
	}
	void B4RAdafruitGFX::DrawRect(Int X0, Int Y0, Int Width, Int Height, UInt Color, bool Filled) {
		if (Filled)
			gfx->fillRect(X0, Y0, Width, Height, Color);
		else
			gfx->drawRect(X0, Y0, Width, Height, Color);
	}
	void B4RAdafruitGFX::SetCursor(Int X, Int Y) {
		gfx->setCursor(X, Y);
	}
	Int B4RAdafruitGFX::getCursorX() {
		return gfx->getCursorX();
	}
	Int B4RAdafruitGFX::getCursorY() {
		return gfx->getCursorY();
	}
	B4RAdafruitGFX* B4RAdafruitGFX::DrawText(Object* Text) {
		B4RStream::Print(gfx, Text);
		return this;
	}
	void B4RAdafruitGFX::ConfigureText(Byte Size, UInt Color, bool Wrap) {
		gfx->setTextSize(Size);
		gfx->setTextWrap(Wrap);
		gfx->setTextColor(Color);
		
	}
}