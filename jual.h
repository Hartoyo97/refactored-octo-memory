#include<stdio.h>			
#include<conio.h>
#include<windows.h>
#include<iostream>
void tks(){
		printf("\n-------------------------------------------------------------------------------------------------------------------\n");
		printf("\t\t\t\t|| TERIMA KASIH SILAHKAN AMBIL BARANG ANDA || \n");
		printf("---------------------------------------------------------------------------------------------------------------------\n");
				}
	using namespace std;
int total(int jumlahbeli, int tenda){//function
	return jumlahbeli*tenda;
}
struct jb{
		int jumlahbeli,total,diskon,tb;//struct
		int harga[8];	//array
	}jb;
void tenda1(){	//procedure
		int tenda, jumlahbeli;
		jb.harga[0]=350000;
			system("color a");
			
			printf(" \n1.TENDA EIGER\n");
			printf("HARGA TENDA DOM : 350.000.00\n");tenda=jb.harga[0];
			printf("jumlah pembelian : ");
			scanf("%d",&jumlahbeli);
			jb.total=total(jumlahbeli, tenda);
			printf("Harga Total Pembelian = %d \n",jb.total);
		if (jb.total>=1000000)	{	//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
	void tenda2(){//procedure
		int tenda,jumlahbeli;
		jb.harga[1]=400000;
			printf(" \n2.TENDA REI \n");
			printf("HARGA TENDA DOM : 400.000.00\n");tenda=jb.harga[1];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*tenda;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
		 	}	
	void carrier1(){//procedure
		int carrier;
		jb.harga[2]=300000;
			printf("\n3.CARRIER THE NORTH FACE\n");
			printf("HARGA TAS GUNUNG : 300.000.00\n");carrier=jb.harga[2];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*carrier;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
void carrier2(){//procedure
		int carrier;
		jb.harga[3]=320000;
			printf("\n4.CARRIER CORSINA\n");
			printf("HARGA TAS GUNUNG : 320.000.00\n");carrier=jb.harga[3];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*carrier;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
	void jaket1(){//procedure
		int jaket;
		jb.harga[4]=210000;
			system("color b");
			printf("\n5.JAKET THE NORTH FACE\n");
			printf("HARGA JAKET : 210.000.00\n");jaket=jb.harga[4];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*jaket;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
	void jaket2(){//procedure
		int jaket;
		jb.harga[5]=280000;
			printf("\n6.JAKET EIGER\n");
			printf("HARGA JAKET : 280.000.00 \n");jaket=jb.harga[5];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*jaket;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
	void sepatu1(){//procedure
		int sepatu;
		jb.harga[6]=480000;
			system("color f");
			printf("\n7.SEPATU KARRIMOR WATERPROOF\n");
			printf("HARGA SEPATU : 420.000.00\n");sepatu=jb.harga[6];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*sepatu;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
	void sepatu2(){//procedure
		int sepatu;
		jb.harga[7]=410000;
			printf("\n8.SEPATU HIKING CORSINA\n");
			printf("HARGA SEPATU : 410.000.00 \n");sepatu=jb.harga[7];
			printf("jumlah pembelian : ");
			scanf("%d",&jb.jumlahbeli);
			jb.total=jb.jumlahbeli*sepatu;
			printf("Harga Total Pembelian = %d\n",jb.total);
		if (jb.total>=1000000)	{//kondisi if
			jb.diskon=0.1*jb.total;
			jb.tb=jb.total-jb.diskon;
			printf("jumlah diskon= %d\n",jb.diskon);
			printf("jumlah bayar= %d\n",jb.tb);
			printf("\t||SELAMAT ANDA MENDAPATKAN POTONGAN HARGA||\n");
			}
		else{
			jb.diskon=0;
			printf("MAAF ANDA BELUM MENDAPATKAN POTONGAN HARGA\n ");tks();
			}
			system("pause");
			system("cls");
			}
		
