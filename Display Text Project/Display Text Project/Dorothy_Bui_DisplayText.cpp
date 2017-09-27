/* 
Dorothy Bui - 9/21/17 - Period 2
Display Text Create New Project
display my name, period as a variable, and "Hello World!"
*/

#include <iostream>;
#include <conio.h>;

using namespace std;

void pause() {
	cout << "Finished!";
	while (!_kbhit());
	_getch();
	cout << '\n';
}

void main() {
	const char* class_2 = "Period 2";

	cout << "Dorothy Bui " << class_2 << " Hello " << "World!" << endl;
	pause();

	return;
}