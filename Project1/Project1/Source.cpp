#include<iostream>
#include<conio.h>
using namespace std;


int main()
{
	cout << "____The Raven____" << endl;

	cout << "Eres una persona de la clase media que se dedica a trabajar todo el dia\n" << endl;
	cout << "por la cantidad de paga mas minima.\n" << endl << endl;
	cout << "En la calle encuentras una 9mm, de capacidad de 9 bullets en el magazine" << endl;
	// RECOGER----------
	int recoger;
	cout << "[1] recoger arma\n" << "[2] call 911" << endl;
	cin >> recoger;
	system("pause"); cout << endl << endl;
	system("ClS");
	//--------------------
	if (recoger == 1)
	{
		cout << "has recojido la 9mm" << endl;

		system("pause"); cout << endl << endl;
		system("ClS");

		cout << "piensas que podrias hacer con tal arma\n" << "se creativo" << endl;
		// CREATIVO -----------------------
		int creativo;
		cout << "[1] Asaltar un banco\n" << "[2] Matar a los que te rodean" << endl;
		cin >> creativo;

		system("pause"); cout << endl << endl;
		system("ClS");
		//------------------------------------
		if (creativo == 1)
		{
			cout << "Has escojido asaltar un banco" << endl;

			system("pause"); cout << endl << endl;
			system("ClS");

			cout << "Asaltas un HSBC. Te estan poniendo el dinero en bolsas." << endl;
			cout << "Una viejita te empieza a insultar, Te vas a dejar?" << endl;
			int viejita;
			cout << "[1] disparas a la viejita y la matas\n" << "[2] amarras a la viejita" << endl;
			cin >> viejita;
			if (viejita == 1)
			{
				cout << "te pasas mataste a una viejita" << endl;

				system("pause"); cout << endl << endl;
				system("ClS");

				cout << "como disparaste el balazo se escucho, llega la policia y te arresta" << endl;
				cout << "FIN" << endl;
				return 0;


			}
			if (viejita == 2)
			{
				cout<<"la has amarrado"<<endl;

				system("pause"); cout << endl << endl;
				system("ClS");

				cout << "juntas el dinero y te vas con 2 millones de dolares en tus manos" << endl;
				cout << "eres millonario ahora y vivives una vida de lujos" << endl;
				cout << "pero pobre viejita" << endl;
				cout << "FIN" << endl;
				return 0;

			}


		}
		if (creativo == 2)
		{
			cout << " has decidido matar a los que te rodean" << endl;

			system("pause"); cout << endl << endl;
			system("ClS");

			cout << "entras a una escuela cou tu arma, comienzas a disparar a todo el mundo" << endl;
			cout << "a los que nos los amarras y los y piensas torturarlos" << endl;
			cout << "llega una tercera persona, te ve, que decides hacer" << endl;

			system("pause"); cout << endl << endl;
			system("ClS");


			int hacer;
			cout << "[1] dejarla ir\n" << "[2] matarla" << endl;
			cin>> hacer;
			if (hacer == 1)
			{
				cout << "la dejaste ir y llamo al 911" << endl;
				cout << "la policia llega, te dispara y mueres" << endl;
				cout << "FIN" << endl;
				return 0;
			}
			if (hacer == 2)
			{
				cout << "la mataste, no hay riesgo que te reporte" << endl;

				system("pause"); cout << endl << endl;
				system("ClS");

				cout << "al final todos mueren y te vas con una gran sonrisa" << endl;
				cout << "FIN" << endl;
				return 0;

			}


		}

	}
	if (recoger == 2)
	{
		cout << "Eres muy cobarde" << endl;

		system("pause"); cout << endl << endl;
		system("ClS");

		cout << "llamas a la policia para que la recoja" << endl;
		cout << "la policia llega y te lo agradece" << endl;



		system("pause"); cout << endl << endl;
		system("ClS");

		cout << "al final te quedaste como empezaste, sin nada y pobre" << endl;
		cout << "FIN" << endl;
		return 0;




	}



}







