#include <iostream>

using namespace std;

int main()
{
	int bilang,sebut,bilang2,total;
	
	cout<<"Program menyederhanakan b/c menjadi ab/c"<<endl;
	
	cout<<"\nMasukan Pembilang :";
	cin>>bilang;
	cout<<"Masukan Penyebut :";
	cin>>sebut;
	
	total=bilang/sebut;
	bilang2=bilang%sebut;
{
	if (bilang%sebut==0)
		cout<<"Bilangan ( "<<bilang<<"/"<<sebut<<" )"<<endl<<"Disederhanakan Menjadi ( "<<total<<" )"<<endl;
	else if (bilang%sebut!=0)
		cout<<"Bilangan ( "<<bilang<<"/"<<sebut<<" )"<<endl<<"Disederhanakan Menjadi ( "<<total<<" "<<bilang2<<"/"<<sebut<<" )"<<endl;
}
return 0;
}
