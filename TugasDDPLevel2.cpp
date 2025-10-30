//Soal level2

#include<iostream>

using namespace std;

int main(){
	//deklarsi
	long detik,menit,jam,hari,totalDetik,sisaHari,sisaJam,sisaMenit;
	
	//inputnya
	cout<<"Masukan Bilangan Dalam Satuan Detik: ";cin>>detik;
	
	//prosesnya	
	hari = detik/86400;
	sisaHari= detik%86400;
	jam = sisaHari/3600;
	sisaJam = sisaHari%3600;
	menit = sisaJam/60;
	sisaMenit = sisaJam%60;
	totalDetik = sisaMenit;
	
	//output untuk level2
	cout<<"Hasil Konversi Level 2: "<<endl;
	cout<<detik<<" detik = "<<hari<<" hari, "<<jam<<" jam, "<<menit<<" menit, "<<totalDetik<<" detik.";
	
	
	
	
	
	return 0;
}
