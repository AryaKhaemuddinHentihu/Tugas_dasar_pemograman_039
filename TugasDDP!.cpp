//Soal Level1

#include<iostream>

using namespace std;

int main(){
	//deklarasi 
	long detik,menit,jam,totalDetik,sisaJam,sisaMenit;
	
	//input
	cout<<"Masukan Bilangan Dalam Satuan Detik: ";cin>>detik;
	
	//proses
	jam = detik/3600;
	sisaJam = detik%3600;
	menit = sisaJam/60;
	sisaMenit = sisaJam%60;
	totalDetik = sisaMenit;
	
	//output 
	cout<<"Hasil Konversi: "<<endl;
	cout<<detik<<" detik = "<<jam<<" jam, "<<menit<<" menit, "<<totalDetik<<" detik.";
	
			
	
	return 0;
}
