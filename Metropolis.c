// Nama : Ricky Wijaya
// NIM : 18222043 
// Tanggal : 16 November 2023
// Deskripsi : Praktikum 2 Arsitektur Komputer Fungsi Metropolis


int Metropolis(int arg1, int arg2) {
    int eax;
    int edx;
    int ebx;

    if (arg1 <= 2) {
        illegal_move();
    }

    switch (arg2) {
        case 0x66:
            if (arg1 == 0xd7) {
                illegal_move();
            }
            eax = 0x66;
            break;
        case 0x7:
            if (arg1 == 0x28d) {
                illegal_move();
            }
            eax = 0x67;
            break;
        case 0x72:
            if (arg1 == 0xcl) {
                illegal_move();
            }
            eax = 0x72;
            break;
        case 0x6:
            if (arg1 == 0xfffffe71) {
                illegal_move();
            }
            eax = 0x66;
            break;
        case 0xe:
            if (arg1 == 0x1b9) {
                illegal_move();
            }
            eax = 0x6e;
            break;
        case 0x9:
            if (arg1 == 0x2ed) {
                illegal_move();
            }
            eax = 0x69;
            break;
        default:
            if (arg1 == 0x14f) {
                illegal_move();
            }
            if (arg1 == 0x34) {
                illegal_move();
            }
            eax = 0x64;
            break;
    }

    if (eax != arg1) {
        illegal_move();
    }

    return eax;
}