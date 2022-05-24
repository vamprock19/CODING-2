#include<iostream>;
#include<ctime>;
#include<cstdlib>;

using namespace std;

int main()
{
    // 3x3
    srand(time(nullptr));
    int matriz[3][3] = {{rand()%10,rand()%10,rand()%10}, 
                        { rand()%10,rand()%10,rand()%10}, 
                        { rand()%10,rand()%10,rand()%10}};
   
    /*for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "[" << i << "]" << "[" << j << "]" << "=" << matriz[i][j] << endl;
        }

    } */
    for (int i = 0; i < (sizeof(matriz) / sizeof(matriz[0])); i++)
    {
        for (int j = 0; j < (sizeof(matriz[0]) / sizeof(matriz[0][0])); j++)
        {
            cout << "| "<<matriz[i] [j]<<" |";
        }
        // salto de linea despues de imprimir un [i][j]
        cout << "\n" ;
    }
    cout << endl << endl;
    // 5x5
    int matrix[5][5] = { {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                         {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                         {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                         {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                         {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10} };

    for (int column = 0; column < (sizeof(matrix) / sizeof(matrix[0])); column++)
    {
        for (int row = 0; row < (sizeof(matrix[0]) / sizeof(matrix[0][0])); row++)
        {
            cout << "| " << matrix[column][row] << " |";
        }
        // salto de linea despues de imprimir un [i][j]
        cout << "\n";
    }
    cout << endl << endl;

    // 10x10
    int dozen[10][10] = { {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10}, 
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10},
                          {rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10,rand() % 10} };

    for (int column = 0; column < (sizeof(dozen) / sizeof(dozen[0])); column++)
    {
        for (int row = 0; row < (sizeof(dozen[0]) / sizeof(dozen[0][0])); row++)
        {
            cout << "| " << dozen[column][row] << " |";
        }
        // salto de linea despues de imprimir un [i][j]
        cout << "\n";
    }
  

    

    

    return 0;
}
/*
        int edades[3][2] = {{1,2},{9,8},{14,21}};
    int filas = (sizeof(edades) / sizeof(edades[0]));
    cout << filas;
    int columnas = (sizeof(edades[0]) / sizeof(edades[0][0]));
    cout << columnas;


    sizeof = tamano de
*/
