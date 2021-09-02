#include<iostream>
using namespace std;
// Test to print 100 diamonds given at the start with tutorial at the end

int main()
{

	int n = 5;
	/*
	for (int i = 0; i < 100; i++) {
		for (int i = 1; i < n; i++)
		{
			for (int j = i; j <= n; j++)
				cout << "  ";
			for (int j = 1; j < i; j++)
				cout << "* ";
			for (int j = 1; j <= i; j++)
				cout << "* ";
			for (int j = i; j <= n; j++)
				cout << "  ";

			cout << "\n";
		}
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				cout << "  ";
			for (int j = i; j < n; j++)
				cout << "* ";
			for (int j = i; j <= n; j++)
				cout << "* ";
			for (int j = 1; j <= i; j++)
				cout << "  ";



			cout << "\n";
		}

	}


	*/
// Pattern problems are pretty easy to implement
	// Break every problem in row or column form..
	// A> increasing down left
	/*
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
				cout << "  ";
			for (int j = 1; j <= i; j++)
				cout << "* ";
			cout << "\n";
		}
	*/
	// B> increasing down right
	/*
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= i; j++)
				cout << "* ";
			for (int j = i; j <= n; j++)
				cout << " ";
			cout << "\n";
		}
	}
	*/
	// C> Decreasing down right

	/*
		for (int i = 1; i <= n; i++)
		{
			for (int j = i; j <= n; j++)
				cout << "* ";
			for (int j = 1; j <= i; j++)
				cout << " ";
			cout << "\n";
		}
	*/


// D> Decreasing down left

	/*
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
			cout << "  ";
		for (int j = i; j <= n; j++)
			cout << "* ";
		cout << "\n";
	}
	*/

}