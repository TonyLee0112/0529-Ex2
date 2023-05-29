#include "Engineer.h"
int Engineer::getCarPrice(Car* xx) {
	return xx->price; // access protected or private
}

int Engineer::getWheels(Car* aa) {
	return aa->wheels;
}

float Engineer::getAdblue(Car* aa) {
	return aa->Remain_Adblue;
}

int Engineer::getkeys(Car* aa) {
	return aa->numofkeys;
}

