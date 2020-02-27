#include <iostream>

using namespace std;

int main()
{
    int aw/*kolumna w której stoi wieża*/,bw/*wiersz wieży*/,ap/*kolumna punktu*/,bp/*wiersz punktu*/;
    cout<<"Kolumna wiezy:"; cin>>aw;
    cout<<"Wiersz wiezy:"; cin>>bw;
    cout<<"Kolumna punktu:"; cin>>ap;
    cout<<"Wiersz punktu:"; cin>>bp;

    if(aw<1 || aw>8 ||bw<1 || bw>8 ||ap<1 || ap>8 ||bp<1 || bp>8)
    {
        cout<<"Kolumna wiezy:"; cin>>aw;
        cout<<"Wiersz wiezy:"; cin>>bw;
        cout<<"Kolumna punktu:"; cin>>ap;
        cout<<"Wiersz punktu:"; cin>>bp;
    }
    if(aw!=ap && bw!=bp)
            {
	               cout<<"NO";
            }
     if(aw!=ap || bw!=bp)
            {
	               if(aw!=ap)
	               {
	               	if(bw>bp)
	               	{
	               		if(bw-bp==2)
	               		{
	               			cout<<"YES";
	               		}
	               		else
	               		{
	               			cout<<"NO";
	               		}
	               	}
	               		if(bw<bp)
	               	{
	               		if(bp-bw==2)
	               		{
	               			cout<<"YES";
	               		}
	               		else
	               		{
	               			cout<<"NO";
	               		}
	               	}
	               }
	               if(bw!=bp)
	               {
	               	if(aw>ap)
	               	{
	               		if(aw-ap==2)
	               		{
	               			cout<<"YES";
	               		}
	               		else
	               		{
	               			cout<<"NO";
	               		}
	               	}
	               		if(aw<ap)
	               	{
	               		if(ap-aw==2)
	               		{
	               			cout<<"YES";
	               		}
	               		else
	               		{
	               			cout<<"NO";
	               		}
	               	}
	               }
            }
    return 0;
}
