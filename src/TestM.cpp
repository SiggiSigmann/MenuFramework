#include "TestM.h"

TestM::TestM() : Menu("menu1"){
	this->addEntry(MenuEntry{"start",0,0});
	this->addEntry(MenuEntry{"1testPoint",0,0});
	this->addEntry(MenuEntry{"2testInfo",1,1 });
	this->addEntry(MenuEntry{"3testPoint2",0,2});
	this->addEntry(MenuEntry{"4testInfo2",1,3});
	this->addEntry(MenuEntry{"5testPoint",0,0});
	this->addEntry(MenuEntry{"6testInfo",1,1 });
	this->addEntry(MenuEntry{"7testPoint2",0,2});
	this->addEntry(MenuEntry{"8testInfo2",1,3});
	this->addEntry(MenuEntry{"stop",0,0});
}
//drwaing
/*void TestM::draw(){
	Menu::draw();
}*/

//buttonhandler
//void TestM::buttonNext(){}
void TestM::buttonPrev(){}
void TestM::buttonUp(){Menu::buttonUp();}
void TestM::buttonDown(){Menu::buttonDown();}

//actions before and after
void TestM::preActions(){}
void TestM::postActions(){}

//storge
void TestM::onStorageChange(){};

void TestM::buttonAction(byte id){
	switch (id){
		case 0:
			test();
			break;
		case 3:
			test2();
			break;
		default:
			break;
	}
}

void TestM::test(){
	priv += "-";
}

void TestM::test2(){
	priv += "+";
}