#include <iostream>
#include <math.h>

using namespace std;

int layang(int x, int y){
	int hasil;

	hasil = (x*y) / 2;
	cout<<"Hasil : "<<hasil<<endl;
	return hasil;
}
int main()
{
	int x,y,hasil,templ;

	cout<<"Menghitug Luas layang-layang\n";
	cout<<"\nMasukkan diagonal satu\t :  ";
	cin>>x;
	cout<<"\nMasukkan diagonal dua\t : ";
	cin>>y;

	hasil = layang(x,y);
	cout<<"hasil : "<<hasil<<endl;

	templ = hasil<2?10:0;
	cout<<templ<<endl;

	cout<<"hasil : "<<hasil<<endl;


	system("pause");
	return 0;

}



