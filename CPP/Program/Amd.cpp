// Subclass turunan dari Processor spesifik lini AMD
#pragma once

#include <iostream>
#include <string>
#include "Processor.cpp"

class Amd : public Processor {
private:
    string arsitektur;

public:
    Amd(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, string socket = "", int core = 0, int thread = 0, double base_clock = 0.0, string arsitektur = "") : Processor(id_produk, nama, brand, harga, garansi, socket, core, thread, base_clock) {
        this->arsitektur = arsitektur;
    }

    ~Amd() {}

    // Setter & Getter arsitektur
    void set_arsitektur(string arsitektur) { this->arsitektur = arsitektur; }
    string get_arsitektur() { return this->arsitektur; }
};
