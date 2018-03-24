#include <iostream>
#include <string>
#include <movie.h>
#include <movieExtended.h>
#include <movieExT.h>

using namespace std;

int main(int argv, char** argc) {
	movie movie1;
	movieExtended movie2;
	movieExT movie3;

	//Exercise 1
	movie1.name = "Pacific Rim: Uprising";
	movie1.year = 2018;
	movie1.company = "Legendary Pictures";
	movie1.producer = "Steven S. DeKnight";
	cout << "Movie: " << movie1.name << endl;
	cout << "\tYear: " << movie1.year << endl;
	cout << "\tCompany: " << movie1.company << endl;
	cout << "\tProducer: " << movie1.producer << endl;
	
	//Exercise 2
	movie2.name("I Kill Giants");
	movie2.year(2017);
	movie2.company("Warner Bros Company");
	movie2.producer("Anders Walter");
	movie2.display();

	//Exercise 3
	movie3.set_values("Star Trek", 1979, "Paramount Pictures", "Gene Roddenberry");
	movie3.display();
	cout << "\tMovie Age: " << movie3.getMovieAge(2018) << endl;;

	getchar();

	return 0;
}