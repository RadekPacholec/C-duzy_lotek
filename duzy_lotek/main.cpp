#include <iostream>
#include <windows.h>
#include <time.h>

using namespace std;

int liczba;

int main()
{
    cout << "za 3 sek. nastapi zwolnienie blokady"<< endl;
    Sleep(3000);
    srand (time(NULL));

    for (int i=1; i<=6; i++)
{
    liczba = rand()%49+1;
    Sleep(1000);
    cout<<liczba<<"\a"<<endl;
}
    return 0;
}

