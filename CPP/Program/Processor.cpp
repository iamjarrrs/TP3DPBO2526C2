// Subclass turunan dari Produk untuk kategori CPU
#pragma once
#include <iostream>
#include <string>
#include "Produk.cpp"
using namespace std;

class Processor : public Produk {
protected:
    string socket;
    int core;
    int thread;
    double base_clock; // GHz

public:
    Processor(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, string socket = "", int core = 0, int thread = 0, double base_clock = 0.0) : Produk(id_produk, nama, brand, harga, garansi) {
        this->socket = socket;
        this->core = core;
        this->thread = thread;
        this->base_clock = base_clock;
    }

    virtual ~Processor() {}

    // Setter & Getter socket
    void set_socket(string socket) { this->socket = socket; }
    string get_socket() { return this->socket; }

    // Setter & Getter core
    void set_core(int core) { this->core = core; }
    int get_core() { return this->core; }

    // Setter & Getter thread
    void set_thread(int thread) { this->thread = thread; }
    int get_thread() { return this->thread; }

    // Setter & Getter base_clock
    void set_base_clock(double base_clock) { this->base_clock = base_clock; }
    double get_base_clock() { return this->base_clock; }
};