#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main()
{
    string nama;
    float keaktifan, tugas, ujian;
    float murniKeaktifan, murniTugas;
    float murniUjian, nilaiAkhir;

    cout << "PROGRAM HITUNG NILAI AKHIR" << endl;

    cout << "Nama Siswa     : ";
    getline(cin, nama);

    cout << "Nilai Keaktifan: ";
    cin >> keaktifan;

    cout << "Nilai Tugas    : ";
    cin >> tugas;

    cout << "Nilai Ujian    : ";
    cin >> ujian;

    murniKeaktifan = keaktifan * 20 / 100;
    murniTugas = tugas * 30 / 100;
    murniUjian = ujian * 50 / 100;

    nilaiAkhir = murniKeaktifan
               + murniTugas
               + murniUjian;

    cout << fixed << setprecision(2);

    cout << "\nSiswa yang bernama " << nama << endl;
    cout << "Dengan nilai persentase yang dihasilkan:" << endl;

    cout << "Nilai Keaktifan * 20% = "
         << murniKeaktifan << endl;

    cout << "Nilai Tugas * 30%     = "
         << murniTugas << endl;

    cout << "Nilai Ujian * 50%     = "
         << murniUjian << endl;

    cout << "\nJadi Siswa yang bernama " << nama
         << " memperoleh nilai akhir sebesar "
         << nilaiAkhir << endl;

    return 0;
}

