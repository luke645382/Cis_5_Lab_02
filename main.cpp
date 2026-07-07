#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::string;

int main()
{

	int age = 0;
	int height = 0;


	cout << "how old are you?";
	cin >> age;
	
	cout << "how tall are you?";
	cin >> height;
	
	if (age >= 5 && height >= 40)
	{
		cout << "Oh wow! You can get on the ride!";
	}
	else {
		cout << "Aw man, you cannot ride the ride :(";
	}
	
}
