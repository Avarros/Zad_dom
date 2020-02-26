#include <iostream>

using namespace std;

int main()
{
    int aw/*kolumna w której stoi wieża*/,bw/*wiersz wieży*/,ap/*kolumna punktu*/,bp/*wiersz punktu*/;
    cout<<"aw:"; cin>>aw;
    cout<<"bw:"; cin>>bw;
    cout<<"ap:"; cin>>ap;
    cout<<"bp:"; cin>>bp;

    if(aw<1 || aw>8 ||bw<1 || bw>8 ||ap<1 || ap>8 ||bp<1 || bp>8)
    {
        cout<<"aw:"; cin>>aw;
        cout<<"bw:"; cin>>bw;
        cout<<"ap:"; cin>>ap;
        cout<<"bp:"; cin>>bp;
    }

    return 0;
}
