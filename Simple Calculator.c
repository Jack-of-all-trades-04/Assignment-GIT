#include <stdio.h>

double add(double angkaPertama, double angkaKedua) {
	return angkaPertama+angkaKedua;
}

double sub(double angkaPertama, double angkaKedua) {
	return angkaPertama-angkaKedua;
}

double div(double angkaPertama, double angkaKedua) {
	return angkaPertama / angkaKedua;
}

double mul(double angkaPertama, double angkaKedua){
	return angkaPertama * angkaKedua;
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
			printf ("Hasil %26s: %.2lf"," ", sub(angkaPertama, angkaKedua));
			break;
		case 3 :
      		printf ("Hasil %26s: %.2lf"," ", mul(angkaPertama, angkaKedua));
			break;
		case 4 :
      		if (angkaKedua == 0){
				printf ("Tidak bisa membagi dengan 0.");
			} else{
				printf ("Hasil %26s: %.2lf"," ", div(angkaPertama, angkaKedua));
			}
		}

	return 0;
}
