// Superclass / Base Class untuk seluruh komponen komputer

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Produk {
protected:
    string id_produk;
    string nama;
    string brand;
    double harga;
    int garansi; // dalam tahun

public:
    // Konstruktor default & parameter
    Produk(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0) {
        this->id_produk = id_produk;
        this->nama = nama;
        this->brand = brand;
        this->harga = harga;
        this->garansi = garansi;
    }

    // Virtual destruktor agar polymorphism berjalan aman
    virtual ~Produk() {}

    // Setter & Getter id_produk
    void set_id_produk(string id_produk) { this->id_produk = id_produk; }
    string get_id_produk() { return this->id_produk; }

    // Setter & Getter nama
    void set_nama(string nama) { this->nama = nama; }
    string get_nama() { return this->nama; }

    // Setter & Getter brand
    void set_brand(string brand) { this->brand = brand; }
    string get_brand() { return this->brand; }

    // Setter & Getter harga
    void set_harga(double harga) { this->harga = harga; }
    double get_harga() { return this->harga; }

    // Setter & Getter garansi
    void set_garansi(int garansi) { this->garansi = garansi; }
    int get_garansi() { return this->garansi; }
};
