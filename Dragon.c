// Nama : Ricky Wijaya
// NIM : 18222043 
// Tanggal : 16 November 2023
// Deskripsi : Praktikum 2 Arsitektur Komputer Fungsi Dragon

#include <stdio.h>

void Dragon(char* input)
{
    char fungsi_hash[16] = "ck2hi3ersfotm1p0";
    char kalimat[6] = "if2130";
    char enkripsi[6];

    if (string_length(input) != 6)
    {
        illegal_move();
    }
    for (int i=0; i <6;i++)
    {
        char dec = input[i] & 15;
        enkripsi[i] = fungsi_hash[dec]; 
    }
    if (strings_not_equal(enkripsi,kalimat))
    {
        illegal_move();
    }
}
