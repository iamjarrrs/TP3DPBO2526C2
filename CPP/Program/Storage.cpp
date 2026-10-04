// Subclass turunan dari Produk untuk media penyimpanan
#pragma once
#include <iostream>
#include <string>
#include "Produk.cpp"
using namespace std;

class Storage : public Produk {
protected:
    int kapasitas;        // GB
    string tipe_storage;  // SSD NVMe / HDD SATA
    int kecepatan;        // MB/s atau RPM
    string antarmuka;     // PCIe Gen 4 / SATA III

public:
    Storage(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, int kapasitas = 0, string tipe_storage = "", int kecepatan = 0, string antarmuka = "") : Produk(id_produk, nama, brand, harga, garansi) {
        this->kapasitas = kapasitas;
        this->tipe_storage = tipe_storage;
        this->kecepatan = kecepatan;
        this->antarmuka = antarmuka;
    }

    virtual ~Storage() {}

    // Setter & Getter kapasitas
    void set_kapasitas(int kapasitas) { this->kapasitas = kapasitas; }
    int get_kapasitas() { return this->kapasitas; }

    // Setter & Getter tipe_storage
    void set_tipe_storage(string tipe_storage) { this->tipe_storage = tipe_storage; }
    string get_tipe_storage() { return this->tipe_storage; }

    // Setter & Getter kecepatan
    void set_kecepatan(int kecepatan) { this->kecepatan = kecepatan; }
    int get_kecepatan() { return this->kecepatan; }

    // Setter & Getter antarmuka
    void set_antarmuka(string antarmuka) { this->antarmuka = antarmuka; }
    string get_antarmuka() { return this->antarmuka; }
};