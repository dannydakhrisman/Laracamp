#include <iostream>
#include <conio.h>

using namespace std;
main(){
	
	char nama[45];
	int kode, jumlah, harga_baju, harga_asli, diskon, pembayaran, total;
	
	cout<<endl<<"\n\t\t  ================================================="<<endl;
	cout<<"\t\t  |                   HARGA BAJU \t\t  |"<<endl;
	cout<<"\t\t  ================================================="<<endl;;
	cout<<"\t==================================================================="<<endl;
	cout<<"\t\t  [1] Baju Ukuran S     || Kode 1 = Rp. 30.000/Baju "<<endl;
	cout<<"\t\t  [2] Baju Ukuran M / L || Kode 2 = Rp. 40.000/Baju ";
	cout<<endl;

	cout<<"\t-------------------------------------------------------------------";	
	cout<<"\n\t\tMasukkan Nama                = "; gets(nama);
	cout<<"\t\tMasukkan Kode Ukuran Baju    = "; cin>>kode;
	cout<<"\t\tMasukkan Jumlah Baju         = "; cin>>jumlah;
	cout<<"\t-------------------------------------------------------------------"<<endl;

//harga baju
	if (kode == 1){
		harga_baju=30000;
}
	else if (kode == 2){
		harga_baju=40000;
}

	cout<<"\t\t  ================================================="<<endl;
	cout<<"\t\t  |                   OUTPUT DATA \t\t  |"<<endl;
	cout<<"\t\t  ================================================="<<endl;;
	cout<<"\t==================================================================="<<endl;

//jumlah pembayaran
	if ((kode == 1) && (jumlah >= 10)){
	harga_asli=harga_baju*jumlah;
	diskon=0.15*harga_asli;
	pembayaran=harga_asli-diskon;
	total=pembayaran;
	}
	else if ((kode == 1) && (jumlah >= 20)){
	harga_asli=harga_baju*jumlah;
	diskon=0.20*harga_asli;
	pembayaran=harga_asli-diskon;
	total=pembayaran;	
	}
	else if ((kode == 2) && (jumlah >= 5)){
	harga_asli=harga_baju*jumlah;
	diskon=0.05*harga_asli;
	pembayaran=harga_asli-diskon;
	total=pembayaran;
	}
	else if ((kode == 2) && (jumlah >= 10)){
	harga_asli=harga_baju*jumlah;
	diskon=0.10*harga_asli;
	pembayaran=harga_asli-diskon;
	total=pembayaran;	
	}
	else if ((kode == 2) && (jumlah >= 20)){
	harga_asli=harga_baju*jumlah;
	diskon=0.20*harga_asli;
	pembayaran=harga_asli-diskon;
	total=pembayaran;	
	}


	cout<<"\n\tNama Pembeli        = "<<nama<<endl;
	cout<<"\tUkuran Baju           = "<<kode<<endl;
	cout<<"\tJumlah Baju           = "<<jumlah<<endl;
	cout<<"\tHarga sebelum diskon  = Rp. "<<harga_asli<<endl;
	cout<<"\tDiskon                = Rp. "<<diskon<<endl;
	cout<<"\tJumlah Bayar          = Rp. "<<total<<endl;
	cout<<"\n\t==================================================================="<<endl;
	getch();

	return(0);
}
