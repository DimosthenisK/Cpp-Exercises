#pragma once
#include <string>

using namespace std;
//For exercise 2
class movieExtended {
public:
	movieExtended();
	string name(void);
	void name(string);
	int year(void);
	void year(int);
	string company(void);
	void company(string);
	string producer(void);
	void producer(string);
	void display(void);
private:
	string v_name;
	int v_year;
	string v_company;
	string v_producer;
};

