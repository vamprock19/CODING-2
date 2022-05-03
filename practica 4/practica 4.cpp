// 22 03 24 zap534 entradas y salida de datos 
//
#include<iostream>;
#include<string>;




using namespace std;

int main()
{
	int int_Value = 0;
	float float_Value = 0;
	char char_Value[5];
	double double_Value = 0;


	// VALUES 
	cout << "please put a int value " << endl;
	cin >> int_Value;
	printf("you have put a int value %d", int_Value); cout << endl;

	cout << "please put a float value " << endl;
	cin >> float_Value;
	printf("you have put a float value %f", float_Value); cout << endl;

	cout << "please put a char value " << endl;
	cin >> char_Value;
	printf("you have put a char value %s", char_Value); cout << endl;

	cout << "please put a double value " << endl;
	cin >> double_Value;
	printf("you have put a double value %1f", double_Value); cout << endl;







	return 0;
}