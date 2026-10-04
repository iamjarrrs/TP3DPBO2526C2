// Container class yang menerapkan komposisi (Vector of Produk*)
#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Produk.cpp"
using namespace std;

using namespace std;

class Toko {
private:
    string nama_toko;
    string lokasi;
    vector<Produk*> list_produk; // Komposisi / Array of Objects

public:
    Toko(string nama_toko = "", string lokasi = "") {
        this->nama_toko = nama_toko;
        this->lokasi = lokasi;
    }

    ~Toko() {}

    // Setter & Getter nama_toko
    void set_nama_toko(string nama_toko) { this->nama_toko = nama_toko; }
    string get_nama_toko() { return this->nama_toko; }

    // Setter & Getter lokasi
    void set_lokasi(string lokasi) { this->lokasi = lokasi; }
    string get_lokasi() { return this->lokasi; }

    // Setter & Getter list_produk
    void set_list_produk(vector<Produk*> list_produk) { this->list_produk = list_produk; }
    vector<Produk*> get_list_produk() { return this->list_produk; }

    // Method tambah produk
    void tambah_produk(Produk* p) {
        this->list_produk.push_back(p);
    }
};