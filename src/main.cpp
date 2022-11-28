#include <Arduino.h>
#include <Wire.h>

#include "TestW.h"
#include "TestM.h"
#include "Persistance.h"
#include "MenuTest.h"

#include "menu/MenuFramework.h"

#define SCREEN_WIDTH 128 
#define SCREEN_HEIGHT 64
#define OLED_RESET    -1
#define SCREEN_ADDRESS 0x3C

Adafruit_SSD1306 display(SCREEN_WIDTH, SCREEN_HEIGHT, &Wire, OLED_RESET);


MenuController* menuController;
SettingsManager* sc = new SettingsManager(new Persistance());

void setup() {
	Serial.begin(115200);
	while(!Serial){}

	if(!display.begin(SSD1306_SWITCHCAPVCC, SCREEN_ADDRESS)) { 
		ESP.restart();
	}

	display.clearDisplay();
	display.setTextSize(0);
	display.setTextColor(WHITE);
	display.display();

	toneManager->playDrone(0);

	sc->set("t1","4");
	sc->set("t2","0.1");
	
	String a = sc->get("t1");

	String f = sc->get("t2");
	Serial.println("->"+a);
	Serial.println("->"+f);

	sc->persistSettings();
	sc->loadSettings();
	a = sc->get("t1");

	f = sc->get("t2");
	Serial.println("->"+a);
	Serial.println("->"+f);


	toastManager->addToast(new Toast("1", 100));
	toastManager->addToast(new Toast("huhu2", 200));
	toastManager->addToast(new Toast("3 laaaaaang", 500));

	TestW* start = new TestW();
	menuController = new MenuController(start);

	menuController->run();

	delay(100);
	TestW* start2 = new TestW();
	menuController->setActiveWindow(start2);
	menuController->run();


	delay(100);
	menuController->windowBack();
	menuController->run();

	toneManager->playDrone(1);

	delay(100);
	menuController->windowBack();
	menuController->run();

	delay(100);
	menuController->setActiveWindow(start2);
	menuController->run();

	delay(100);
	TestW* start3 = new TestW();
	menuController->setActiveWindow(start3);
	menuController->run();

	delay(100);

	menuController->windowBack();
	menuController->run();

	delay(100);

	menuController->windowBack();
	menuController->run();

	delay(100);

	menuController->setActiveWindow(new TestM());
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	toneManager->playDrone(2);

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	
	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

		menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	
	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

	delay(100);


	menuController->buttonDown();
	menuController->buttonNext();
	menuController->run();

		delay(100);

	menuController->buttonUp();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonUp();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonUp();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonUp();
	menuController->buttonNext();
	menuController->run();

	delay(100);

	menuController->buttonUp();
	menuController->buttonNext();
	menuController->run();

	menuController->setActiveWindow(new MenuTest());
}

void loop() {
	menuController->run();		//draw and handel Buttons
}
