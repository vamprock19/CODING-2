#include <iostream>
using namespace std;

//struct player
//{
//    std::string nombre;
//    int vida;
//   int ataque;
//  bool escudo;
//   std::string skin[5] = { "Normal", "Halloween", "Epica", "Mexa", "Navidad" };
//   std::string invent;
//   std::string armas[5] = { "cuchillo","pistola", "rifle", "granada", "bazuka" };
//};

//void main()
//{
//   player Cris;
//    Cris.nombre = "Cristina Valentine";
//    Cris.vida = 100;
//    Cris.ataque = 50;
//    Cris.escudo = false;
//    Cris.skin[3];
//    Cris.invent = "Nivel 2";
//   Cris.armas[3];
//
//    player Mau;
//    Mau.nombre = "Mau Delay";
//}

//enum inventario { nada, arma_larga, arma_corta, granada };
//enum inventario_ammo
//{
//    ammo_nada,
//    ammo_larga,
//    ammo_corta,
//    ammo_granada
//};
//
//int main()
//{
//    inventario arma1 = arma_larga;
//    inventario arma2 = arma_corta;
//    inventario especial = granada;
//    inventario_ammo balas = ammo_larga;
//
//    bool disparo;
//    std::cout << "Quieres disparar? y=1 n=0" << std::endl;
//    std::cin >> disparo;
//
//    if (disparo)
//    {
//        std::cout << "Disparo activado " << std::endl;
//        if (arma1 == arma_larga && balas == ammo_larga)
//        {
//            std::cout << "Ejecutaste un disparo " << std::endl;
//            std::cout << "arma1: " << arma1 << std::endl;
//            std::cout << "Balas: " << balas << std::endl;
//
//        }
//        if (arma2 == arma_corta && balas == ammo_corta)
//        {
//            std::cout << "Ejecutaste con el arma corta " << std::endl;
//        }
// 
//    }
//}

struct Player
{
	string name;
	int health;
	int attack;
	int defense;
	int vest;
	int Power_up;
};
void main()
{
	srand(time(nullptr));
	Player amber;
	amber.name = "amber the turd ";
	amber.health = 100;
	amber.attack = rand() % 10+1;
	amber.defense = rand() % -10-1;
	amber.vest = rand() % 10+1;
	amber.Power_up = rand() % 70+1;
	int amber_the_turd_total =(amber.attack + amber.defense + amber.vest + amber.Power_up);
	amber.health = (amber.health - amber_the_turd_total);
	
	Player Jonny_Deep;
	Jonny_Deep.name = "Jonny Deep";
	Jonny_Deep.health = 100;
	Jonny_Deep.attack = rand() % 10+1;
	Jonny_Deep.defense = rand() % -10-1;
	Jonny_Deep.vest = rand() % 10 + 1;
	Jonny_Deep.Power_up = rand() % 70+1;
	int Jonny_total = (Jonny_Deep.attack + Jonny_Deep.defense + Jonny_Deep.vest + Jonny_Deep.Power_up);
	Jonny_Deep.health = (Jonny_Deep.health - Jonny_total);

	Player camile;
	camile.name = "Camile Vazques";
	camile.health = 100;
	camile.attack = rand() % 10+1;
	camile.defense = rand() % -10-1;
	camile.vest = rand() % 10 + 1;
	camile.Power_up = rand() % 70+1;
	int camile_total = (camile.attack + camile.defense + camile.vest + camile.Power_up); 
	camile.health = (camile.health - camile_total);

	Player judge;
	judge.name = "Judge";
	judge.health = 100;
	judge.attack = rand() % 10+1;
	judge.defense = rand() % 10-1;
	judge.vest = rand() % 10 + 1;
	judge.Power_up = rand() % 70+1;
	int judge_total = (judge.attack + judge.defense + judge.vest + judge.Power_up); 
	judge.health = (judge.health - judge_total);

	cout << "---PLAYERS---: " << endl << endl;
	cout << amber.name << endl;
	cout << Jonny_Deep.name << endl;
	cout << camile.name << endl;
	cout << judge.name << endl;
	cout << endl << endl;
	cout << "---SCORE BOARD---" << endl << endl;
	cout << amber.name<<" : " << amber_the_turd_total << endl;
	cout <<Jonny_Deep.name << " : " << Jonny_total << endl;
	cout <<camile.name << " : " << camile_total << endl;
	cout <<judge.name << " : " << judge_total << endl;
	cout << endl << endl;
	
	cout << "---RESULTS---" << endl<<endl;
	        // ATTACKS//
		if (amber.health < Jonny_Deep.health && amber.health < camile.health && amber.health < judge.health)
		{
			cout << amber.name << ": [WIN]" << endl;
			cout << Jonny_Deep.name << ": [lose]" << endl;
			cout << camile.name << ": [lose]" << endl;
			cout << judge.name << ": [lose]" << endl;
	    }
		if (Jonny_Deep.health < amber.health && Jonny_Deep.health < camile.health && Jonny_Deep.health < judge.health)
		{
			cout << Jonny_Deep.name << ": [WIN]" << endl;
			cout << amber.name << ": [lose]" << endl;
			cout << camile.name << ": [lose]" << endl;
			cout << judge.name << ": [lose]" << endl;
		}
		if (camile.health < amber.health && camile.health < Jonny_Deep.health && camile.health < judge.health)
		{
			cout << camile.name << ": [WIN]" << endl;
			cout << amber.name << ": [lose]" << endl;
			cout << Jonny_Deep.name << ": [lose]" << endl;
			cout << judge.name << ": [lose]" << endl;
		}
		if (judge.health < amber.health && judge.health < camile.health && judge.health < Jonny_Deep.health)
		{
			cout << judge.name << ": [WIN]" << endl;
			cout << amber.name << ": [lose]" << endl;
			cout << camile.name << ": [lose]" << endl;
			cout << Jonny_Deep.name << ": [lose]" << endl;
		}
		
}