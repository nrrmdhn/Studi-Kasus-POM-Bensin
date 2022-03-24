#include <iostream>
using namespace std;

int main ()
{
  	float liter;
	int pl, px, bensin;
	float a, b, c, d;
	string Nama;
	pl = 7000;
	px = 9000;
	
  
	cout<<"Menghitung total harga dari dua jenis bensin\n";
	cout<<"\nMasukkan Nama pelanggan : ";
  	getline(cin, Nama);
  	cout<<"\nDaftar harga dan jenis bensin : "<<endl;
	cout<<"1. Pertalite."<<endl;
	cout<<"2. Pertamax."<<endl;
  	cout<<"Pilih daftar No : ";
  cin>>bensin;

  cout<<"Masukkan Liter : ";
  cin>>c;

  if (bensin == 1)
  {
    liter = pl * c;
    cout<<"Anda Memilih bensin pertalite dengan Total harga : "<<liter;
  }
  else if(bensin == 2)
  {
    liter = px * c;
    cout<<"Anda memilih bensin pertamax dengan total harga : "<<liter;
    
  }else{
    cout<<"Silahkan Pilih Daftar Yang Benar !";
  }
  
  cout<<"========================================";
  cout<<"\nNama Pelanggan : "<<Nama<<endl;
  cout<<"total liter : "<<c<<endl;
  
  cin.get();
  return 0;

	
	
  
	
}
