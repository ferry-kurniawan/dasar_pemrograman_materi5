#include <iostream>
#include <math.h>

using namespace std;

void layang(int x, int y){
	int hasil;

	hasil = (x*y) / 2;
	cout<<"Hasil : "<<hasil<<endl;
}
int main()
{
	int x,y;

	cout<<"Menghitug Luas layang-layang\n";
	cout<<"\nMasukkan diagonal satu\t :  ";
	cin>>x;
	cout<<"\nMasukkan diagonal dua\t : ";
	cin>>y;

	layang (x,y);

	system("pause");
	return 0;

}



