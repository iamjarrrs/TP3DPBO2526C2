// Subclass turunan dari Produk untuk memori utama
#pragma once
#include <iostream>
#include <string>
#include "Produk.cpp"
using namespace std;

class Ram : public Produk {
protected:
    int kapasitas;   // GB
    int kecepatan;   // MHz
    string tipe_ddr; // DDR4 / DDR5

public:
    Ram(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, int kapasitas = 0, int kecepatan = 0, string tipe_ddr = "") : Produk(id_produk, nama, brand, harga, garansi) {
        this->kapasitas = kapasitas;
        this->kecepatan = kecepatan;
        this->tipe_ddr = tipe_ddr;
    }

    virtual ~Ram() {}

    // Setter & Getter kapasitas
    void set_kapasitas(int kapasitas) { this->kapasitas = kapasitas; }
    int get_kapasitas() { return this->kapasitas; }

    // Setter & Getter kecepatan
    void set_kecepatan(int kecepatan) { this->kecepatan = kecepatan; }
    int get_kecepatan() { return this->kecepatan; }

    // Setter & Getter tipe_ddr
    void set_tipe_ddr(string tipe_ddr) { this->tipe_ddr = tipe_ddr; }
    string get_tipe_ddr() { return this->tipe_ddr; }
};