#include"jual.h"
#include<stdio.h>
#include<conio.h>
#include<windows.h>


void trms(){
		printf("\n-------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t|| TERIMA KASIH SILAHKAN AMBIL BARANG ANDA || \n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
				}
main()
{	char nama[20];//deklarasi variabel
	int menu;//deklarasi variabel
	do{
		printf("======================================================================================================================\n");
		printf("\t\t\t\t\t||SELAMAT DATANG DI TOKO BUTON||\n");
		printf("======================================================================================================================\n");
		system("color e");

{
			
		printf("\n");
		printf("\t\t\t\t\tJUAL BELI PERLENGKAPAN MENDAKI \n");
		printf("																												\n");
	int i;
	int jmlpelanggan;	
		printf("\nJumlah Pembeli : ");
		scanf("%d",&jmlpelanggan);
	for(i=0;i<jmlpelanggan; i++){	//for
		printf("\nNama Pelanggan : ");
		scanf("%s",&nama);
		printf("_________________________________________DAFTAR BARANG YANG DIJUAL_________________________________________________\n");
		printf("\t																													\n");
		printf(" 1.TENDA EIGER\n");
		printf(" 2.TENDA REI \n");
		printf(" 3.CARRIER THE NORTH FACE\n");
		printf(" 4.CARRIER CORSINA\n");
		printf(" 5.JAKET THE NORTH FACE\n");
		printf(" 6.JAKET EIGER\n");
		printf(" 7.SEPATU KARRIMOR WATERPROOF\n");
		printf(" 8.SEPATU HIKING CORSINA\n");
		printf("tekan 0 keluar\n");
		printf("Barang Yang Mau Dibeli : ");
		scanf("%d",&menu);

			if (menu==1){//kondisi
			tenda1();
			}
			else if (menu==2){
				tenda2();
			}
			else if (menu==3){
				carrier1();
			}
			else if (menu==4){
				carrier2();
			}
			else if (menu==5){
				jaket1();
			}
			else if (menu==6){
				jaket2();
			}
			else if (menu==7){
				sepatu1();
			}
			else if (menu==8){
				sepatu2();
			}			
			else	{
			printf("pilihan Anda Tidak Tersedia\n");trms();
			}	
			
		printf("\n");
		printf("\t\t\t\t\t||SELAMAT DATANG DI TOKO BUTON||\n");
		printf("\n");
		printf("\n\t\tNama Pelanggan : %s\n",&nama);
		printf("\n\t\tTotal Bayar Pembelian = %d\n",jb.total);
		printf("\n\t\tJumlah Diskon= %d\n",jb.diskon);
		printf("\n\t\tJumlah Bayar Setelah Diskon= %d\n",jb.tb);
		printf("\n\t\tTerima Kasih Atas Kunjungan Anda \n");
		printf("______________________________________________________________________________________________________________________\n");

		}
		return 0;
}
		system("pause");
	
	}while(menu!=0);	//Pengecekan kondisi
		trms();
}
