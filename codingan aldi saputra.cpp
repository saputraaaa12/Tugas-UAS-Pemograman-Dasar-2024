#include <iostream>
using namespace std;

void hitungNilaiAkhir() {
    float bobotTugas, bobotUts, bobotUas;
    float nilaiTugas, nilaiUts, nilaiUas, nilaiAkhir;
    char grade;

    cout << "=== Kalkulator Nilai Akhir Mata Kuliah ===" << endl;

    // Meminta bobot penilaian dari pengguna
    cout << "Masukkan bobot tugas (dalam %): ";
    cin >> bobotTugas;
    cout << "Masukkan bobot UTS (dalam %): ";
    cin >> bobotUts;
    cout << "Masukkan bobot UAS (dalam %): ";
    cin >> bobotUas;

    // Validasi total bobot
    if (bobotTugas + bobotUts + bobotUas != 100) {
        cout << "Error: Total bobot harus 100%! Silakan ulangi program." << endl;
        return;
    }

    // Meminta nilai masing-masing komponen
    cout << "Masukkan nilai tugas (0-100): ";
    cin >> nilaiTugas;
    cout << "Masukkan nilai UTS (0-100): ";
    cin >> nilaiUts;
    cout << "Masukkan nilai UAS (0-100): ";
    cin >> nilaiUas;

    // Menghitung nilai akhir
    nilaiAkhir = (nilaiTugas * bobotTugas / 100) + (nilaiUts * bobotUts / 100) + (nilaiUas * bobotUas / 100);

    // Menentukan grade berdasarkan nilai akhir
    if (nilaiAkhir >= 85) {
        grade = 'A';
    } else if (nilaiAkhir >= 75) {
        grade = 'B';
    } else if (nilaiAkhir >= 65) {
        grade = 'C';
    } else if (nilaiAkhir >= 50) {
        grade = 'D';
    } else {
        grade = 'E';
    }

    // Menampilkan hasil
    cout << "\n=== Hasil Akhir ===" << endl;
    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    cout << "Grade: " << grade << endl;
}

int main() {
    hitungNilaiAkhir();
    return 0;
}
