#include <iostream>

using namespace std;

int main() {
	float temperartureInput = 0;

	cout << "Please input temperature in celsius: ";

	cin >> temperartureInput;
	
	cout << "\n";

	if (temperartureInput <= 0 )
	{
		cout << "ice";
	}
	else if (temperartureInput <= 100)
	{
		cout << "water";
	}
	else
	{
		cout << "steam";
	}
}
