#include <iostream>
#include <chrono> // Untuk mengukur waktu
using namespace std;

const int N = 9;

// Fungsi untuk mencetak matriks Sudoku
void cetakSudoku(int sudoku[N][N]) {
    for (int i = 0; i < N; i++) {
        if (i % 3 == 0 && i != 0)
            cout << "---------------------" << endl;
        for (int j = 0; j < N; j++) {
            if (j % 3 == 0 && j != 0)
                cout << " | ";
            cout << sudoku[i][j] << " ";
        }
        cout << endl;
    }
}

// Fungsi untuk memeriksa apakah angka yang akan diisi valid pada posisi tertentu
bool isSafe(int sudoku[N][N], int row, int col, int num) {
    // Periksa baris
    for (int i = 0; i < N; i++) {
        if (sudoku[row][i] == num)
            return false;
    }

    // Periksa kolom
    for (int i = 0; i < N; i++) {
        if (sudoku[i][col] == num)
            return false;
    }

    // Periksa kotak 3x3
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (sudoku[i + startRow][j + startCol] == num)
                return false;
        }
    }

    return true;
}

// Fungsi rekursif untuk mencari solusi Sudoku
bool solveSudoku(int sudoku[N][N], int &perulangan) {
    int row = -1, col = -1;

    // Cari sel kosong
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (sudoku[i][j] == 0) {
                row = i;
                col = j;
                break;
            }
        }
        if (row != -1)
            break;
    }

    // Jika tidak ada sel kosong, maka Sudoku sudah terselesaikan
    if (row == -1)
        return true;

    // Coba isi dengan angka 1 hingga 9
    for (int num = 1; num <= 9; num++) {
        perulangan++; // Tambahkan iterasi
        if (isSafe(sudoku, row, col, num)) {
            sudoku[row][col] = num;

            // Jika solusi ditemukan, kembali
            if (solveSudoku(sudoku, perulangan))
                return true;

            // Jika tidak, ulangi dengan nilai 0
            sudoku[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int sudoku[N][N];

    cout << "Masukkan matriks Sudoku (isi sel kosong dengan 0):" << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> sudoku[i][j];
        }
    }

    int perulangan = 0; // Inisialisasi jumlah iterasi
    auto WaktuMulai = chrono::high_resolution_clock::now(); // Waktu mulai eksekusi

    // Cari solusi Sudoku
    if (solveSudoku(sudoku, perulangan)) {
        // Cetak solusi
        cout << "\nSolusi Sudoku:" << endl;
        cetakSudoku(sudoku);
    } else {
        cout << "\nTidak ada solusi yang ditemukan." << endl;
    }

    auto WaktuSelesai = chrono::high_resolution_clock::now(); // Waktu akhir eksekusi
    auto duration = chrono::duration_cast<chrono::microseconds>(WaktuSelesai - WaktuMulai);

    cout << "\nJumlah iterasi: " << perulangan << endl;
    cout << "Waktu eksekusi (microseconds): " << duration.count() << endl;

    return 0;
}