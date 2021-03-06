//Game Stats 2.0

#include <iostream>
using std::cout;
using std::endl;

int main()
{
	unsigned int score = 5000;			//no negative ints
	cout << "score: "	<< score << endl;

	//alter value of variable
	score = score + 100;
	cout << "score: "	<< score << endl;

	//combined asssignment operator
	score += 100;
	cout << "score: "	<< score << endl;

	//increment
	int lives = 3;
	++lives;
	cout << "lives: "	<< lives << endl;

	lives = 3;
	lives++;
	cout << "lives: "	<< lives << endl;

	lives = 3;
	int bonus = ++lives * 10;
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	lives = 3;
	bonus = lives++ * 10;				//increments lives after the multiplication
	cout << "lives, bonus: " << lives << ", " << bonus << endl;

	//integer wrap around
	score = 4294967295;
	cout << "\nscore: " << score << endl;
	++score;
	cout << "score: " << score << endl;

    return 0;
}

