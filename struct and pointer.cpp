#include <stdio.h>
#include <string.h>

struct Mahasiswa {
  char nama[50];
  int umur;
  float ipk;
};

void tampilMahasiswa(struct Mahasiswa *mhs) {
  printf("Nama: %s\n", mhs->nama);
  printf("Umur: %d\n", mhs->umur);
  printf("IPK: %.2f\n", mhs->ipk);
}

int main() {
  // deklarasi variabel struct Mahasiswa
  struct Mahasiswa mhs1, mhs2;
  
  // isi data mahasiswa 1
  strcpy(mhs1.nama, "Ajim");
  mhs1.umur = 20;
  mhs1.ipk = 3.5;

  // tampilkan data mahasiswa 1
  printf("Data Mahasiswa 1:\n");
  tampilMahasiswa(&mhs1);

  // isi data mahasiswa 2
  strcpy(mhs2.nama, "Kendil");
  mhs2.umur = 22;
  mhs2.ipk = 3.8;

  // tampilkan data mahasiswa 2
  printf("\nData Mahasiswa 2:\n");
  tampilMahasiswa(&mhs2);

  return 0;
}
