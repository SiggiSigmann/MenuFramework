#ifndef TESTMenuH
#define TESTMenuH

#include "menu/ui/Menu.h"
#include <Arduino.h>

class TestM: public Menu{
	private:
		String priv = "priv";
		void test();
		void test2();

	public:
		TestM();
		//drwaing
		//void draw();
		
		//buttonhandler
		//void buttonNext();
		void buttonPrev();
		void buttonUp();
		void buttonDown();

		//actions before and after
		void preActions();
		void postActions();

		void onStorageChange();
		void buttonAction(byte);
};



#endif