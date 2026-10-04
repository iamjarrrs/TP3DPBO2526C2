// Subclass turunan dari Processor spesifik lini Intel
#pragma once
#include <iostream>
#include <string>
#include "Processor.cpp"
using namespace std;

class Intel : public Processor {
private:
    string generasi;

public:
    Intel(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, string socket = "", int core = 0, int thread = 0, double base_clock = 0.0, string generasi = "") : Processor(id_produk, nama, brand, harga, garansi, socket, core, thread, base_clock) {
        this->generasi = generasi;
    }

    ~Intel() {}

    // Setter & Getter generasi
    void set_generasi(string generasi) { this->generasi = generasi; }
    string get_generasi() { return this->generasi; }
};