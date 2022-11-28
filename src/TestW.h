#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include "menu/ui/Window.h"

class TestW : public Window{
	private:
	
		String kmd;

			static int nr;

	public:
		TestW();
		//drwaing
		void draw();
		
		//buttonhandler
		void buttonNext();
		void buttonPrev();
		void buttonUp();
		void buttonDown();

		//actions before and after
		void preActions();
		void postActions();

		//storge
		void onStorageChange();
		String get(){return kmd;}
};



#endif