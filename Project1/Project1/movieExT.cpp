#include "movieExT.h"
#include <string.h>
//For exercise 3

void movieExT::set_values(string name, int year, string company, string producer) {
	this->name(name);
	this->year(year);
	this->company(company);
	this->producer(producer);
}

int movieExT::getMovieAge(int current_year) {
	return current_year - year();
}