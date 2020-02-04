#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
//contoh 121  1 untuk kambing, 2 untuk mobil
int main()
{
	int a, b, k,persenwin;
	int sumwin,sumlose;
	char status;
	int pintu1, pintu2, pintu3;
	int sumpt1_1, sumpt1_2, sumpt2_1, sumpt2_2, sumpt3_1, sumpt3_2;
	srand(time(0));

	k = 0;
	sumpt1_1 = 0;
	sumpt1_2 = 0;
	sumpt2_1 = 0;
	sumpt2_2 = 0;
	sumpt3_1 = 0;
	sumpt3_2 = 0;
	persenwin =0;

	cout << "isi_pintu_dari_kiri<spasi>jumlah_iterasi_berjalan<spasi>probabilitas" << endl;
	cout << "masukkan banyaknya iterasi: ";
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		pintu1 = rand() % 2 + 1;
		pintu2 = rand() % 2 + 1;
		pintu3 = rand() % 2 + 1;

		if ((pintu1 == 1) && (pintu2 == 1) && (pintu3 == 1))
		{
			pintu1 = 0;
			pintu2 = 0;
			pintu3 = 0;
			i -= 1;
		}
		if ((pintu1 == 2) && (pintu2 == 2) && (pintu3 == 2))
		{
			pintu1 = 0;
			pintu2 = 0;
			pintu3 = 0;
			i -= 1;
		}
		if ((pintu1 == 1) && (pintu2 == 2) && (pintu3 == 2))
		{
			pintu1 = 0;
			pintu2 = 0;
			pintu3 = 0;
			i -= 1;
		}
		if ((pintu1 == 2) && (pintu2 == 2) && (pintu3 == 1))
		{
			pintu1 = 0;
			pintu2 = 0;
			pintu3 = 0;
			i -= 1;
		}
		if ((pintu1 == 2) && (pintu2 == 1) && (pintu3 == 2))
		{
			pintu1 = 0;
			pintu2 = 0;
			pintu3 = 0;
			i -= 1;
		}
		if ((pintu1 != 0) && (pintu2 != 0) && (pintu3 != 0))
		{
			if (pintu1 == 1){sumpt1_1 += 1;}
			if (pintu1 == 2){sumpt1_2 += 1;}
			if (pintu2 == 1){sumpt2_1 += 1;}
			if (pintu2 == 2){sumpt2_2 += 1;}
			if (pintu3 == 1){sumpt3_1 += 1;}
			if (pintu3 == 2){sumpt3_2 += 1;}
			
			if(pintu1==2){status='l';}
			if(pintu1==1)
			{
				if((pintu2==1) or (pintu2==2))
				{
					status='w';
				}
			}
			
			k+=1;
			
			if (status=='w'){sumwin+=1;}
			if (status=='l'){sumlose+=1;}
			
			persenwin=(sumwin*100)/k;
			
			cout << pintu1 << pintu2 << pintu3 << " " << k << " [" ;
			cout<< sumpt1_1 << " " << sumpt1_2 << " ";
			cout<< sumpt2_1 << " " << sumpt2_2 << " ";
			cout << sumpt3_1 << " " << sumpt3_2 <<"] ";
			cout<<status<<" "<<" "<<sumwin<<" "<<persenwin<<"%"<<endl;
		}
	}
	cout << "misal ujung kiri adalah pilihanmu" << endl;
	cout<< "pilihan tengah atau kanan otomatis dipilihkan ketika bernilai 1"<<endl;
	cout<< "dan kamu memilih untuk pindah ke pintu lain yang belum terbuka"<<endl;
	return 0;
}