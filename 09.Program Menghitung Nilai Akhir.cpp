#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string nama;
    float keaktifan, tugas, ujian;
    float nilaiKeaktifan, nilaiTugas, nilaiUjian, nilaiAkhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;

    cout << "Nama Siswa       : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan  : ";
    cin >> keaktifan;

    cout << "Nilai Tugas      : ";
    cin >> tugas;

    cout << "Nilai Ujian      : ";
    cin >> ujian;

    nilaiKeaktifan = keaktifan * 0.20;
    nilaiTugas = tugas * 0.30;
    nilaiUjian = ujian * 0.50;

    nilaiAkhir = nilaiKeaktifan + nilaiTugas + nilaiUjian;

    cout << fixed << setprecision(2);

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Nilai Keaktifan * 20% : " << nilaiKeaktifan << endl;
    cout << "Nilai Tugas * 30%     : " << nilaiTugas << endl;
    cout << "Nilai Ujian * 50%     : " << nilaiUjian << endl;

    cout << "\nJadi, siswa yang bernama " << nama
         << " memperoleh nilai akhir sebesar "
         << nilaiAkhir << endl;

    return 0;
}
