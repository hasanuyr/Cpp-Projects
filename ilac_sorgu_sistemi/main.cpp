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
    
    //set functions ilaç
    
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
    
    
    
    // get functions ilaç
    
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
		
		cout<<"Lütfen ilacýn adýný giriniz: \n";
		fflush(stdin);
    	getline(cin,ilacTempAd);
		ilac_isim=ilacTempAd;
		
		cout<<ilac_isim<<"'nin ID'sini giriniz: "<<endl;
    	cin>>ilacTempID;
    	ilac_id=ilacTempID;
    	
    	cout<<ilac_isim<<"'nin sayýsýný giriniz: "<<endl;
    	cin>>ilacTempSayisi;
    	ilac_sayisi=ilacTempSayisi;
    	
    	cout<<ilac_isim<<"'nin fiyatini giriniz: "<<endl;
    	cin>>ilacTempFiyati;
    	ilac_fiyati=ilacTempFiyati;
	}
	
	void ilac_goster(){
    	
    	string ilacAdTemp;
		
		cout<<"Görmek istediðiniz ilacýn ismini giriniz: "<<endl;
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
        	cout << "Dosyada kayýtlý isim yok" << endl; 
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
		
		
		cout<<"Lütfen eczanenin adýný giriniz: \n";
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
		
		cout<<"Görmek istediðiniz eczanenin ismini giriniz: "<<endl;
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
			cout << "Dosya açýlamadý..."; exit(0);	
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
		cout << "Dosya açýlamadý..."; exit(0);	
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
				cout<<endl<<"Eczane Adý:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<"  Adres:"<<line<<endl;
			}
		}
	}

	
	else {
        cout << "Dosyada kayýtlý isim yok" << endl; 
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

			cout<<endl<<"Eczane Adý:"<<line;
			getline(dosya1,line);
			cout<<"  ID:"<<line;
			getline(dosya1,line);
			cout<<"  Adres:"<<line<<endl;
			
		}
	
	} 
	else{
		cout<<endl<<"!!Dosyada kayýtlý isim yok!!"<<endl;
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
		cout<<endl<<"!!Dosyada kayýtlý isim yok!!"<<endl;
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
		cout<<endl<<"!!Dosya açýlamadý!!"<<endl;
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
				cout<<endl<<"Ilac Adý:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<" Fiyatý:"<<line;
				getline(dosya1,line);
				cout<<" Sayýsý:"<<line<<endl;
			}
		}
	}

	
	else {
        cout << "Dosyada kayýtlý isim yok" << endl; 
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
			cout<<endl<<"Eczane Adý:"<<line;
			getline(dosya1,line);
			cout<<" ID:"<<line;
			getline(dosya1,line);
			cout<<"  Adres:"<<line<<endl;
			
			
		}
	}
	else{
		cout<<endl<<"!!Dosyada kayýtlý isim yok!!"<<endl;
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
			
				cout<<endl<<"Ilac Adý:"<<line;
				getline(dosya1,line);
				cout<<"  ID:"<<line;
				getline(dosya1,line);
				cout<<" Fiyatý:"<<line;
				getline(dosya1,line);
				cout<<" Sayýsý:"<<line<<endl;
				
			
		}
	}

	else {
        cout << "Dosyada kayýtlý isim yok" << endl; 
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

	cout<<"1-Yetkiniz varsa 1'e basýnýz"<<endl;
	cout <<"2-Müþteriyseniz 2'ye basýnýz"<<endl;
	cin  >> yetki;
	
	
	
	if(yetki==1){ 
		baslik();
		sifreOlusturma:
		cout << "Eczane sistemime giriþlerde için kullanýlacak RAKAMLARDAN oluþan þifreyi giriniz:";
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
			cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl<<endl;
			goto yetkiMenu;
	}
	
    
	
	anaMenu:
	
	baslik();
	cout << "1-Eczane Girisi \n2-Musteri Girisi\n3-Sistemden Çýkýþ \n";
	cout<<"Yapmak istediðiniz iþlem: ";
	cin >> secim;	
	cout<<secim;
	
	if(secim<0||secim>2){
			baslik();
			cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
			baslik();
			goto anaMenu;
	}
					
	else if(secim==1){
		
			baslik();
		eczaneGirisi:
		
			cout << "Eczane Girisi" << endl;
			cout << "Lütfen Ana Menüde belirlediðiniz eczane þifresini giriniz: ";
			cin>>tempSifre;
			
			if(tempSifre!=sifre){
				
				cout<<"!!Hatalý þifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
				hataliTus0:
				cout<<"1-Þifre oluþtur\n2-Sifreyi tekrar dene\n3-Müþteri giriþine geç"<<endl;
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
					cout<<"!!Hatalý tuþlama yaptýnýz!!"<<endl<<endl;
					goto hataliTus0;
				}
				
			}
			
			else if(tempSifre==sifre){
					baslik();
				eczaneMenu:
					cout << "1-Eczane Listesi Oluþtur \n2-Eczane Ekle \n3-Ýlaç Ekle \n4-Ýlaç Düzenle \n5-Üst menüye dön\n6-Programý Sonlandýr \n ";
					cout<<"Yapmak istediðiniz iþlem: ";
					cin  >> menuSecim1;
					if(menuSecim1<0||menuSecim1>6){
						baslik();
						cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
						goto eczaneMenu;
					}
					
					switch(menuSecim1){
						case 1:{
							
						
							baslik();
							eczaneListeYap:
							cout <<"1.1 Eczane Listesi Oluþtur"<<endl<<endl; 
							int i=0;
							Eczane eczn1;
							Ilac ilac1;
							
							cout<<"Mevcut kayýtlý Eczane sayisi: "<<eczaneSayisi()<<endl<<endl;
							if(eczaneSayisi()<4&&eczaneSayisi()>0){
								
								eczn1.eczane_olustur();
								eczane_dosyaya_ekle(eczn1);
							
								cout<<"\nKayýt etmek istediðiniz ilaç sayýsý: ";
								cin>>tempAdet;
								do{
								
								ilac1.ilac_olustur();
								eczn1.eczane_ilac_sayfasi(ilac1,eczn1.eczaneIsim());
								cout<<"\n\n";
								i++;
								
								}while(tempAdet!=i);
							}
							else{
								cout<<"!!Eczane sýnýrý aþýlmýþ. Daha fazla Eczane bilgisi ekleyemezsiniz!!\n\n";
								goto eczaneMenu;
							}
							hataliSecim1_1:
							cout<<endl<<"1-Bir eczane daha listele ekle\n2-Üst menüye git\n3-Programý sonlandýr\n";
							cout<<"Yapmak istediðiniz iþlem: ";
							cin>>tekrarSecim;
								if(tekrarSecim==1){
									baslik();
									if(eczaneSayisi()>=4){
										cout<<"Eczane ekleme limitine ulaþtýnýz, üst menüye aktarýlýyorsunuz\n";
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
									cout<<"!!Hatalý þifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
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
										cout<<"\n!!Eczane ekleme limitine ulaþtýnýz!!, üst menüye aktarýlýyorsunuz\n\n";
										goto eczaneMenu;
									}
							
							Eczane e1;
							e1.eczane_olustur();
							eczane_dosyaya_ekle(e1);
							cout<<endl<<"Eczane baþarýyla eklendi"<<endl;
							
							cout<<"Eklendikten sonra Eczane sayisi: "<<eczaneSayisi()<<endl;
							
							hataliSecim1_2:
							cout<<endl<<"1-Bir eczane daha ekle\n2-Üst menüye git\n3-Programý sonlandýr\n";
							cout<<"Yapmak istediðiniz iþlem: ";
							cin>>tekrarSecim;
								if(tekrarSecim==1){
									baslik();
									if(eczaneSayisi()>=4){
										cout<<"Eczane ekleme limitine ulaþtýnýz, üst menüye aktarýlýyorsunuz\n";
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
									cout<<"!!Hatalý þifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
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
							
							cout<<"Ilac eklemek istediðiniz eczanenin ismini yazýnýz(ör Ada)"<<endl;
							cin>>tempEczaneIsmi;
							cout<<"Eczanedeki mevcut ilac sayisi: "<<ilacSayisi(tempEczaneIsmi)<<endl;
								if(ilacSayisi(tempEczaneIsmi)>10){
										cout<<"!!Ilac ekleme limitine ulaþtýnýz, üst menüye aktarýlýyorsunuz!!\n\n";
										goto eczaneMenu;
								}
							i2.ilac_olustur();
							e2.eczane_ilac_sayfasi(i2,tempEczaneIsmi);
							cout<<endl<<"Eczane baþarýyla eklendi"<<endl;
							
							hataliSecim1_3:
							cout<<endl<<"1-Bir ilac daha ekle\n2-Üst menüye git\n3-Programý sonlandýr\n";
							cout<<"Yapmak istediðiniz iþlem: ";
							cin>>tekrarSecim;
							if(tekrarSecim==1){
								baslik();
									if(ilacSayisi(tempEczaneIsmi)>10){
										cout<<"!!Ilac ekleme limitine ulaþtýnýz, üst menüye aktarýlýyorsunuz!!\n";
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
								cout<<"!!Hatalý þifre girdiniz tekrar deneyiniz!!"<<endl<<endl;
								goto hataliSecim1_3;
								}
							break;
							}
						case 4 :{
							baslik();
							
							ilacDuzenle:
							cout<<"1.4 Ilac Düzenle"<<endl<<endl;
							
							Eczane e3;
							Ilac   i3;
							cout<<"Ilac düzenlemek istediðiniz eczanenin ismini yazýnýz(Örnek Ada)"<<endl;
							cin>>tempEczaneIsmi;
							cout<<"Deðiþtirmek istediðiniz ilacýn ismini giriniz(Örnek Parol)"<<endl;
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
			
			cout << "Müþteri Girisi" << endl<<endl;
			cout<<"1-Ilac Ara\n2-Eczane Listele\n3-Herhangi bir Eczaneyi Göster\n4-Herhangi bir Eczaneye ait Ilac Listesi\n5-Üst Menü\n6-Programý sonlandir\nYapmak istediðiniz iþlem: ";
			cin>>menuSecim2;
			if(menuSecim2<0||menuSecim2>6){
						baslik();
						cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
						goto musteriGirisi;
			}
			
			switch(menuSecim2){
				
				case 1: 
					baslik();
					cout<<"2.1 Ilac Ara"<<endl;	
					cout<<"Ilacýn bulunduðu Eczanenin ismini yazýnýz(Örnek Ada)"<<endl;
					cin>>tempEczaneIsmi;
					cout<<"Ilacýn ismini giriniz(Örnek Parol)"<<endl;
					cin>>tempIlacAdi;
					
					ilac_ara(tempIlacAdi,tempEczaneIsmi);
					cout<<endl<<"Ust menüye gitmek için herhangi bir tuþa basýnýz:";
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
					cout<<endl<<"1-Tekrar eczane listele\n2-Üst menüye git\n";
					cout<<" Yapmak istediðiniz iþlem:";
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
						cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
						goto hataliTus2_3;
					}
					break;
						
					
					
				case 3:
					baslik();
					eczaneAra:
					cout<<"2.3 Herhangi bir Eczaneyi Göster"<<endl<<endl;
					cout<<"Bilgilerini görmek istediðiniz eczanenin ismini yazýnýz(Örnek: Ada)"<<endl;
					cin>>tempEczaneIsmi;
					eczane_dosyadan_ara(tempEczaneIsmi);
					hataliTus2_3:
					cout<<endl<<"1-Tekrar eczane sorgula\n2-Üst menüye git\n";
					cout<<" Yapmak istediðiniz iþlem:";
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
						cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
						goto hataliTus2_3;
					}
					break;
				
				case 4:
					baslik();
					ilacListele:
					cout<<"2.4 Herhangi bir Eczaneye ait Ilac Listesi"<<endl<<endl;
					cout<<"Ilaç listesini görmek istediðiniz eczanenin ismini yazýnýz(Örnek: Ada)"<<endl;
					cin>>tempEczaneIsmi;
					ilac_listele(tempEczaneIsmi);
					hataliTus2_4:
					cout<<endl<<"1-Tekrar ilaç listesi arat\n2-Üst menüye dön";
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
						cout<<"!!Hatalý tuþlama yaptýnýz tekrar deneyiniz!!"<<endl;
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
