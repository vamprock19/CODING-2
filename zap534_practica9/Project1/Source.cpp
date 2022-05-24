#include<iostream>;
#include<string>;
using namespace std;
int main()
{
	srand(time(nullptr));
	string matriz[5][5];
	int column = (sizeof(matriz) / sizeof(matriz[0]));
	int rows = (sizeof(matriz) / sizeof(matriz[0][0]));
	
	// ///////////////////////////////////////
	int matrix[3][2] = { {rand() % 10},{rand() % 10} ,{rand() % 10} ,
						 {rand() % 10} ,{rand() % 10}, {rand() % 10} };


	// 3*2
	for (int i = 0; i < (sizeof(matrix) / sizeof(matrix[0])); i++)
	{

		for (int u = 0; u < (sizeof(matrix[0]) / sizeof(matrix[0][0])); u++)
		{
			cout << "Put a number[" << i << "]" << "[" << u << "]" << endl;
			cin >> matrix[i][u];
		}

	}

	for (int i = 0; i < (sizeof(matrix) / sizeof(matrix[0])); i++)
	{

		for (int u = 0; u < (sizeof(matrix[0]) / sizeof(matrix[0][0])); u++)
		{
			cout << "| " << matrix[i][u] << " |";
		}
		cout << "\n";
	}



	
  // dinamica
	cout << "specify the following sizes" << endl;
	cout << "colum size" << endl;
	cin >> column;
	cout << "row size" << endl;
	cin >> rows;

	for (int i = 0; i < rows; i++)
	{
		for (int u = 0; u < column; u++)
		{
			cout << matriz[i][u];
		}
	}



	for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
	{

		for (int u = 0; u < (sizeof(matriz[0]) / sizeof(matriz[0][0])); u++)
		{

			cout << "Put A LETTER[" << i << "]" << "[" << u << "]" << endl;
			getline(cin >> ws, matriz[i][u]);
			cout << endl << endl;

		}
	}

	for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
	{

		for (int u = 0; u < (sizeof(matriz[0]) / sizeof(matriz[0][0])); u++)
		{
			cout << "| " << matriz[i][u] << " |";
		}
		cout << "\n";
	}

	return 0;
}