#include <iostream>
#include <conio.h>
#include<stdio.h>

using namespace std;

struct data {
	string nama;
	long int ktp, jurusan, jam, umur, kelas, jumlah, harga, Mymenu;
	char lanjut;
};

void resi() {
	system("cls");
	cout << "====================================================" << endl;
	cout << "           Resi Pemesanan Tiket Kereta API          " << endl;
	cout << "====================================================" << endl;
}

void kls() {
	cout << endl;
	cout << "|=========================================|" << endl;
	cout << "|           Kelas Kereta Api              |" << endl;
	cout << "|=========================================|" << endl;
	cout << "| 1. Eksekutif                            |" << endl;
	cout << "| 2. Bisnis                               |" << endl;
	cout << "| 3. Ekonomi                              |" << endl;
	cout << "|_________________________________________|" << endl;
	cout << endl;
}

void usia() {
	cout << endl;
	cout << " ___________________________________________ " << endl;
	cout << "|               Usia Penumpang              |" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "| 1. Anak - Anak                            |" << endl;
	cout << "| 2. Dewasa                                 |" << endl;
	cout << "|___________________________________________|" << endl;
	cout << endl;
}

void waktu() {
	system("cls");
	cout << endl;
	cout << "|===========================================|" << endl;
	cout << "|         JAM PEMBERANGKATAN KERETA         |" << endl;
	cout << "|===========================================|" << endl;
	cout << "| 1. Pagi                      		    |" << endl;
	cout << "| 2. Siang                     		    |" << endl;
	cout << "| 3. Malam                     		    |" << endl;
	cout << "|===========================================|" << endl;
	cout << endl;
}

void program() {
	cout << "|===========================================================|" << endl;
	cout << "|              Pemesanan Tiket Kereta Api                   |" << endl;
	cout << "|===========================================================|" << endl;
	cout << "|                     Rute Jurusan                          |" << endl;
	cout << "|===========================================================|" << endl;
	cout << "|                 1. SUKABUMI - BOGOR                       |" << endl;
	cout << "|                 2. BOGOR    - JAKARTA                     |" << endl;
	cout << "|                 3. JAKARTA  - BANDUNG                     |" << endl;
	cout << "|                 4. BANDUNG  - SUKABUMI                    |" << endl;
	cout << "|                 5. BOGOR    - YOGYAKARTA                  |" << endl;
	cout << "|===========================================================|" << endl;
	cout << endl;
}

int menu, studio, jam, avatar, expendables, kursi, kosong, satu, jumlah, uang, kurang; 
char lanjut, kembali;

int main() {
	do{
	system("color A");
	cout << " _________________________________________________ " << endl;
	cout << "|                  TIKET.COM		          |" << endl;
	cout << "|_________________________________________________|" << endl;
	cout << "| 1. Pemesanan Tiket Bioskop                      |" << endl;
	cout << "| 2. Pemesanan Tiket Kereta Api                   |" << endl;
	cout << "| 3. Pemesanan Tiket Pesawat                      |" << endl;
	cout << "| 4. Keluar                                       |" << endl;
	cout << "|_________________________________________________|" << endl;
	cout << endl;
	cout << "Masukan Pilihan Anda : ";
	cin >> menu;
	
	switch(menu) {
		case 1:
			menuAwal:
			system("color A");
			system("CLS");
			cout << " __________________________________________ " << endl;
			cout << "|            Bioskop Siliwangi             |" << endl;
			cout << "|__________________________________________|" << endl;
			cout << " __________________________________________ " << endl;
			cout << "|              Daftar Studio               |" << endl;
			cout << "|__________________________________________|" << endl;
			cout << "| 1. Studio 1 : Avenger                    |" << endl;
			cout << "| 2. Studio 2 : Avatar 2                   |" << endl;
			cout << "| 3. Studio 3 : The Expendables 4          |" << endl;
			cout << "|__________________________________________|" << endl;
			cout << endl;
			cout << "Masukan Pilihan Anda : ";
			cin >> studio;
			
			switch(studio) {
				case 1:
					system("CLS");
					cout << " ______________________________________ " << endl;
					cout << "|       Anda Memilih Film Avenger      |" << endl;
					cout << "|______________________________________|" << endl;
					cout << "|_______Silahkan Pilih Jam Tayang______|" << endl;
					cout << "| 1. 12.00 WIB                         |" << endl;
					cout << "| 2. 13.30 WIB                         |" << endl;
					cout << "| 3. 16.00 WIB                         |" << endl;
					cout << "|______________________________________|" << endl;
					cout << endl;
					cout << "Pilih Jam Tayang : ";
					cin >> jam;
					
					switch(jam) {
						case 1:
							system("CLS");
							cout << "Studio 1 : Avenger" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
							
						case 2:
							system("CLS");
							cout << "Studio 1 : Avenger" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
									
						case 3:
							system("CLS");
							cout << "Studio 1 : Avenger" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
						}
						
							switch(satu) {
								case 1:
									system("CLS");
									cout << "===============================================" << endl;
									cout << "               PEMESANAN TIKET                 " << endl;
									cout << "===============================================" << endl;
									cout << "Harga Per Tiket : Rp.25000" << endl;
									cout << "Jumlah Pesan Tiket : ";
									cin >> jumlah;
									
									cout << "Harga Total Pembayaran : " << jumlah*25000 << endl;
									cout << "Uang Yang Di Bayarkan : Rp.";
									cin >> uang;
									if (uang<jumlah*25000) {
										cout << "Maaf Uang Anda Kurang Rp." << uang-jumlah*25000 << endl;
										cout << "Masukan Kekurang Anda : Rp.";
										cin >> kurang;
										cout << "Uang Kembalian Anda : Rp." << uang+kurang-jumlah << endl;
									}else{
										cout << "Uang Kembalian Anda : Rp." << uang-jumlah*25000 << endl;
									}
									system("CLS");
									cout << "==========================================" << endl;
									cout << "          BROWSUR PEMBELIAN TIKET         " << endl;
									cout << "==========================================" << endl;
									cout << endl;
									cout << "Studio                    : ";
									if (studio==1) {
										cout << "1 Avenger";
									}
									else if(studio==2) {
										cout << "2 Avatar 2";
									}
									else if(studio==3) {
										cout << "3 The Expendables 4";
									}
									cout << endl;
									cout << endl;
									
									cout << "Jam Tayang                : ";
									if (jam==1) {
										cout << "12.00 WIB";
									}
									else if (jam==2) {
										cout << "13.30 WIB";
									}
									else if (jam==3) {
										cout << "16.00 WIB";
									}
									cout << endl; 
									cout << endl;
									cout << "Jumlah Tiket              : " << jumlah << endl;
									cout << endl;
									cout << "Total Pembayaran          : Rp." << jumlah*25000 << endl;
									cout << endl;
									cout << "Uang Yang Di Bayarkan     : Rp." << uang << endl;
									cout << endl;
									cout << "Uang Kembalian Kekurangan : Rp." << uang-jumlah*25000 << endl; 
									cout << endl;
									cout << "Uang Kembalian            : Rp." << uang+kurang-jumlah*25000 << endl;
									cout << "======================================================" << endl;
									cout << endl;
									cout << "                   SELAMAT MENONTON                   " << endl;
									cout << endl;
    								cout << "======================================================" << endl;
    								cout << "Apakah Anda Ingin Memesan Lagi? [Y/T] : ";
									cin >> lanjut;
        							cout << endl;
        							if(lanjut=='Y' || lanjut=='y') {
        								goto menuAwal;
									}else{
										cout << "Terima Kasih Sudah Menggunakan Layanan Kami";
									}
									break;
							}
					
				case 2:
					system("CLS");
					cout << " _______________________________________ " << endl;
					cout << "|       Anda Memilih Film Avatar 2      |" << endl;
					cout << "|_______________________________________|" << endl;
					cout << "|_______Silahkan Pilih Jam Tayang_______|" << endl;
					cout << "| 1. 12.00 WIB                          |" << endl;
					cout << "| 2. 13.30 WIB                          |" << endl;
					cout << "| 3. 16.00 WIB                          |" << endl;
					cout << "|_______________________________________|" << endl;
					cout << endl;
					cout << "Pilih Jam Tayang :";
					cin >> avatar;
					
					switch(avatar) {
						case 1:
							system("CLS");
							cout << "Studio 2 : Avatar 2" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
							
						case 2:
							system("CLS");
							cout << "Studio 2 : Avatar 2" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
									
						case 3:
							system("CLS");
							cout << "Studio 2 : Avatar 2" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
						}
						
							switch(satu) {
								case 1:
									system("CLS");
									cout << "===============================================" << endl;
									cout << "               PEMESANAN TIKET                 " << endl;
									cout << "===============================================" << endl;
									cout << "Harga Per Tiket : Rp.25000" << endl;
									cout << "Jumlah Pesan Tiket : ";
									cin >> jumlah;
									
									cout << "Harga Total Pembayaran : " << jumlah*25000 << endl;
									cout << "Uang Yang Di Bayarkan : Rp.";
									cin >> uang;
									if (uang<jumlah*25000) {
										cout << "Maaf Uang Anda Kurang Rp." << uang-jumlah*25000 << endl;
										cout << "Masukan Kekurang Anda : Rp.";
										cin >> kurang;
										cout << "Uang Kembalian Anda : Rp." << uang+kurang-jumlah << endl;
									}else{
										cout << "Uang Kembalian Anda : Rp." << uang-jumlah*25000 << endl;
									}
									system("CLS");
									cout << "==========================================" << endl;
									cout << "          BROWSUR PEMBELIAN TIKET         " << endl;
									cout << "==========================================" << endl;
									cout << endl;
									cout << "Studio                    : ";
									if (studio==1) {
										cout << "1 Avenger";
									}
									else if(studio==2) {
										cout << "2 Avatar 2";
									}
									else if(studio==3) {
										cout << "3 The Expendables 4";
									}
									cout << endl;
									cout << endl;
									
									cout << "Jam Tayang                : ";
									if (avatar==1) {
										cout << "12.00 WIB";
									}
									else if (avatar==2) {
										cout << "13.30 WIB";
									}
									else if (avatar==3) {
										cout << "16.00 WIB";
									}
									cout << endl; 
									cout << endl;
									cout << "Jumlah Tiket              : " << jumlah << endl;
									cout << endl;
									cout << "Total Pembayaran          : Rp." << jumlah*25000 << endl;
									cout << endl;
									cout << "Uang Yang Di Bayarkan     : Rp." << uang << endl;
									cout << endl;
									cout << "Uang Kembalian Kekurangan : Rp." << uang-jumlah*25000 << endl; 
									cout << endl;
									cout << "Uang Kembalian            : Rp." << uang+kurang-jumlah*25000 << endl;
									cout << "======================================================" << endl;
									cout << endl;
									cout << "                   SELAMAT MENONTON                   " << endl;
									cout << endl;
    								cout << "======================================================" << endl;
    								cout << "Apakah Anda Ingin Memesan Lagi? [Y/T] : ";
									cin >> lanjut;
        							cout << endl;
        							if(lanjut=='Y' || lanjut=='y') {
        								goto menuAwal;
									}else{
										cout << "Terima Kasih Sudah Menggunakan Layanan Kami";
									}
							}
					
					
				case 3:
					system("CLS");
					cout << " ________________________________________________ " << endl;
					cout << "|       Anda Memilih Film The Expendables 4      |" << endl;
					cout << "|________________________________________________|" << endl;
					cout << "|___________Silahkan Pilih Jam Tayang____________|" << endl;
					cout << "| 1. 12.00 WIB                                   |" << endl;
					cout << "| 2. 13.30 WIB                                   |" << endl;
					cout << "| 3. 16.00 WIB                                   |" << endl;
					cout << "|________________________________________________|" << endl;
					cout << endl;
					cout << "Pilih Jam Tayang :";
					cin >> expendables;
					
					switch(expendables) {
						case 1:
							system("CLS");
							cout << "Studio 3 : The Expendables 4" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
							
						case 2:
							system("CLS");
							cout << "Studio 3 : The Expendables 4" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
									
						case 3:
							system("CLS");
							cout << "Studio 3 : The Expendables 4" << endl;
							cout << "====================================================" << endl;
							cout << "                  Cek Sisa Kursi                    " << endl;
							cout << "====================================================" << endl;
							cout << "Keterangan" << endl;
							cout << "Jumlah Kursi Sebanyak 50 kursi" << endl;
							cout << "====================================================" << endl;
							cout << "Jumlah Pesan Kursi : ";
							cin >> kursi;
							kosong=50-kursi;
							cout << "====================================================" << endl;
							cout << "Sisa Kursi : " << kosong << endl;
							cout << endl;
							cout << "Ketik 1 untuk melanjutkan nya : ";
									cin >> satu;
							break;
						}
						
							switch(satu) {
								case 1:
									system("CLS");
									cout << "===============================================" << endl;
									cout << "               PEMESANAN TIKET                 " << endl;
									cout << "===============================================" << endl;
									cout << "Harga Per Tiket : Rp.25000" << endl;
									cout << "Jumlah Pesan Tiket : ";
									cin >> jumlah;
									
									cout << "Harga Total Pembayaran : " << jumlah*25000 << endl;
									cout << "Uang Yang Di Bayarkan : Rp.";
									cin >> uang;
									if (uang<jumlah*25000) {
										cout << "Maaf Uang Anda Kurang Rp." << uang-jumlah*25000 << endl;
										cout << "Masukan Kekurang Anda : Rp.";
										cin >> kurang;
										cout << "Uang Kembalian Anda : Rp." << uang+kurang-jumlah << endl;
									}else{
										cout << "Uang Kembalian Anda : Rp." << uang-jumlah*25000 << endl;
									}
									system("CLS");
									cout << "==========================================" << endl;
									cout << "          BROWSUR PEMBELIAN TIKET         " << endl;
									cout << "==========================================" << endl;
									cout << endl;
									cout << "Studio                    : ";
									if (studio==1) {
										cout << "1 Avenger";
									}
									else if(studio==2) {
										cout << "2 Avatar 2";
									}
									else if(studio==3) {
										cout << "3 The Expendables 4";
									}
									cout << endl;
									cout << endl;
									
									cout << "Jam Tayang                : ";
									if (expendables==1) {
										cout << "12.00 WIB";
									}
									else if (expendables==2) {
										cout << "13.30 WIB";
									}
									else if (expendables==3) {
										cout << "16.00 WIB";
									}
									cout << endl; 
									cout << endl;
									cout << "Jumlah Tiket              : " << jumlah << endl;
									cout << endl;
									cout << "Total Pembayaran          : Rp." << jumlah*25000 << endl;
									cout << endl;
									cout << "Uang Yang Di Bayarkan     : Rp." << uang << endl;
									cout << endl;
									cout << "Uang Kembalian Kekurangan : Rp." << uang-jumlah*25000 << endl; 
									cout << endl;
									cout << "Uang Kembalian            : Rp." << uang+kurang-jumlah*25000 << endl;
									cout << "======================================================" << endl;
									cout << endl;
									cout << "                   SELAMAT MENONTON                   " << endl;
									cout << endl;
    								cout << "======================================================" << endl;
    								cout << "Apakah Anda Ingin Memesan Lagi? [Y/T] : ";
									cin >> lanjut;
        							cout << endl;
        							if(lanjut=='Y' || lanjut=='y') {
        								goto menuAwal;
									}else{
										cout << "Terima Kasih Sudah Menggunakan Layanan Kami";
									}
							}
				default:
					cout << "Maaf Yang Anda Inputkan Salah" << endl;
					break;
			}
			
		case 2:
			system("CLS");
			system("color A");
			struct data data1;
			awal:
				cout << "Masukan Nama Anda   : ";
				cin >> data1.nama;
	
				cout << "Masukan No Ktp Anda : ";
				cin >> data1.ktp;
				cout << endl;
	
			up:
				program();
				cout << "Masukan Rute Kereta (1-5) : ";
				cin >> data1.jurusan;
	
			jam:
				waktu();
				cout << "Masukan Jam Pemberangkatan (1-3) : ";
				cin >> data1.jam;
				
			umur:
				usia();
				cout << "Masukan Pilihan Usia : ";
				cin >> data1.umur;
				
			kelas:
				kls();
				cout << "Pilih Kelas : ";
				cin >> data1.kelas;
				
				cout << endl;
				cout << "Masukan Jumlah Tiket Yang Anda Pesan : ";
				cin >> data1.jumlah;
				cout << "=============================================================" << endl;
				cout << "Jumlah tiket yang di pesan : " << data1.jumlah << " Tiket" << endl;
				cout << endl;
				if(data1.kelas==1) {
					cout << "Kelas Kereta Yang Anda Pilih : Eksekutif" << endl;
					cout << "Harga Satuan Tiket           : Rp.80000" << endl;
				}
				else if(data1.kelas==2) {
					cout << "Kelas Kereta Yang Anda Pilih : Bisnis" << endl;
					cout << "Harga Satuan Tiket           : Rp60000" << endl;
				}
				else if(data1.kelas==3) {
					cout << "Kelas Kereta Yang Anda Pilih : Ekonomi" << endl;
					cout << "Harga Satuan Tiket           : Rp46000" << endl;
				}
				cout << "==============================================================" << endl;
				if(data1.kelas==1) {
					data1.harga=data1.jumlah*80000;
					cout << "Total Harga Tiket : " << data1.harga << endl;
				}
				else if(data1.kelas==2) {
					data1.harga=data1.jumlah*60000;
					cout << "Total Harga Tiket : " << data1.harga << endl;
				}
				else if(data1.kelas==3) {
					data1.harga=data1.jumlah*46000;
					cout << "Total Harga Tiket : " << data1.harga << endl;
				}
				cout << "==============================================================" << endl;
				cout << endl;
				cout << "\n Lanjutkan Untuk Proses Pemesanan ? [Y/T] : ";
				cin >> data1.lanjut;
				if(data1.lanjut == 'Y' || data1.lanjut == 'y') {
					goto tkt;
				}else{
					goto up;
				}
				
				tkt :
					resi();
					cout << "Nama           : " << data1.nama << endl;
					cout << "No KTP         : " << data1.ktp << endl;
					if(data1.jurusan == 1) {
						cout << "Jurusan Kereta : SUKABUMI - BOGOR" << endl; 
					}
					else if(data1.jurusan == 2) {
						cout << "Jurusan Kereta : BOGOR - JAKARTA" << endl;
					}
					else if(data1.jurusan == 3) {
						cout << "Jurusan Kereta : JAKARTA - BANDUNG" << endl;
					}
					else if(data1.jurusan == 4) {
						cout << "Jurusan Kereta : BANDUNG - SUKABUMI" << endl;
					}
					else if(data1.jurusan == 5) {
						cout << "Jurusan Kereta : BOGOR - YOGYAKARTA" << endl;
					}
					
					if(data1.umur == 1) {
						cout << "Usia Penumpang : Anak - Anak" << endl;
					}
					else if(data1.umur == 2) {
						cout << "Usia Penumpang : Dewasa" << endl;
					}
					
					if(data1.kelas == 1) {
						cout << "Kelas Kereta   : Eksekutif" << endl;
					}
					else if(data1.kelas == 2) {
						cout << "Kelas Kereta   : Bisnis" << endl;
					}
					else if(data1.kelas == 3) {
						cout << "Kelas Kereta   : Ekonomi" << endl;
					}
					cout << "Jumlah Tiket Yang Di Pesan : " << data1.jumlah << endl;
					
					cout << endl;
					if(data1.jam == 1) {
						cout << "[ Jadwal Kereta Pagi Pukul 08.00 WIB ]" << endl;
					}
					else if(data1.jam == 2) {
						cout << "[ Jadwal Kereta Siang Pukul 13.00 WIB ]" << endl;
					}
					else if(data1.jam == 3) {
						cout << "[ Jadwal Kereta Malam Pukul 20.00 WIB ]" << endl;
					}
					cout << "----------------------------------------------------" << endl;
					cout << "Total Harga Yang Harus Di Bayar : Rp." << data1.harga << endl;
					cout << endl;
					cout << "====================================================" << endl;
					
				break;
			}
			
	 cout << endl;
     cout <<"Kembali Ke Menu ? y/n : ";
     cin >> kembali;
     system("CLS");
	}while (kembali== 'Y' | kembali== 'y');
  	 cout <<"Terima Kasih Sudah Menggunakan Layanan Kami :)" << endl;	
}

