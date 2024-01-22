#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;


int main()
{
    setlocale(LC_ALL, "Lithuanian");  //išvedimui naudosime lietuvių kalbą
    int skaiciai[25];
    int kiek = 25;


    for (int i = 0; i < kiek; i++)
    {
        cout <<"Įveskite "<< i + 1 << "-ąjį skaičių:"<<endl;
        cin >> skaiciai[i];
    }

    cout << "-------------------------------"<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<"|";
        for (int k = 0; k < 5; k++){
            cout<<setw(5) << left <<skaiciai[i * 5 + k] << "|";
        }
        cout<<endl;
    }


    cout << "-------------------------------\n";


    return 0;
}
