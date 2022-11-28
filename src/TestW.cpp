#include "TestW.h"
int TestW::nr = 0;

TestW::TestW() : Window("test"){
	this->kmd = String(++nr);
};
//drwaing
void TestW::draw(){
	display.setCursor(50,50);
	display.print(this->kmd);
};

//buttonhandler
void TestW::buttonNext(){};
void TestW::buttonPrev(){};
void TestW::buttonUp(){};
void TestW::buttonDown(){};

//actions before and after
void TestW::preActions(){};
void TestW::postActions(){};

//storge
void TestW::onStorageChange(){};