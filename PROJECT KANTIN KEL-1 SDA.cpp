#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Pesanan {
    string namaMenu;
    int jumlah;
    double harga;
};

int main() {
    int kodemenu, jumlah;
    double harga, totalharga = 0, totalKeseluruhan = 0;
    char pilihan;
    vector<Pesanan> daftarPesanan;
    
    // Menampilkan daftar menu
    cout << "======================================" << endl;
    cout << "     KANTIN TEKNIK INFORMATIKA" << endl;
    cout << "======================================" << endl;
    cout << "-------------Daftar Menu--------------" << endl;
    cout << "======================================" << endl;
    cout << "No.  Nama Menu            Harga" << endl;
    cout << "======================================" << endl;
    cout << "1. Mie Ayam Pangsit      : Rp.15.000" << endl;
    cout << "2. Nasi Goreng        	 : Rp.10.000" << endl;
    cout << "3. Soto Ayam dan nasi    : Rp.15.000" << endl;
    cout << "4. Mie Indomie           : Rp.7.000" << endl;
    cout << "5. Es Teh                : Rp.4.000" << endl;
    cout << "6. Kopi                  : Rp.4.000" << endl;
    cout << "======================================" << endl;
    
    // Input perhitungan pesanan
    do {
        // Input kode menu
        cout << "Masukkan Kode Menu : ";
        cin >> kodemenu;
        
        // Deklarasi kode menu
        if (kodemenu >= 1 && kodemenu <= 6) {
            cout << "Masukkan Jumlah Pesanan : ";
            cin >> jumlah;
            
            // Menghitung total harga
            switch (kodemenu) {
                case 1:
                    harga = 15000;
                    daftarPesanan.push_back({"Mie Ayam Pangsit", jumlah, harga});
                    break;
                case 2:
                    harga = 10000;
                    daftarPesanan.push_back({"Nasi Goreng", jumlah, harga});
                    break;
                case 3:
                    harga = 15000;
                    daftarPesanan.push_back({"Soto Ayam dan Nasi", jumlah, harga});
                    break;
                case 4:
                    harga = 7000;
                    daftarPesanan.push_back({"Mie Indomie", jumlah, harga});
                    break;
                case 5:
                    harga = 4000;
                    daftarPesanan.push_back({"Es Teh", jumlah, harga});
                    break;
                case 6:
                    harga = 4000;
                    daftarPesanan.push_back({"Kopi", jumlah, harga});
                    break;
            }
            totalharga = harga * jumlah;
            totalKeseluruhan += totalharga;
        } else {
            cout << "Kode Menu tidak valid." << endl;
        }
            
        // Menampilkan total harga dan menanyakan apakah ingin memesan lagi
        cout << "Total Harga : Rp." << totalharga << endl;
        cout << "Apakah ingin menambah pesanan? (y/n) : ";
        cin >> pilihan;
    } while (pilihan == 'y' || pilihan == 'Y');
    
    // Perhitungan pembayaran dan kembalian
    double bayar;
    cout << "\n======================================" << endl;
    cout << "Total Harga Keseluruhan : Rp." << totalKeseluruhan << endl;
    cout << "Masukkan Jumlah Uang Pembayaran : Rp.";
    cin >> bayar;
    
    double kembalian = bayar - totalKeseluruhan;
    if (kembalian >= 0) {
        cout << "Kembalian : Rp." << kembalian << endl;
    } else {
        cout << "Jumlah uang pembayaran kurang." << endl;
    }
    
    cout << "==========================================" << endl;
    
    // Menampilkan struk pembayaran
    cout << "==========================================" << endl;
    cout << "              Struk Pembayaran            " << endl;
    cout << "==========================================" << endl;
    cout << "No.  Nama Menu        	     Jumlah     Harga" << endl;
    cout << "==========================================" << endl;
    for (int i = 0; i < daftarPesanan.size(); ++i) {
        cout << i + 1 << ". " << setw(20) << left << daftarPesanan[i].namaMenu << setw(8) << right << daftarPesanan[i].jumlah <<"porsi    Rp." << daftarPesanan[i].harga * daftarPesanan[i].jumlah << endl;
    }
    cout << "------------------------------------------" << endl;
    cout << "Total Harga Keseluruhan    : Rp." << totalKeseluruhan << endl;
    cout << "Bayar                     : Rp." << bayar << endl;
    cout << "Kembalian                 : Rp." << kembalian << endl;
    cout << "==========================================" << endl;
    
    return 0;
}

