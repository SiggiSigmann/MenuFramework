#ifndef PERSISTANCE_H
#define PERSISTANCE_H

#include "menu/periferals/persistance.h"
#include <Arduino.h>

class Persistance : public IPersistance{
	private:
		String storage = "test->huhu;kmd->123\n";

	public:

		bool isPrepared(){return true;};


		void storeSettings(String m){Serial.println("STORAGE :"+m);storage = m;};
		String readSettings(){return storage;};
};

#endif