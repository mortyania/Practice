#include <iostream>

using namespace std;

int main()
{
	int pancakes[2][10]; //creates two dimensional array
	int currentPerson = 0;

	for (int i = 0; i < 10; i++)
	{
		++currentPerson;
		pancakes[0][i] = i + 1; //create numbers 1 to 10 across top row
		cout << "enter how many pancakes person " << currentPerson << " ate" << endl;
		cin >> pancakes[1][i]; //inserts how many pancakes eaten across bottom row
	}

	int z = 0;
	for (int i = 0; i < 100; i++) //100 loops as thats 10^2, how many loops i might need to go round to sort 10 individual items
	{
		int x = pancakes[1][z]; int y = pancakes[1][z + 1]; //x is #pancakes 1, y is #pancakes 2
		int p = pancakes[0][z]; int q = pancakes[0][z + 1]; //p is the person corresponding to x, q is y
		if (x > y)
		{
			pancakes[0][z] = q; pancakes[0][z + 1] = p; //if x is bigger than y, swap these and the person
			pancakes[1][z] = y; pancakes[1][z + 1] = x; 
		}
		z++;
		if (z == 9){ z = 0; } //z always counts up in columns of the array
	}
	for (int i = 0; i < 10; i++)
	{
		cout << "person " << pancakes[0][i] << " ate " << pancakes[1][i] << " pancakes" << endl;
	}

	return 0;
}