#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char nama_customer[50], pil_kategori[10];
    int tgl_masuk, tgl_keluar, lama_inap;
    float harga_kategori, bayar;

    cout << "Selamat datang di Hotel Kami!\n\n";

    cout << "Masukkan Nama Customer: ";
    cin.getline(nama_customer, 50);

    cout << "Masukkan Kategori Kamar (Single/Double/Suite): ";
    cin.getline(pil_kategori, 10);

    if (strcmp(pil_kategori, "Single") == 0 || strcmp(pil_kategori, "single") == 0) {
        harga_kategori = 500000;
    } else if (strcmp(pil_kategori, "Double") == 0 || strcmp(pil_kategori, "double") == 0) {
        harga_kategori = 800000;
    } else if (strcmp(pil_kategori, "Suite") == 0 || strcmp(pil_kategori, "suite") == 0) {
        harga_kategori = 1000000;
    } else {
        cout << "Salah Input.\n";
        return 0;
    }

    cout << "Masukkan Tanggal Masuk (dalam format angka): ";
    cin >> tgl_masuk;

    cout << "Masukkan Tanggal Keluar (dalam format angka): ";
    cin >> tgl_keluar;

    lama_inap = tgl_keluar - tgl_masuk;
    bayar = lama_inap * harga_kategori;

    cout << "\n--- Rincian ---\n";
    cout << "Nama Customer: " << nama_customer << endl;
    cout << "Kategori Kamar: " << pil_kategori << endl;
    cout << "Lama Inap: " << lama_inap << " hari" << endl;
    cout << "Total Bayar: Rp " << bayar << endl;

    return 0;
}
