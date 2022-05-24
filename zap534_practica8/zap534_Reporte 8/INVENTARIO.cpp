#include<iostream>;
#include<string>;
#include<conio.h>;
#include<string.h>;
#include<array>;

using namespace std;
int main()
{
    string titulo[5];
    string autor[5];
    int ano[5];


    cout << "ingresa datos de libros" << endl;
    cout << "----------" << endl;
    cout << "titulo, autor, fecha" << endl;

    for (int i = 0; i < 5; i++)
    {
        cout << "[" << i << "]" << endl;

        cout << "titulo" << endl;
        getline(cin >> ws, titulo[i]);

        cout << "autor" << endl;
        getline(cin >> ws, autor[i]);

        cout << "fecha" << endl;
        cin >> ano[i];

        cout << "--------------------------" << endl;
    }
    for (int k = 0; k < 5; k++)
    {
        cout << "posicion del libro\n[" << k << "] titulo:\n" << titulo[k] << " "
            << "autor:\n" << autor[k] << "fecha:\n" << ano[k] << endl << endl;
    }

    return 0;
}