#include<iostream>;
#include<string>;
using namespace std;
int main()
{
    /*bool one = true;
    int wileee();
     {
        while (one == true)
        {
            cout << "one is true" << endl;
            cout << "want to exit?\n " << "0. no\n 1. yep" << endl;
        }

    } */
        string mail = "vamprock19@gmail.com";
    string password = "1234";
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
                cout << "welcome" << endl;
                counter++;
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



    } while (counter < 3); 

        for (int aux = 0; aux <= 10; aux++)
        {
            cout << aux << endl;
        }
    return 0;
}