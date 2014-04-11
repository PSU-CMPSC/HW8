//----------------------------------------------------------
//  Tim Kolstrom 
//  trk10@psu.edu
//  Class: CMPSC 121 section 001
//  HW #8
//  Due Date: 2014-04-18
//  This program has the user input elements for two 3 x 3 matrices
//	The program then adds the coordinating elements of the two matrices to produce a final total matrix that is then displayed
//----------------------------------------------------------


#include <iostream>
#include <cmath>


using namespace std;

// Declares the constants for the sizes of the matrices
const int ROWS = 3, COLS = 3;


// Function prototype to add and display the final total arrays
void addArrays(int [][COLS], int, int [][COLS], int);


int main()
{

	// Declares the two arrays for user input
	int a[ROWS][COLS];
	int b[ROWS][COLS];


	// Nested for loops that prompt the user to enter data for each element of both matrix A and matrix B
	for(int x = 0; x < ROWS; x++)
	{

		for(int y = 0; y < COLS; y++)
		{

			cout << "Please enter element (" << x << " , " << y << ") for Matrix A: ";
			cin >> a[x][y];
			cout << "Please enter element (" << x << " , " << y << ") for Matrix B: ";
			cin >> b[x][y];

		}

		cout << endl;
	}

	// Calls the function to add and display the arrays
	addArrays(a, ROWS, b, ROWS);


	return 0;



}


// Function to add and display arrays
void addArrays(int a[][COLS], int rows, int b[][COLS], int rows2)
{

	// Declares the final matrix and sets values equal to 0
	int c[ROWS][COLS] = {0};


	// Nested for loop that adds each coordinating element of matrices A and B and puts them in the coordinating slot for Matrix C
	for(int x = 0; x < ROWS; x++)
	{

		for(int y = 0; y < COLS; y++)
		{

			c[x][y] = a[x][y] + b[x][y];

			
		}

		cout << endl;
	}
	

	// Nested for loop that displays each element of matrix C
	for(int x = 0; x < ROWS; x++)
	{

		for(int y = 0; y < COLS; y++)
		{

			cout << c[x][y] << " ";

			
		}

		cout << endl;
	}


}