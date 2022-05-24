#include<iostream>;
#include<cstdlib>;
#include<ctime>;
#include<string>;

using namespace std;
int main()
{
	srand(time(nullptr));
	
	int P_lifePoints = 100;
	int CH_LifePoints = 100;
	int PICKACHU = 1;
	int CHARIZARD = 2;
	int selection = PICKACHU || CHARIZARD;
	cout << "you're about to battle, choose a character" << endl;
	cout << "1. Pikachu  2.Charizard " << endl << endl << endl;
	cin >> selection;


	switch (selection)
	{
	case 1:
		cout << "you've choosen Pickachu as pokemon" << endl;
		break;

	case 2:
		cout << "you've choosen Charizard as pokemon" << endl;
		break;

	}
	if (selection == 1)
	{
		cout << "|____________|" << endl;
		cout << "LET'S BATTLE" << endl << endl << endl;
		
		// PICKACHU////////////////////////////////////////////////////////////////////////
		do
		{
			int PICKACHU_RANDOM = rand()%50;
			int PICKACHU_TURN;
			cout << "                        " << "--PICKACHU'S TURN--" << "                        " << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[ATACAR].  2-[DEFENDER]." << endl;
			cin >> PICKACHU_TURN;
			cout << endl << endl;
	
			switch (PICKACHU_TURN)
			{
			case 1:
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Pickachu ataca" << "         " <<"-"<< PICKACHU_RANDOM << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints-PICKACHU_RANDOM) << "]" << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				CH_LifePoints = (CH_LifePoints - PICKACHU_RANDOM);
				break;
				
			case 2:
				cout << "_______________________________________________________________________________" << endl;
				cout << "Pikachu defiende" << "         " <<"+"<< PICKACHU_RANDOM << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints+PICKACHU_RANDOM) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "_______________________________________________________________________________" << endl;;
				P_lifePoints = (P_lifePoints + PICKACHU_RANDOM);
				break;
				
			}
			cout << endl << endl << endl;
			system("pause");
			system("CLS");
			//CHARIZARD//////////////////////////////////////////////////////////
			
			int CHARIZARD_RANDOM = rand() % 50+26;
			int CHARIZARD_TURN = 0;
			cout << "                        " << "--CHARIZARD'S TURN--" << "                        " << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[ATACAR].  2-[DEFENDER]." << endl;
			cin >> CHARIZARD_TURN;
			cout << endl << endl;
			switch (CHARIZARD_TURN)
			{
			case 1:
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Charizard ataca " << "         " << "-" << CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints - CHARIZARD_RANDOM) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				P_lifePoints = (P_lifePoints - CHARIZARD_RANDOM);
				break;

			case 2:
				cout << "_______________________________________________________________________________" << endl;
				cout << "Charizard defiende" << "         " << "+" << CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints + CHARIZARD_RANDOM) << "]" << endl;
				cout << "_______________________________________________________________________________" << endl;;
				CH_LifePoints = (CH_LifePoints + CHARIZARD_RANDOM);
				break;

			}
			
			cout << endl << endl << endl;
			system("pause");
			system("CLS");
			

		}while(CH_LifePoints >= 0 &&P_lifePoints>=0);
		{
			cout << "LAST PLAYER WIN" << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			
		}
		
	}
	//  CHARIZARD/////////////////////////////////////////////////
	if (selection == 2)
	{
		cout << "|____________|" << endl;
		cout << "LET'S BATTLE" << endl << endl << endl;

		
		do
		{
			int PICKACHU_RANDOM = rand() % 50;
			int PICKACHU_TURN;
			cout << "                        " << "--CHARIZARD'S TURN--" << "                        " << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[ATACAR].  2-[DEFENDER]." << endl;
			cin >> PICKACHU_TURN;
			cout << endl << endl;

			switch (PICKACHU_TURN)
			{
			case 1:
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Charizard  ataca" << "         " << "-" << PICKACHU_RANDOM << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints - PICKACHU_RANDOM) << "]" << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				CH_LifePoints = (CH_LifePoints - PICKACHU_RANDOM);
				break;

			case 2:
				cout << "_______________________________________________________________________________" << endl;
				cout << "Charizard defiende" << "         " << "+" << PICKACHU_RANDOM << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints + PICKACHU_RANDOM) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "_______________________________________________________________________________" << endl;;
				P_lifePoints = (P_lifePoints + PICKACHU_RANDOM);
				break;

			}
			cout << endl << endl << endl;
			system("pause");
			system("CLS");
			//CHARIZARD//////////////////////////////////////////////////////////

			int CHARIZARD_RANDOM = rand() % 50 + 26;
			int CHARIZARD_TURN = 0;
			cout << "                        " << "--PICKACHU'S TURN--" << "                        " << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[ATACAR].  2-[DEFENDER]." << endl;
			cin >> CHARIZARD_TURN;
			cout << endl << endl;
			switch (CHARIZARD_TURN)
			{
			case 1:
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Pickachu ataca " << "         " << "-" << CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints - CHARIZARD_RANDOM) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				P_lifePoints = (P_lifePoints - CHARIZARD_RANDOM);
				break;

			case 2:
				cout << "_______________________________________________________________________________" << endl;
				cout << "Pickachu defiende" << "         " << "+" << CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints + CHARIZARD_RANDOM) << "]" << endl;
				cout << "_______________________________________________________________________________" << endl;;
				CH_LifePoints = (CH_LifePoints + CHARIZARD_RANDOM);
				break;

			}

			cout << endl << endl << endl;
			system("pause");
			system("CLS");


		} while (CH_LifePoints >= 0 && P_lifePoints >= 0);
		{
			cout << "LAST PLAYER WIN" << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
		}

	}
	return 0;
}



/*
  switch (CHARIZARD_TURN)
			{
			case 1:
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Charizard ataca " << "         " <<"-"<< CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints -	CHARIZARD_RANDOM) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				P_lifePoints = (P_lifePoints - CHARIZARD_RANDOM);
				break;

			case 2:
				cout << "_______________________________________________________________________________" << endl;
				cout << "Charizard defiende" << "         " << "+" << CHARIZARD_RANDOM << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints+CHARIZARD_RANDOM) << "]" << endl;
				cout << "_______________________________________________________________________________" << endl;;
				CH_LifePoints=(CH_LifePoints+CHARIZARD_RANDOM);
				break;

			}

*/


/*
int CHARIZARD_RANDOM = rand() % 50;
			int CHARIZARD_TURN=0;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[ATACAR].  2-[DEFENDER]." << endl;
			cin >> PICKACHU_TURN;
			cout << endl << endl;

*/