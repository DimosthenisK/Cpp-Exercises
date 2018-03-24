#pragma once
#include "movieExtended.h"
#include <string>
//For exercise 3

class movieExT :
	public movieExtended
{
public:
	void set_values(string name, int year, string company, string producer);
	int getMovieAge(int current_year);
};

