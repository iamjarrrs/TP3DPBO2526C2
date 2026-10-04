// Driver program: memuat prosedur tampilan dan alur eksekusi utama

#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

// Include file kelas (konvensi perkuliahan DPBO)
#include "Toko.cpp"
#include "Intel.cpp"
#include "Amd.cpp"
#include "Nvidia.cpp"
#include "GcAmd.cpp"
#include "Ram.cpp"
#include "Storage.cpp"

using namespace std;

// Prosedur menampilkan detail produk via getter & dynamic_cast
void tampilkan_detail_produk(Produk* p) {
    cout << "ID Produk   : " << p->get_id_produk() << endl;
    cout << "Nama        : " << p->get_nama() << endl;
    cout << "Brand       : " << p->get_brand() << endl;
    cout << fixed << setprecision(0);
    cout << "Harga       : Rp " << p->get_harga() << endl;
    cout << "Garansi     : " << p->get_garansi() << " Tahun" << endl;

    // Deteksi tipe objek untuk mencetak atribut spesifik
    Intel* intel = dynamic_cast<Intel*>(p);
    if (intel != nullptr) {
        cout << "Socket      : " << intel->get_socket() << endl;
        cout << "Spesifikasi : " << intel->get_core() << " Core / " << intel->get_thread() << " Thread @ " << intel->get_base_clock() << " GHz" << endl;
        cout << "Generasi    : " << intel->get_generasi() << endl;
        return;
    }

    Amd* amd = dynamic_cast<Amd*>(p);
    if (amd != nullptr) {
        cout << "Socket      : " << amd->get_socket() << endl;
        cout << "Spesifikasi : " << amd->get_core() << " Core / " << amd->get_thread() << " Thread @ " << amd->get_base_clock() << " GHz" << endl;
        cout << "Arsitektur  : " << amd->get_arsitektur() << endl;
        return;
    }

    Nvidia* nvd = dynamic_cast<Nvidia*>(p);
    if (nvd != nullptr) {
        cout << "VRAM        : " << nvd->get_vram() << " GB " << nvd->get_tipe_vram() << endl;
        cout << "Daya Watt   : " << nvd->get_daya_watt() << " W" << endl;
        cout << "Seri RTX    : " << nvd->get_seri_rtx() << endl;
        return;
    }

    GcAmd* gcAmd = dynamic_cast<GcAmd*>(p);
    if (gcAmd != nullptr) {
        cout << "VRAM        : " << gcAmd->get_vram() << " GB " << gcAmd->get_tipe_vram() << endl;
        cout << "Daya Watt   : " << gcAmd->get_daya_watt() << " W" << endl;
        cout << "Seri Radeon : " << gcAmd->get_seri_radeon() << endl;
        return;
    }

    Ram* ram = dynamic_cast<Ram*>(p);
    if (ram != nullptr) {
        cout << "Kapasitas   : " << ram->get_kapasitas() << " GB" << endl;
        cout << "Kecepatan   : " << ram->get_kecepatan() << " MHz" << endl;
        cout << "Tipe DDR    : " << ram->get_tipe_ddr() << endl;
        return;
    }

    Storage* stg = dynamic_cast<Storage*>(p);
    if (stg != nullptr) {
        cout << "Kapasitas   : " << stg->get_kapasitas() << " GB" << endl;
        cout << "Tipe Storage: " << stg->get_tipe_storage() << endl;
        cout << "Kecepatan   : " << stg->get_kecepatan() << " MB/s (atau RPM)" << endl;
        cout << "Antarmuka   : " << stg->get_antarmuka() << endl;
        return;
    }
}

// Prosedur menampilkan katalog toko
void tampilkan_katalog_toko(Toko& toko) {
    cout << "=================================================================" << endl;
    cout << "          KATALOG TOKO - " << toko.get_nama_toko() << endl;
    cout << "          Lokasi: " << toko.get_lokasi() << endl;
    cout << "=================================================================" << endl;

    vector<Produk*> daftar = toko.get_list_produk();
    if (daftar.empty()) {
        cout << "Belum ada produk di dalam katalog." << endl;
    } else {
        for (size_t i = 0; i < daftar.size(); i++) {
            string kategori = "Produk";
            if (dynamic_cast<Processor*>(daftar[i]) != nullptr) kategori = "Processor";
            else if (dynamic_cast<GraphicCard*>(daftar[i]) != nullptr) kategori = "Graphic Card";
            else if (dynamic_cast<Ram*>(daftar[i]) != nullptr) kategori = "RAM";
            else if (dynamic_cast<Storage*>(daftar[i]) != nullptr) kategori = "Storage";

            cout << "\n[" << (i + 1) << "] Kategori: " << kategori << endl;
            tampilkan_detail_produk(daftar[i]);
            cout << "-----------------------------------------------------------------" << endl;
        }
    }
}

int main() {
    // Inisialisasi wadah toko via setter
    Toko toko;
    toko.set_nama_toko("J4RZZZ STORE");
    toko.set_lokasi("Bandung");

    // 1. Data statis sebelum penambahan
    Intel* p1 = new Intel("PRC-INT-01", "Core i5-14600K", "Intel", 5200000.0, 3, "LGA1700", 14, 20, 3.5, "Gen 14 Raptor Lake");
    Nvidia* p2 = new Nvidia("GPU-NVD-01", "GeForce RTX 4060 Ti", "Gigabyte", 7500000.0, 3, 8, "GDDR6", 160, "RTX 4060 Ti");
    Ram* p3 = new Ram("RAM-01", "Fury Beast RGB", "Kingston", 1100000.0, 5, 16, 3200, "DDR4");
    Storage* p4 = new Storage("STR-01", "Samsung 980 NVMe", "Samsung", 1250000.0, 5, 1000, "SSD M.2 NVMe", 3500, "PCIe 3.0");

    toko.tambah_produk(p1);
    toko.tambah_produk(p2);
    toko.tambah_produk(p3);
    toko.tambah_produk(p4);

    // Tampilkan katalog sebelum penambahan
    cout << "\n#################################################################" << endl;
    cout << "                 KONDISI DATA SEBELUM PENAMBAHAN" << endl;
    cout << "#################################################################" << endl;
    tampilkan_katalog_toko(toko);

    // 2. Penambahan data baru
    Amd* p5 = new Amd("PRC-AMD-02", "Ryzen 5 7600X", "AMD", 3800000.0, 3, "AM5", 6, 12, 4.7, "Zen 4");
    GcAmd* p6 = new GcAmd("GPU-AMD-02", "Radeon RX 7700 XT", "Sapphire", 7800000.0, 2, 12, "GDDR6", 245, "RX 7700 XT");

    toko.tambah_produk(p5);
    toko.tambah_produk(p6);

    // Tampilkan katalog sesudah penambahan
    cout << "\n#################################################################" << endl;
    cout << "                 KONDISI DATA SESUDAH PENAMBAHAN" << endl;
    cout << "#################################################################" << endl;
    tampilkan_katalog_toko(toko);

    // Bersihkan memori heap
    delete p1;
    delete p2;
    delete p3;
    delete p4;
    delete p5;
    delete p6;

    return 0;
}