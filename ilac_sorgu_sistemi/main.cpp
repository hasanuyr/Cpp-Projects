#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

class Ilac{
	private:
		int ilac_id;
		int ilac_sayisi;	
		double ilac_fiyati;	
		string ilac_isim;	
		
	public:		
	Ilac(){ 
		ilac_id     = 0;
		ilac_sayisi = 0;
		ilac_fiyati = 0.0;
		ilac_isim   = "default";
    }
	
	Ilac(int id, int sayi, double fiyat, string isim){
		ilac_id     = id;
		ilac_sayisi = sayi;
		ilac_fiyati = fiyat;
		ilac_isim   = isim;
    }
	
	Ilac(const Ilac& other) { 
    	ilac_id     = other.ilac_id;
    	ilac_sayisi = other.ilac_sayisi;
    	ilac_fiyati  = other.ilac_fiyati;
    	ilac_isim   = other.ilac_isim;
    }

    Ilac& operator=(const Ilac& obj){ //assignment ctr
    	ilac_id     = obj.ilac_id;
    	ilac_sayisi = obj.ilac_sayisi;
    	ilac_fiyati  = obj.ilac_fiyati;
    	ilac_isim   = obj.ilac_isim;
    	return *this;
    }    
    
    //set functions ila�
    
    void ilacSetId(int id){ 
    	ilac_id = id; 
	}
    
    
    void ilacSetSayi(int sayi){
    	ilac_sayisi = sayi; 
	}    
	
    void ilacSetFiyat(double fiyat){ 
    	ilac_fiyati = fiyat;  
	}   
    
    void ilacSetIsim(string isim){ 
    	ilac_isim = isim;  	
	}     
    
    
    
    // get functions ila�
    
    int ilacGetId(){ 
		return ilac_id;	
	}
    
    int ilacGetSayi(){ 
		return ilac_sayisi;
	}
    
    double ilacGetFiyat(){ 
		return ilac_fiyati;	
	}
    
    string ilacGetIsim(){ 
		return ilac_isim;	
	}   
	
	void ilac_olustur(){
		string ilacTempAd; 
		int ilacTempID,ilacTempSayisi;
		double ilacTempFiyati;
		
		cout<<"L�tfen ilac�n ad�n� giriniz: \n";
		fflush(stdin);
    	getline(cin,ilacTempAd);
		ilac_isim=ilacTempAd;
		
		cout<<ilac_isim<<"'nin ID'sini giriniz: "<<endl;
    	cin>>ilacTempID;
    	ilac_id=ilacTempID;
    	
    	cout<<ilac_isim<<"'nin say�s�n� giriniz: "<<endl;
    	cin>>ilacTempSayisi;
    	ilac_sayisi=ilacTempSayisi;
    	
    	cout<<ilac_isim<<"'nin fiyatini giriniz: "<<endl;
    	cin>>ilacTempFiyati;
    	ilac_fiyati=ilacTempFiyati;
	}
	
	void ilac_goster(){
    	
    	string ilacAdTemp;
		
		cout<<"G�rmek istedi�iniz ilac�n ismini giriniz: "<<endl;
    	fflush(stdin);
    	getline(cin, ilacAdTemp);
    	
    	
    	if(ilacAdTemp==ilac_isim){
   			cout<<endl<<"Ad:"<<ilac_isim<<"  ID:"<<ilac_id<<"  Fiyat:"<<ilac_fiyati<<"  Adet:"<<ilac_sayisi<<endl;
		}
			
	}
	
	void ilac_duzenle(string tempDosyaIsmi,string tempIlacIsmi){
		fstream dosyaIlac;
		tempDosyaIsmi=tempDosyaIsmi+"Eczanesi"+"_ilac.dat";
		dosyaIlac.open(tempDosyaIsmi.c_str(),ios::out);
		string line;
		string tIsim;
		int tId,tFiyati,tSayisi;
		
		if(dosyaIlac.is_open()){
			while(getline(dosyaIlac,line)){
			
				
			}
			
		}
		else {
        	cout << "Dosyada kay�tl� isim yok" << endl; 
			dosyaIlac.close(); 
 		}
		
	}
	
	

};
	




class Eczane{
	
	private:
		
	int eczane_id;
	string eczane_isim;	
	string eczane_adres;
	
	
	public:
	Eczane(){ 
		eczane_id    = 0;
		eczane_isim  = " ";
		eczane_adres = " ";
    }	
    Eczane(int e_id, string e_isim, string adres){ 
    	eczane_id    = e_id;
    	eczane_isim  = e_isim;
    	eczane_adres = adres;

	}
	Eczane(const Eczane& other){ 	
		eczane_id    = other.eczane_id;	
		eczane_isim  = other.eczane_isim;
		eczane_adres = other.eczane_adres;	
	}
	Eczane& operator=(const Eczane& other){
		eczane_id    = other.eczane_id;	
		eczane_isim  = other.eczane_isim;
		eczane_adres = other.eczane_adres;
		return *this;		
		
	}
	//get functions
	
	int eczaneId(){ 
		return eczane_id;    
	}
	
	string eczaneIsim(){ 
	 	return eczane_isim;  
	}
	
	string eczaneAdres(){ 
		return eczane_adres;	
	}
	
	//set functions
	
	void eczaneSetId(int e_id){ 
		eczane_id   = e_id;     	
	}
	void eczaneSetIsim(string e_isim){
		eczane_isim  = e_isim;	    
	}
	void eczaneSetAdres(string adres){
		eczane_adres = adres;       
	}
	
	void eczane_olustur(){
		string eczaneAdTemp, eczaneAdresTemp;
		string eczaneDosyaAdi;
		int tempID;
		
		
		cout<<"L�tfen eczanenin ad�n� giriniz: \n";
		fflush(stdin);
    	cin>>eczaneAdTemp;
		eczane_isim=eczaneAdTemp;
		eczaneDosyaAdi=eczaneAdTemp+".dat";
		 
		cout<<eczane_isim<<"'nin ID'sini giriniz: "<<endl;
    	cin>>tempID;
    	eczane_id = tempID;
    	
    	cout<<eczane_isim<<"'nin adresini giriniz: \n"; 
    	fflush(stdin);
    	getline(cin, eczane_adres);
		 
	}
	void eczane_goster(){
    	
    	string eczaneAdTemp;
		
		cout<<"G�rmek istedi�iniz eczanenin ismini giriniz: "<<endl;
    	fflush(stdin);
    	getline(cin, eczaneAdTemp);
    	
    	
    	if(eczaneAdTemp==eczane_isim||eczaneAdTemp==eczane_isim+" eczanesi"||eczaneAdTemp==eczane_isim+" Eczanesi"){
			   cout<<endl<<"Ad: "<<eczane_isim<<" ID: "<<eczane_id<<" Adres: "<<eczane_adres<<endl;
		}	
	}
	
	void eczane_ilac_sayfasi(Ilac temp, string tempEczaneAdi){
		ofstream ilacDosya;
		string eczaneIlacListesi=tempEczaneAdi+"Eczanesi"+"_ilac.dat";
		
		ilacDosya.open(eczaneIlacListesi.c_str(),ios::app); 
	
		if(!ilacDosya.is_open()) { 
			cout << "Dosya a��lamad�..."; exit(0);	
		}
	
		ilacDosya << temp.ilacGetIsim() << endl;
    	ilacDosya << temp.ilacGetId() << endl;
   		ilacDosya << temp.ilacGetFiyat() << endl; 
    	ilacDosya << temp.ilacGetSayi() <<endl;
    	
		ilacDosya.close();
		
	}
	
};







void eczane_dosyaya_ekle(Eczane temp){
	
	fstream eczaneDosya;
	eczaneDosya.open("eczane_listesi.dat", ios::app); 
	
	if(!eczaneDosya.is_open()) { 
		cout << "Dosya a��lamad�..."; exit(0);	
	}
	
	eczaneDosya << temp.eczaneIsim() << endl;
    eczaneDosya << temp.eczaneId()  << endl;
    eczaneDosya << temp.eczaneAdres()<< endl; 
    
    eczaneDosya.close();
	
	
}

void eczane_dosyadan_ara(string key){
	
	fstream dosya1;
	dosya1.open("eczane_listesi.dat", ios::in);

	int k;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			
			if(key==line){
				cout<<endl<<"Eczane Ad�:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<"  Adres:"<<line<<endl;
			}
		}
	}

	
	else {
        cout << "Dosyada kay�tl� isim yok" << endl; 
		dosya1.close(); 
 	}
 	
 	dosya1.close(); 
		
        
       
}

void eczaneleri_goster(){
		
	fstream dosya1;
	dosya1.open("eczane_listesi.dat", ios::in);

	int k;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){

			cout<<endl<<"Eczane Ad�:"<<line;
			getline(dosya1,line);
			cout<<"  ID:"<<line;
			getline(dosya1,line);
			cout<<"  Adres:"<<line<<endl;
			
		}
	
	} 
	else{
		cout<<endl<<"!!Dosyada kay�tl� isim yok!!"<<endl;
	}
	
}


int eczaneSayisi(){
	
	fstream dosya1;
	dosya1.open("eczane_listesi.dat", ios::in);

	int eczaneSayisi;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			eczaneSayisi++;
			
		}
	
	} 
	else{
		cout<<endl<<"!!Dosyada kay�tl� isim yok!!"<<endl;
			dosya1.close();
	}
	dosya1.close();
	
	return eczaneSayisi/3;
}

int ilacSayisi(string tempEcznIsmi){
	ifstream dosya1;
	tempEcznIsmi=tempEcznIsmi+"Eczanesi"+"_ilac.dat";
	dosya1.open(tempEcznIsmi.c_str(), ios::in);

	int ilacSayisi;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			ilacSayisi++;
			
		}
	
	} 
	else{
		cout<<endl<<"!!Dosya a��lamad�!!"<<endl;
		dosya1.close();
	}
	dosya1.close();
	return ilacSayisi/4;
	
}

void ilac_ara(string ilacTemp, string dosyaIsmiTemp){
	
	fstream dosya1;
	dosyaIsmiTemp=dosyaIsmiTemp+"eczanesi"+"_ilac.dat";
	dosya1.open(dosyaIsmiTemp.c_str(),ios::in);

	int k;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			
			if(ilacTemp==line){
				cout<<endl<<"Ilac Ad�:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<" Fiyat�:"<<line;
				getline(dosya1,line);
				cout<<" Say�s�:"<<line<<endl;
			}
		}
	}

	
	else {
        cout << "Dosyada kay�tl� isim yok" << endl; 
		dosya1.close(); 
 	}
 	
 	dosya1.close(); 
	
}


void eczane_listele(){
	ifstream dosya1;
	dosya1.open("eczane_listesi.dat",ios::in);
	string line;
	int count=0;
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			cout<<endl<<"Eczane Ad�:"<<line;
			getline(dosya1,line);
			cout<<" ID:"<<line;
			getline(dosya1,line);
			cout<<"  Adres:"<<line<<endl;
			
			
		}
	}
	else{
		cout<<endl<<"!!Dosyada kay�tl� isim yok!!"<<endl;
	}
	
	
}

void ilac_listele(string dosyaIsmiTemp){
	
	fstream dosya1;
	dosyaIsmiTemp=dosyaIsmiTemp+"eczanesi"+"_ilac.dat";
	dosya1.open(dosyaIsmiTemp.c_str(), ios::in);

	int k;
	string line;
	
	if(dosya1.is_open()){
	
		while(getline(dosya1,line)){
			
				cout<<endl<<"Ilac Ad�:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<" Fiyat�:"<<line;
				getline(dosya1,line);
				cout<<" Say�s�:"<<line<<endl;
				
			
		}
	}

	else {
        cout << "Dosyada kay�tl� isim yok" << endl; 
		dosya1.close(); 
 	}
 	
 	dosya1.close(); 
	
}


void baslik(){
	system ("CLS");	
	cout<<"----Eczane ve Ilac Sorgulama Sistemi----"<<endl<<endl;
	
}



int main(){
	setlocale(LC_ALL, "Turkish");
	baslik();
	
	yetkiMenu:
	
	int yetki=0,secim=0,tempSifre,sifre,menuSecim1, menuSecim2;
	int	tekrarSecim,sifreSecim,tempAdet;
	string tempEczaneIsmi,tempIlacAdi;

	cout<<"1-Yetkiniz varsa 1'e bas�n�z"<<endl;
	cout <<"2-M��teriyseniz 2'ye bas�n�z"<<endl;
	cin  >> yetki;
	
	
	
	if(yetki==1){ 
		baslik();
		sifreOlusturma:
		cout << "Eczane sistemime giri�lerde i�in kullan�lacak RAKAMLARDAN olu�an �ifreyi giriniz:";
		cin >> sifre;
		baslik();
		goto eczaneGirisi;
	
	}	
	if(yetki==2){
		baslik();
		goto musteriGirisi;
	}
	
	else if(yetki<0||yetki>2){
			baslik();
			cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl<<endl;
			goto yetkiMenu;
	}
	
    
	
	anaMenu:
	
	baslik();
	cout << "1-Eczane Girisi \n2-Musteri Girisi\n3-Sistemden ��k�� \n";
	cout<<"Yapmak istedi�iniz i�lem: ";
	cin >> secim;	
	cout<<secim;
	
	if(secim<0||secim>2){
			baslik();
			cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
			baslik();
			goto anaMenu;
	}
					
	else if(secim==1){
		
			baslik();
		eczaneGirisi:
		
			cout << "Eczane Girisi" << endl;
			cout << "L�tfen Ana Men�de belirledi�iniz eczane �ifresini giriniz: ";
			cin>>tempSifre;
			
			if(tempSifre!=sifre){
				
				cout<<"!!Hatal� �ifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
				hataliTus0:
				cout<<"1-�ifre olu�tur\n2-Sifreyi tekrar dene\n3-M��teri giri�ine ge�"<<endl;
				cin>>sifreSecim;
				if(sifreSecim==1){
					baslik();
					goto sifreOlusturma;
				}
				else if(sifreSecim==2){
					baslik();
					goto eczaneGirisi;
				}
				else if(sifreSecim==3){
					baslik();
					goto musteriGirisi;
					
				}
				else{
					baslik();
					cout<<"!!Hatal� tu�lama yapt�n�z!!"<<endl<<endl;
					goto hataliTus0;
				}
				
			}
			
			else if(tempSifre==sifre){
					baslik();
				eczaneMenu:
					cout << "1-Eczane Listesi Olu�tur \n2-Eczane Ekle \n3-�la� Ekle \n4-�la� D�zenle \n5-�st men�ye d�n\n6-Program� Sonland�r \n ";
					cout<<"Yapmak istedi�iniz i�lem: ";
					cin  >> menuSecim1;
					if(menuSecim1<0||menuSecim1>6){
						baslik();
						cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
						goto eczaneMenu;
					}
					
					switch(menuSecim1){
						case 1:{
							
						
							baslik();
							eczaneListeYap:
							cout <<"1.1 Eczane Listesi Olu�tur"<<endl<<endl; 
							int i=0;
							Eczane eczn1;
							Ilac ilac1;
							
							cout<<"Mevcut kay�tl� Eczane sayisi: "<<eczaneSayisi()<<endl<<endl;
							if(eczaneSayisi()<4&&eczaneSayisi()>0){
								
								eczn1.eczane_olustur();
								eczane_dosyaya_ekle(eczn1);
							
								cout<<"\nKay�t etmek istedi�iniz ila� say�s�: ";
								cin>>tempAdet;
								do{
								
								ilac1.ilac_olustur();
								eczn1.eczane_ilac_sayfasi(ilac1,eczn1.eczaneIsim());
								cout<<"\n\n";
								i++;
								
								}while(tempAdet!=i);
							}
							else{
								cout<<"!!Eczane s�n�r� a��lm��. Daha fazla Eczane bilgisi ekleyemezsiniz!!\n\n";
								goto eczaneMenu;
							}
							hataliSecim1_1:
							cout<<endl<<"1-Bir eczane daha listele ekle\n2-�st men�ye git\n3-Program� sonland�r\n";
							cout<<"Yapmak istedi�iniz i�lem: ";
							cin>>tekrarSecim;
								if(tekrarSecim==1){
									baslik();
									if(eczaneSayisi()>=4){
										cout<<"Eczane ekleme limitine ula�t�n�z, �st men�ye aktar�l�yorsunuz\n";
										goto eczaneMenu;
									}
									goto eczaneListeYap;
								}
								else if(tekrarSecim==2){
									baslik();
									goto eczaneMenu;
								}
								else if(tekrarSecim==3){
									system ("CLS");	
									return 0;
								}
								else{
									cout<<"!!Hatal� �ifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
									goto hataliSecim1_1;
								}
							
							
							
							break;
						}		
						case 2:
							{
							eczaneEkle:
							baslik();
							cout <<"1.2 Eczane Ekle"<<endl<<endl;
							cout<<"Mevcut Eczane sayisi: "<<eczaneSayisi()<<endl;
									if(eczaneSayisi()>=4){
										cout<<"\n!!Eczane ekleme limitine ula�t�n�z!!, �st men�ye aktar�l�yorsunuz\n\n";
										goto eczaneMenu;
									}
							
							Eczane e1;
							e1.eczane_olustur();
							eczane_dosyaya_ekle(e1);
							cout<<endl<<"Eczane ba�ar�yla eklendi"<<endl;
							
							cout<<"Eklendikten sonra Eczane sayisi: "<<eczaneSayisi()<<endl;
							
							hataliSecim1_2:
							cout<<endl<<"1-Bir eczane daha ekle\n2-�st men�ye git\n3-Program� sonland�r\n";
							cout<<"Yapmak istedi�iniz i�lem: ";
							cin>>tekrarSecim;
								if(tekrarSecim==1){
									baslik();
									if(eczaneSayisi()>=4){
										cout<<"Eczane ekleme limitine ula�t�n�z, �st men�ye aktar�l�yorsunuz\n";
										goto eczaneMenu;
									}
									goto eczaneEkle;
								}
								else if(tekrarSecim==2){
									baslik();
									goto eczaneMenu;
								}
								else if(tekrarSecim==3){
									system ("CLS");	
									return 0;
								}
								else{
									cout<<"!!Hatal� �ifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
									goto hataliSecim1_2;
								}
								
							break;	
							}
							
						case 3:{
	
							baslik();
							
							ilacEkle:
							cout <<"1.3 Ilac Ekle"<<endl<<endl;
							
							Eczane e2;
							Ilac   i2;
							
							cout<<"Ilac eklemek istedi�iniz eczanenin ismini yaz�n�z(�r Ada)"<<endl;
							cin>>tempEczaneIsmi;
							cout<<"Eczanedeki mevcut ilac sayisi: "<<ilacSayisi(tempEczaneIsmi)<<endl;
								if(ilacSayisi(tempEczaneIsmi)>10){
										cout<<"!!Ilac ekleme limitine ula�t�n�z, �st men�ye aktar�l�yorsunuz!!\n\n";
										goto eczaneMenu;
								}
							i2.ilac_olustur();
							e2.eczane_ilac_sayfasi(i2,tempEczaneIsmi);
							cout<<endl<<"Eczane ba�ar�yla eklendi"<<endl;
							
							hataliSecim1_3:
							cout<<endl<<"1-Bir ilac daha ekle\n2-�st men�ye git\n3-Program� sonland�r\n";
							cout<<"Yapmak istedi�iniz i�lem: ";
							cin>>tekrarSecim;
							if(tekrarSecim==1){
								baslik();
									if(ilacSayisi(tempEczaneIsmi)>10){
										cout<<"!!Ilac ekleme limitine ula�t�n�z, �st men�ye aktar�l�yorsunuz!!\n";
										goto eczaneMenu;
									}
									goto ilacEkle;
								}
							else if(tekrarSecim==2){
								baslik();
								goto eczaneMenu;
							}
							else if(tekrarSecim==3){
								system ("CLS");	
								return 0;
							}
							else{
								cout<<"!!Hatal� �ifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
								goto hataliSecim1_3;
								}
							break;
							}
						case 4 :{
							baslik();
							
							ilacDuzenle:
							cout<<"1.4 Ilac D�zenle"<<endl<<endl;
							
							Eczane e3;
							Ilac   i3;
							cout<<"Ilac d�zenlemek istedi�iniz eczanenin ismini yaz�n�z(�rnek Ada)"<<endl;
							cin>>tempEczaneIsmi;
							cout<<"De�i�tirmek istedi�iniz ilac�n ismini giriniz(�rnek Parol)"<<endl;
							cin>>tempIlacAdi;
							
						//	i3.ilac_duzenle(tempEczaneIsmi,tempIlacAdi);
							ilac_ara(tempIlacAdi,tempEczaneIsmi);
							break;	
							}
							
						case 5:
							baslik();
							goto anaMenu;
							break;	
							
						case 6:
							baslik();
							return 0;
					}
					
		
				
			}
			
	}
	
	
	else if(secim==2){
			baslik();
		musteriGirisi:
			int tempSayi;
			
			cout << "M��teri Girisi" << endl<<endl;
			cout<<"1-Ilac Ara\n2-Eczane Listele\n3-Herhangi bir Eczaneyi G�ster\n4-Herhangi bir Eczaneye ait Ilac Listesi\n5-�st Men�\n6-Program� sonlandir\nYapmak istedi�iniz i�lem: ";
			cin>>menuSecim2;
			if(menuSecim2<0||menuSecim2>6){
						baslik();
						cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
						goto musteriGirisi;
			}
			
			switch(menuSecim2){
				
				case 1: 
					baslik();
					cout<<"2.1 Ilac Ara"<<endl;	
					cout<<"Ilac�n bulundu�u Eczanenin ismini yaz�n�z(�rnek Ada)"<<endl;
					cin>>tempEczaneIsmi;
					cout<<"Ilac�n ismini giriniz(�rnek Parol)"<<endl;
					cin>>tempIlacAdi;
					
					ilac_ara(tempIlacAdi,tempEczaneIsmi);
					cout<<endl<<"Ust men�ye gitmek i�in herhangi bir tu�a bas�n�z:";
					cin>>tempSayi;
					
					if(tempSayi){
						baslik();
						goto musteriGirisi;	
					}
					
					break;
				case 2:
					baslik();
					eczaneListele:
					cout<<"2.2 Eczane Listele"<<endl;
					eczane_listele();
					hataliTuss2_2:
					cout<<endl<<"1-Tekrar eczane listele\n2-�st men�ye git\n";
					cout<<" Yapmak istedi�iniz i�lem:";
					cin>>tempSayi;
					if(tempSayi==1){
						baslik();
						goto eczaneListele;	
					}
					else if(tempSayi==2){
						baslik();
						goto musteriGirisi;	
					}
					else{
						baslik();
						cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
						goto hataliTus2_3;
					}
					break;
						
					
					
				case 3:
					baslik();
					eczaneAra:
					cout<<"2.3 Herhangi bir Eczaneyi G�ster"<<endl<<endl;
					cout<<"Bilgilerini g�rmek istedi�iniz eczanenin ismini yaz�n�z(�rnek: Ada)"<<endl;
					cin>>tempEczaneIsmi;
					eczane_dosyadan_ara(tempEczaneIsmi);
					hataliTus2_3:
					cout<<endl<<"1-Tekrar eczane sorgula\n2-�st men�ye git\n";
					cout<<" Yapmak istedi�iniz i�lem:";
					cin>>tempSayi;
					
					if(tempSayi==1){
						baslik();
						goto eczaneAra;	
					}
					else if(tempSayi==2){
						baslik();
						goto musteriGirisi;	
					}
					else{
						baslik();
						cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
						goto hataliTus2_3;
					}
					break;
				
				case 4:
					baslik();
					ilacListele:
					cout<<"2.4 Herhangi bir Eczaneye ait Ilac Listesi"<<endl<<endl;
					cout<<"Ila� listesini g�rmek istedi�iniz eczanenin ismini yaz�n�z(�rnek: Ada)"<<endl;
					cin>>tempEczaneIsmi;
					ilac_listele(tempEczaneIsmi);
					hataliTus2_4:
					cout<<endl<<"1-Tekrar ila� listesi arat\n2-�st men�ye d�n";
					cin>>tempSayi;
					
					if(tempSayi==1){
						baslik();
						goto ilacListele;	
					}
					else if(tempSayi==2){
						baslik();
						goto musteriGirisi;	
					}
					else{
						baslik();
						cout<<"!!Hatal� tu�lama yapt�n�z tekrar deneyiniz!!"<<endl;
						goto hataliTus2_4;
						
					}
				case 5:
					baslik();
					goto yetkiMenu;
					break;	
							
				case 6:
					baslik();
					return 0;
					
				
				
				
			}
			
			
	}
	
	
	return 0;
}
