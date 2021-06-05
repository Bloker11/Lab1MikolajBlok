

#include <iostream>
using namespace std;

//Task 1
void task1()
{
	cout << "Task 1" << "\n";
	int i = 5;
	if (i % 3 == 0 && i % 5 == 0)
	{
		cout << "AB";
		cout << "\n";
	}
	else if (i % 3 == 0)
	{
		cout << "A";
		cout << "\n";
	}
	else if (i % 5 == 0)
	{
		cout << "B";
		cout << "\n";
	}
	
}


//Task 2
void task2()
{
	cout << "Task 2" << "\n";
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++)
		{
			cout << "\t" << i * j;
		}
		cout << "\n";
	}
}

//Task 3
void task3()
{
	cout << "Task 3" << "\n";
	for (int i = 1; i >= 1; i++)
	{
		if (i % 6 == 0)
		{
			cout << i << " ";
			continue;
		}
		if (i > 50)
		{
			break;
		}
	}
}

//Task 4
void task4(int x, int y = 1, int z = 1)
{
	cout <<"\n"<< "Task 4" << "\n";
	cout << x * y * z;
}

//Task 5
void task5(int x, int y)
{
	cout << "\n" << "Task 5" << "\n";
	x /= y;
	cout << x;
}



int main()
{
	task1();
	task2();
	task3();
	task4(5,10);
	task5(20, 4);
}






