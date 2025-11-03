//Gabungan level1 dan level2

#include<iostream>

using namespace std;

int main(){
	//deklarasi
	long detik,hari,jam,menit,sisaHari,sisaJam,sisaMenit,totalDetik;
	char ulang;
	
	
	//inputnya
	do{
	
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
			cout<<detik<<" detik = "<<hari<<" hari, "<<jam<<" jam, "<<menit<<" menit, "<<totalDetik<<" detik.";
				
		}
			
		cout<<endl;
		cout<<"Apakah ingin mengulang(y/n) : ";
		cin>>ulang;

		system("cls");
		
		
		
	}while(ulang=='y'||ulang=='Y');
		
		cout<<"+===========================+"<<endl;
		cout<<"| MAKASIH TELAH MENGGUNAKAN |"<<endl;
		cout<<"+===========================+"<<endl;
		return 0;
}
