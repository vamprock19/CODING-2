#include<iostream>;
#include<cstdlib>;
#include<ctime>;
#include<string>;

using namespace std;
int main()
{
	
	
	//pikachu moves///////////////////////

	//attack moves//////////////////////
	int P_lifePoints = 100;
	int thunder_Shock = rand()%45+1;
	int iron_Tail = rand() % 20 + 1;
	int electro_Ball = rand() % 15 + 1;

	// defense moves/////////////////////////
	int Agility = rand()%10+1;
	int electroweb= rand()%6+1;


	// charizard moves/////////////////////

	// attack moves////////////////////
	int CH_LifePoints = 100;
	int fire_Blast = rand() % 45 + 1;
	int fire_Spin = rand() % 15 + 1;
	int focus_Blast = rand() % 50 + 1;

	// defense moves/////////////////////////////
	int submission = rand() % +86+1;
	
	int PICKACHU=1;
	int CHARIZARD=2;
	int selection = PICKACHU || CHARIZARD;
	cout << "you're about to battle, choose a character" << endl;
	cout << "1. Pikachu  2.Charizard " << endl<<endl<<endl;
	cin >> selection;
	
	
	
	switch(selection)
	{
	case 1:
		cout << "you've choosen Pickachu as pokemon" << endl;
		break;
		
	case 2:
		cout << "you've choosen Charizard as pokemon" << endl;
		break;

	}
	
	
	// PIKACHU///////////////////////////////////////
	if (selection ==1)
	{
		// STAGE 1 PICKACHU// BATTLE OPTIONS/////////////////////////////////////////////////////////////////////////////////////////////////////////////////
		cout << "|____________|" << endl;
		cout << "LET'S BATTLE" << endl << endl<<endl;
		int attack;
		
		cout << "PICKACHU: "<<"["<<P_lifePoints<<"]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
		cout << "1-[Thunder shock].  2-[Iron tail]." << endl;
		cin >> attack;
		cout << endl << endl;
		
		switch (attack)
		{
		case 1:
			cout << "______________________________________________________________________________________________________________"<<endl;
			cout << "Pickachu ataca con Thunder shock" << "         " << thunder_Shock << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints - thunder_Shock) << "]" << endl;
			cout << "______________________________________________________________________________________________________________"<<endl;
			CH_LifePoints = (CH_LifePoints - thunder_Shock);
			
			break;
			
			
			


		case 2:
			cout << "_______________________________________________________________________________"<<endl;
			cout << "Pikachu ataca con Iron tail" <<"         " << CH_LifePoints << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" <<(CH_LifePoints - iron_Tail) << "]" << endl;
			cout << "_______________________________________________________________________________" << endl;;
			CH_LifePoints = (CH_LifePoints - iron_Tail);
			break;
			
		}
		if (CH_LifePoints <= 0)
		{
			cout << endl;
			cout << "||[PICKACHU WIN]||" << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			return 0;
		}
		cout << endl << endl;
		
		
		//STAGE 2// CHarizard///////////////////////////////////////////////////////////////////////////////////////////////////////////////

		int attack_STG2 = 1;
		int defend_STG2 = 2;
		int stage_2 = attack_STG2 || defend_STG2;

		cout << "Turno de charizard" << endl;
		cout << "1-[ATACAR]  2-[DEFENDER]" << endl;
		cin >> stage_2;
		cout << endl << endl;
		switch (stage_2)
		{
		case 1:
			cout << "Atacar" << endl;
			break;
		case 2:
			cout << "Defender" << endl;
			break;
		}
		if (stage_2 == 1)
		{
			int attack;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[Fire spin].  2-[Focus blast]." << endl;
			cin >> attack;
			switch (attack)
			{
			case 1:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Charizard attaca con Fire spin" << "         " << fire_Spin << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints-fire_Spin)<< "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				P_lifePoints = (P_lifePoints - fire_Spin);
				break;
			case 2:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				cout << "Charizard attaca con Focus blast" << "         " << focus_Blast << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints - focus_Blast) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				P_lifePoints = (P_lifePoints - focus_Blast);
				break;
			}
		}
		if(stage_2 == 2)
		{
			int Defend;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[Submission].  2-[Fire blast]." << endl;
			cin >> Defend;
			switch (Defend)
			{
			case 1:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				cout << "Charizard defiende con Submission" << "         " << submission << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints+submission) << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				CH_LifePoints = (CH_LifePoints + submission);
				break;
			case 2:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				cout << "Charizard defiende con Fire blast" << "         " << fire_Blast << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints  << "]" << "   CHARIZARD: [" << (CH_LifePoints+fire_Blast) << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				CH_LifePoints = (CH_LifePoints + fire_Blast);
				break;
			}
		}
		// STAGE 3 ///// PICKACHU'S TURN/////////////////////////////////////////////////////////////////////////////////////////
		int attack_STG3 = 1;
		int defend_STG3 = 2;
		int stage_3 = attack_STG3 || defend_STG3;

		cout << "Turno de Pickachu" << endl;
		cout << "1-[ATACAR]  2-[DEFENDER]" << endl;
		cin >> stage_3;
		cout << endl << endl;
		switch (stage_3)
		{
		case 1:
			cout << "Atacar" << endl;
			break;
		case 2:
			cout << "Defender" << endl;
			break;
		}
		if (stage_3 == 1)
		{
			int attack;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[Electro ball].  2-[Iron tail]." << endl;
			cin >> attack;
			switch (attack)
			{
			case 1:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Pickachu ataca con Electro ball" << "         " << electro_Ball << endl;
				cout << "PICKACHU: " << "[" << P_lifePoints  << "]" << "   CHARIZARD: [" << (CH_LifePoints - electro_Ball) << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				CH_LifePoints = (CH_LifePoints = electro_Ball);
				break;
			case 2:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Pickachu ataca con Iron tail" << "         " << iron_Tail<< endl;
				cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints- iron_Tail) << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				CH_LifePoints = (CH_LifePoints - iron_Tail);
				break;
			}
			if (P_lifePoints <= 0)
			{
				cout << "[[PICKACHU WIN]]" << endl;
				return 0;
			}
		}
		if (stage_3 == 2)
		{
			int Defend;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "1-[Agility].  2-[Electro web]." << endl;
			cin >> Defend;
			switch (Defend)
			{
			case 1:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Pickachu defiende con Agility" << "         " << Agility << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints + Agility) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				P_lifePoints = (P_lifePoints + Agility);
				break;
			case 2:
				cout << endl << endl;
				cout << "______________________________________________________________________________________________________________" << endl;
				cout << "Charizard attaca con Fire blast" << "         " <<fire_Blast << endl;
				cout << "PICKACHU: " << "[" << (P_lifePoints - fire_Blast) << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
				cout << "______________________________________________________________________________________________________________"<<endl;
				P_lifePoints = (P_lifePoints - fire_Blast);
				break;
				
				
			}
			
		}
	}    
	

		

	//CHARIZARD////
	if (selection == 2)
	{
		cout << "|____________|" << endl;
		cout << "LET'S BATTLE" << endl << endl << endl;

		int C_attack;
		int C_defend;
		cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
		cout << "1- [Fire blast]. 2- [Fire spin]." << endl;
		cin >> C_attack;

		switch (C_attack)
		{
		case 1:
			cout << "______________________________________________________________________________________________________________"<<endl;
			cout << "Charizard ataca con Fire blast" << "         " << fire_Blast << endl;
			cout << "PICKACHU: [" << (P_lifePoints - fire_Blast) << "] " << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			cout << "______________________________________________________________________________________________________________";
			break;
		}
	}
	
	return 0;
}



/*
     if (CH_LifePoints <= 0)
		{
			cout << endl;
			cout << "||[PICKACHU WIN]||" << endl;
			cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << CH_LifePoints << "]" << endl;
			return 0;
		}

*/


/*

   int att_def = 0;
cout << "turno de Charizard" << endl;
cout << "1-[ATACAR]  2-[DEFENDER]" << endl;
cin >> att_def;

cout << "1-[Thunder shock].  2-[Iron tail]." << endl;

switch ()
{
	switch (att_def == 1)
	{
	case 1:
		cout << "Charizard ataca con " << endl;
		cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints - thunder_Shock) << "]" << endl;
		P_lifePoints;
		CH_LifePoints;
		break;


	case 2:
		cout << "Pikachu ataca con Iron tail" << endl;
		cout << "PICKACHU: " << "[" << P_lifePoints << "]" << "   CHARIZARD: [" << (CH_LifePoints - iron_Tail) << "]" << endl;

		break;
	}


}
*/
