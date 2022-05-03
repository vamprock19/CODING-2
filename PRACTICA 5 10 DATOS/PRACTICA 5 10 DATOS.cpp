#include<iostream>;
#include<string>;
using namespace std;
int main()
{

	string mail = "vamprock19@gmail.com";
	string password = "1234";
	string verification1 = "13 de abril del 1993";
	string verification2 = "quebec";
	string verification3 = "boul de neiges";
	string verification4 = "negro";
	string verification5 = "montreal";
	string verification6 = "ingles";
	string verification7 = "metal";
	string verification8 = "sci-fi";
	int counter = 0;
	do
	{
		cout << "email" << endl;
		getline(cin, mail);
		if (mail == "vamprock19@gmail.com")
		{
			counter++;
			cout << "password" << endl;
			getline(cin, password);
			counter++;
			if (password == "1234")
			{

				counter++;
				cout << "necesitamos verificar que en realidad eres tu" << endl;
				cout << "fecha de nacimineto" << endl;
			
				getline(cin, verification1);
			if (verification1 == "13 de abril del 1993")
			{
				counter++;

				cout << "provincia francesa favorita" << endl;
				getline(cin, verification2);
				if (verification2 == "quebec")
				{
					counter++;

					cout << "nombre de la mascota" << endl;
					getline(cin, verification3);
					if (verification3 == "boul de neiges")
					{
						counter++;
						cout << "color favorito" << endl;
						getline(cin, verification4);
						if (verification4 == "negro")
						{
							counter++;
							cout << "ciudad favorita" << endl;
							getline(cin, verification5);
							if (verification5 == "montreal")
							{
								counter++;
								cout << "idioma preferido" << endl;
								getline(cin, verification6);
								if (verification6 == "ingles")
								{
									counter++;
									cout << "genero musical preferido" << endl;
									getline(cin, verification7);
									if (verification7 == "metal")
									{
										counter++;
										cout << "genero de peliculas" << endl;
										getline(cin, verification8);
										if (verification8 == "sci-fi")
										{
											counter++;
										
											cout << "BIENVENIDO!" << endl;
										}
										else
										{
											cout << "genero de peliculas incorrecto" << endl;
										}
									}
									else
									{
										cout << "genero musical incorrecto" << endl;
									}
								}
								else
								{
									cout << "idioma incorrecto" << endl;
								}
							}
							else
							{
								cout << "ciudad incorrecta" << endl;
							}
						}
						else
						{
							cout << "color incorrecto" << endl;
						}
					}
					else
					{
						cout << "nombre incorrecto" << endl;
					}
				}
				else
				{
					cout << "dato incorrecto" << endl;
				}
			}
			else
			{
				cout << "fecha incorrecta" << endl;
			}

			}
			else
			{
				cout << "incorrect password" << endl;
			
			}
		}
		else
		{
			cout << "incorrect e-mail" << endl;
		}
	} while (counter < 10);

	return 0;
}