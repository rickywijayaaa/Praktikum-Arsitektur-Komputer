// Nama : Ricky Wijaya
// NIM : 18222043 
// Tanggal : 16 November 2023
// Deskripsi : Praktikum 2 Arsitektur Komputer Fungsi Black Rose

#include <stdio.h>

int Black_Rose() {
    int numbers[6];
    read_six_number(numbers);

    if (numbers[0] != 1) {
        illegal_move();
        return 0;
    }

    int esi = 1;
    int* edi = &numbers[1];

    for (int i = 0; i < 6; i++) {
        int eax = esi * (*edi);
        if (eax != *(edi + 1)) {
            illegal_move();
            return 0;
        }
        esi++;
        edi++;
    }

    return 1;
}
