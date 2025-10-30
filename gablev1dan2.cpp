//Gabungan level1 dan level2

#include<iostream>

using namespace std;

int main(){
	//deklarasi
	long detik,hari,jam,menit,sisaHari,sisaJam,sisaMenit,totalDetik;
	
	//inputnya
	cout<<"Masukan Bilangan Dalam Satuan Detik: ";cin>>detik;
	
	//kemungkinan
	if(detik <=50000){
		//proses level 1 
		jam = detik/3600;
		sisaJam = detik%3600;
		menit = sisaJam/60;
		sisaMenit = sisaJam%60;
		totalDetik = sisaMenit;
		
		//output level 2
		cout<<"Hasil Konversinya: "<<endl;
		cout<<detik<<" detik = "<<jam<<" jam, "<<menit<<" menit, "<<totalDetik<<" detik.";
		
	}else{
		//proses level 2
		hari = detik/86400;
		sisaHari = detik%86400;
		jam = sisaHari/3600;
		sisaJam = sisaHari%3600;
		menit = sisaJam/60;
		sisaMenit = sisaJam%60;
		totalDetik = sisaMenit;
		
		//output level 2
		cout<<"Hasil Konversinya: "<<endl;
		cout<<detik<<" detik = "<<jam<<" jam, "<<menit<<" menit, "<<totalDetik<<" detik.";
			
	}
	
	//outputnya
	
	return 0;
}
