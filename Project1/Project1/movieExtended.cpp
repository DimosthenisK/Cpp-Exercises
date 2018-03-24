#include "movieExtended.h"
#include <iostream>
#include <string>
//For exercise 2

using namespace std;
movieExtended::movieExtended() {

}

void movieExtended::name(string name) {
	this->v_name = name;
}

string movieExtended::name(void) {
	return this->v_name;
}

void movieExtended::year(int year) {
	this->v_year = year;
}

int movieExtended::year(void) {
	return this->v_year;
}

void movieExtended::company(string company) {
	this->v_company = company;
}

string movieExtended::company(void) {
	return this->v_company;
}

void movieExtended::producer(string producer) {
	this->v_producer = producer;
}

string movieExtended::producer(void) {
	return this->v_producer;
}

void movieExtended::display(void) {
	cout << "Movie: " << name() << endl;
	cout << "\tYear: " << year() << endl;
	cout << "\tCompany: " << company() << endl;
	cout << "\tProducer: " << producer() << endl;
}