// Subclass turunan dari GraphicCard untuk lini AMD Radeon
#pragma once
#include <iostream>
#include <string>
#include "GraphicCard.cpp"
using namespace std;

class GcAmd : public GraphicCard {
private:
    string seri_radeon;

public:
    GcAmd(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, int vram = 0, string tipe_vram = "", int daya_watt = 0, string seri_radeon = "") : GraphicCard(id_produk, nama, brand, harga, garansi, vram, tipe_vram, daya_watt) {
        this->seri_radeon = seri_radeon;
    }

    ~GcAmd() {}

    // Setter & Getter seri_radeon
    void set_seri_radeon(string seri_radeon) { this->seri_radeon = seri_radeon; }
    string get_seri_radeon() { return this->seri_radeon; }
};