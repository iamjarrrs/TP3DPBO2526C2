// Subclass turunan dari GraphicCard untuk lini Nvidia GeForce
#pragma once
#include <iostream>
#include <string>
#include "GraphicCard.cpp"
using namespace std;

class Nvidia : public GraphicCard {
private:
    string seri_rtx;

public:
    Nvidia(string id_produk = "", string nama = "", string brand = "", double harga = 0.0, int garansi = 0, int vram = 0, string tipe_vram = "", int daya_watt = 0, string seri_rtx = "") : GraphicCard(id_produk, nama, brand, harga, garansi, vram, tipe_vram, daya_watt) {
        this->seri_rtx = seri_rtx;
    }

    ~Nvidia() {}

    // Setter & Getter seri_rtx
    void set_seri_rtx(string seri_rtx) { this->seri_rtx = seri_rtx; }
    string get_seri_rtx() { return this->seri_rtx; }
};