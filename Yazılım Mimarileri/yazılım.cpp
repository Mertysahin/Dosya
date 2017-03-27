using namespace std;
#include<iostream>
#include<locale.h>
#include<math.h>


main()
{
	setlocale(LC_ALL,"Turkish");
	
	int a[10],b[5],ain,yal[5],ort[5],kar[5],sayi[5],toplam,i,j,diller,tkf;
	float in,t,satirsayisi,k,A=2.4,B=1.05,C=2.5,D=0.38;

	cout<<"Ölçüm Parametresi"<<"\n\n";
	
	cout<<"---------Kullanýcý girdi sayýsý için"<<"\n\n";
	cout<<"Sayý     :"<<"\t";cin>>sayi[0];
	cout<<"Yalýn    :"<<"\t";cin>>yal[0];
	cout<<"Orta     :"<<"\t";cin>>ort[0];
	cout<<"Karmaþýk :"<<"\t";cin>>kar[0]; cout<<"\n\n";
	
	cout<<"---------Kullanýcý çýktý sayýsý için"<<"\n\n";
	cout<<"Sayý     :"<<"\t";cin>>sayi[1];
	cout<<"Yalýn    :"<<"\t";cin>>yal[1];
	cout<<"Orta     :"<<"\t";cin>>ort[1];
	cout<<"Karmaþýk :"<<"\t";cin>>kar[1]; cout<<"\n\n";

	cout<<"---------Kullanýcý sorgu sayýsý için"<<"\n\n";
	cout<<"Sayý     :"<<"\t";cin>>sayi[2];
	cout<<"Yalýn    :"<<"\t";cin>>yal[2];
	cout<<"Orta     :"<<"\t";cin>>ort[2];
	cout<<"Karmaþýk :"<<"\t";cin>>kar[2]; cout<<"\n\n";

	cout<<"---------Kütük için"<<"\n";
	cout<<"Sayý     :"<<"\t";cin>>sayi[3];
	cout<<"Yalýn    :"<<"\t";cin>>yal[3];
	cout<<"Orta     :"<<"\t";cin>>ort[3];
	cout<<"Karmaþýk :"<<"\t";cin>>kar[3]; cout<<"\n\n";

	cout<<"---------Dýþsal arayüz sayýsý için"<<"\n";
	cout<<"Sayý     :"<<"\t";cin>>sayi[4];
	cout<<"Yalýn    :"<<"\t";cin>>yal[4];
	cout<<"Orta     :"<<"\t";cin>>ort[4];
	cout<<"Karmaþýk :"<<"\t";cin>>kar[4]; cout<<"\n\n";
	system("cls");

	
cout<<"Ölçüm Parametresi"<<"\t"<<"|"<<"\t"<<"sayý"<<"\t  "<<"|"<<"\t  "<<"Aðýrlýk Faktörü"<<"\n\n";
    
cout<<"\t\t\t"<<"|"<<"\t\t  "<<"|"<<" yalýn"<<"   "<<"|"<<"   "<<"orta"<<"   "<<"|"<<"  "<<"karmaþýk"<<"\n";
cout<<"--------------------------------------------------------------------------------"<<"\n\n";

	cout<<"Kullanýcý girdi sayýsý"<<"\t"<<"|"<<"\t"<<sayi[0]<<"\t  "<<"|"<<"    "<<yal[0]<<"   "<<"|"<<"     "<<ort[0]<<"      "<<"|"<<kar[0]<<"\n";
	cout<<"Kullanýcý çýktý sayýsý"<<"\t"<<"|"<<"\t"<<sayi[1]<<"\t  "<<"|"<<"    "<<yal[1]<<"   "<<"|"<<"     "<<ort[1]<<"      "<<"|"<<kar[1]<<"\n";
	cout<<"Kullanýcý sorgu sayýsý"<<"\t"<<"|"<<"\t"<<sayi[2]<<"\t  "<<"|"<<"    "<<yal[2]<<"   "<<"|"<<"     "<<ort[2]<<"      "<<"|"<<kar[2]<<"\n";
	cout<<"Kütük sayýsý          "<<"\t"<<"|"<<"\t"<<sayi[3]<<"\t  "<<"|"<<"    "<<yal[3]<<"   "<<"|"<<"     "<<ort[3]<<"      "<<"|"<<kar[3]<<"\n";
	cout<<"Dýþsal arayüz sayýsý  "<<"\t"<<"|"<<"\t"<<sayi[4]<<"\t  "<<"|"<<"    "<<yal[4]<<"   "<<"|"<<"     "<<ort[4]<<"      "<<"|"<<kar[4]<<"\n";
	
cout<<"--------------------------------------------------------------------------------"<<"\n";

	toplam=sayi[0]+sayi[1]+sayi[2]+sayi[3]+sayi[4];
	
	cout<<"Toplam"<<"\t\t\t"<<"|"<<"\t"<<toplam<<"\t"<<"  |"<<"\n\n";
	for(i=0;i<=4;i++)
	{
		b[i]=sayi[i]*yal[i];
		ain+=b[i];
	}
	cout<<"Ayarlanmýþ Ýþlev Noktasý = "<<ain;
	
cout<<"\n\n";

		
	cout<<"Deðerlendirme";
	cout<<"\n";
cout<<"-----------------";cout<<"\n";
cout<<"0 : Hiçbir etkisi yok"<<"\n" <<"1 : Çok az etkisi var"<<"\n"<<"2 : Etkisi var"<<"\n"
<<"3 : Ortalama ektisi var "<<"\n" <<"4 : Önemli etkisi var"<<"\n"<<"5 : Mutlaka olmalý"<<"\n";
cout<<"--------------------------------------------------------------------------------"<<"\n";
	cout<<"1.Uygulama,güvenilir yedekleme ve kurtarma gerektiriyor mu? "<<"  	=";cin>>a[0];
	cout<<"2.Veri iletiþimi gerekiyor mu? "<<"  			=";cin>>a[1];
	cout<<"3.Daðýtýk iþlem iþlevleri var mý? "<<"  			=";cin>>a[2];
	cout<<"4.Perfonmans kritik mi?"<<"  				=";cin>>a[3];
	cout<<"5.Ýçsel iþlemler karýþýk mý ? "<<"  		 	=";cin>>a[4];
	cout<<"6.Sistem, çevrim içi veri giriþi gerektiriyor mu ? "<<"  	=";cin>>a[5];
	cout<<"7.Ana kültür çevrimiçi olarak mý güncelleniyor ?  "<<"  		=";cin>>a[6];
	cout<<"8.Tasarlanacak kod, yeniden kullanýlabilir mi olacak ?"<<"  	=";cin>>a[7];
	cout<<"9.Sistem birden çok yerde yerleþik farklý kurumlar için mi geliþtiriliyor ? "<<"   =";cin>>a[8];
	cout<<"10.Sistem mevcut ve aðýr yüklü olan bir iþletim ortamýnda mý çalýþacak ?  "<<"     =";cin>>a[9];
	cout<<"\n"<<"--------------------------------------------------------------------------------"<<"\n";
	tkf=a[0]+a[1]+a[2]+a[3]+a[4]+a[5]+a[6]+a[7]+a[8]+a[9];
	cout<<"TKF = "<<tkf<<"\n\n";
	
	in=ain*(0.65*0.01*tkf)	;
	cout<<"ÝN = "<<in ;
	cout<<"\n\n";
	cout<<"HANGÝ DÝLLE YAZDINIZ ?";	cout<<"\n";
	cout<<"------------------------";	cout<<"\n";
	cout<<"1-COBOL  (105)";	cout<<"\n";
	cout<<"2-PASCAL  (90)";cout<<"\n";
	cout<<"3-DERLEME (320)";cout<<"\n";
	cout<<"4-NESNE TABANLI DÝLLER (30)";cout<<"\n";
	cout<<"5-KOD ÜRETÝCÝLER (15)";cout<<"\n";
	cout<<"-----------------";cout<<"\n";
	cout<<"SEÇENEK =>";cin>>diller;
	
	switch(diller)
	{
		case 1:	satirsayisi=in*105; break;
		case 2:	satirsayisi=in*90; break;
		case 3:	satirsayisi=in*320; break;
		case 4:	satirsayisi=in*30; break;
		case 5:	satirsayisi=in*15; break;
	}
	cout<<"\n\n";
	cout<<"SATIR SAYISI = "<<satirsayisi<<"\n";
	cout<<"AYRIK PROJE ÝÇÝN"<<"\n";
	k=A*(pow(satirsayisi,B));
	cout<<"ÝÞ GÜCÜ = "<<k<<"\n";
	t=C*(pow(k,D));
	cout<<"ZAMAN =	"<<t<<"\n";
	cout<<"\n\n";system("pause");
}
