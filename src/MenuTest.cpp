#include "MenuTest.h"

MenuTest::MenuTest() : Menu("MenuTest"){
	this->addEntry(MenuEntry{"value "+String(variableToShow),2,2});
	this->addEntry(MenuEntry{"add",0,0});
	this->addEntry(MenuEntry{"remove",0,1});
}

//storge
void MenuTest::onStorageChange(){};

void MenuTest::buttonAction(byte id){
	switch (id){
		case 0:
			addNew();
			break;
		case 1:
			removeE();
			break;
		case 2:
			break;
		default:
			break;
	}
}

void MenuTest::addNew(){
	this->addEntry(MenuEntry{String(counter++),0,2});
}
void MenuTest::removeE(){
	this->remove(2);
}

String MenuTest::updateEntry(byte id){
	switch(id){
		case(2): return "value "+String(variableToShow);
	}
	return "";
}

void MenuTest::valueChangeUp(byte id){
	switch(id){
		case(2): variableToShow++;
	}
}

void MenuTest::valueChangeDown(byte id){
	switch(id){
		case(2): variableToShow--;
	}

}