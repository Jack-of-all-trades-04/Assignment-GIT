#include <stdio.h>

double add(double angkaPertama, double angkaKedua) {
	return angkaPertama+angkaKedua;
}

int main () {
	double angkaPertama, angkaKedua;
	int input = 0;
	
	puts ("Selamat datang di kalkulator sederhana. \nSilahkan pilih operasi yang tersedia :\n1. Tambah\n2. Kurang\n3. Kali\n4. Bagi");
	while (input <= 0 || input > 4) {
		printf ("Silahkan pilih operasi : ");
		scanf ("%d", &input);
		if (input <= 0 || input > 4) puts ("Pilihan tidak valid, coba lagi.\n");
	}
	printf ("\nSilahkan masukkan angka pertama\t: ");
	scanf ("%lf", &angkaPertama);
	printf ("Silahkan masukkan angka kedua\t: ");
	scanf ("%lf", &angkaKedua);
	switch (input) {
		case 1 :
			printf ("Hasil %26s: %.2lf"," ", add(angkaPertama, angkaKedua));
			break;
		case 2 :
			printf ("Hasil %26s: %.2lf"," ", mul(angkaPertama, angkaKedua));
			break;
		case 3 :
			break;
		case 4 :
			break;
	}
	return 0;
}
