#ifndef TESTTESTMenuH
#define TESTTESTMenuH

#include "menu/ui/Menu.h"
#include <Arduino.h>

class MenuTest: public Menu{
	private:
		int variableToShow = 0;

		int counter = 0;
		void addNew();
		void removeE();

	public:
		MenuTest();
		//drwaing
		//void draw();
		
		//actions before and after
		void preActions();
		void postActions();

		void onStorageChange();
		void buttonAction(byte);

		String updateEntry(byte);
		void valueChangeUp(byte);
		void valueChangeDown(byte);
};



#endif