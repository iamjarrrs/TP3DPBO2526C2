// Subclass turunan dari Produk untuk kategori Kartu Grafis
#pragma once
#include <iostream>
#include <string>
#include "Produk.cpp"
using namespace std;

class GraphicCard : public Produk {
protected:
    int vram;            // GB
    string tipe_vram;    // GDDR6 / GDDR6X
    int daya_watt;       // Watt

public:
    GraphicCard(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0,
                int vram = 0, string tipe_vram = "", int daya_watt = 0)
        : Produk(id_produk, nama, brand, harga, garansi) {
        this->vram = vram;
        this->tipe_vram = tipe_vram;
        this->daya_watt = daya_watt;
    }

    virtual ~GraphicCard() {}

    // Setter & Getter vram
    void set_vram(int vram) { this->vram = vram; }
    int get_vram() { return this->vram; }

    // Setter & Getter tipe_vram
    void set_tipe_vram(string tipe_vram) { this->tipe_vram = tipe_vram; }
    string get_tipe_vram() { return this->tipe_vram; }

    // Setter & Getter daya_watt
    void set_daya_watt(int daya_watt) { this->daya_watt = daya_watt; }
    int get_daya_watt() { return this->daya_watt; }
};