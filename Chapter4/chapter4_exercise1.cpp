#include "chapter4_exercise1.h"
#include <iostream>

using namespace std;

struct phone {

	int city_code = 0;
	int telephone_exchange_number = 0;
	int subscriber_number = 0;
};

void chapter4_exercise1() {

	phone ph1;
	ph1.city_code = 212;
	ph1.telephone_exchange_number = 767;
	ph1.subscriber_number = 8900;

	phone ph2;

	cout << "Enter city code, telephone exchanhe number and subscriber number: ";
	cin >> ph2.city_code >> ph2.telephone_exchange_number >> ph2.subscriber_number;

	cout << "\nMy number: (" << ph1.city_code << ") " << ph1.telephone_exchange_number << "-" << ph1.subscriber_number;
	cout << "\nYour number: (" << ph2.city_code << ") " << ph2.telephone_exchange_number << "-" << ph2.subscriber_number << "\n";

	
}