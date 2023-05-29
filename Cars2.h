#pragma once
class Car {
public:

	float price;
	Car() :speed(0.1), wheels(0), price(0.2) {};
	Car(float, int, float);
	void setPrice(float);
	float getPrice();
	float speed;
	void speedChange(float);
	int wheels;
	void setWheels(int);
	int getWheels();
	void klaxon(int);

	friend class Engineer;

protected:
	float Remain_Adblue = 0;
	float fillAdblue(float);

private:
	int numofkeys = 2;
	int getkeys();
	void speedUp(float);
	void speedDown(float);
};
