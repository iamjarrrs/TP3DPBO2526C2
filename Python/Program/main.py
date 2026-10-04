# Driver program: memuat prosedur tampilan dan alur eksekusi utama

from Toko import Toko
from Intel import Intel
from AMD import AMD
from Nvidia import Nvidia
from GcAmd import GcAmd
from Ram import Ram
from Storage import Storage

# Fungsi menentukan kategori utama produk
def dapatkan_kategori(item):
    if isinstance(item, (Intel, AMD)):
        return "Processor"
    elif isinstance(item, (Nvidia, GcAmd)):
        return "Graphic Card"
    elif isinstance(item, Ram):
        return "RAM"
    elif isinstance(item, Storage):
        return "Storage"
    return "Produk"

# Prosedur menampilkan detail produk via getter
def tampilkan_detail_produk(p):
    print(f"ID Produk   : {p.get_id_produk()}")
    print(f"Nama        : {p.get_nama()}")
    print(f"Brand       : {p.get_brand()}")
    print(f"Harga       : Rp {p.get_harga():,.0f}")
    print(f"Garansi     : {p.get_garansi()} Tahun")

    # Cek tipe objek untuk atribut spesifik
    if isinstance(p, Intel):
        print(f"Socket      : {p.get_socket()}")
        print(f"Spesifikasi : {p.get_core()} Core / {p.get_thread()} Thread @ {p.get_base_clock()} GHz")
        print(f"Generasi    : {p.get_generasi()}")

    elif isinstance(p, AMD):
        print(f"Socket      : {p.get_socket()}")
        print(f"Spesifikasi : {p.get_core()} Core / {p.get_thread()} Thread @ {p.get_base_clock()} GHz")
        print(f"Arsitektur  : {p.get_arsitektur()}")

    elif isinstance(p, Nvidia):
        print(f"VRAM        : {p.get_vram()} GB {p.get_tipe_vram()}")
        print(f"Daya Watt   : {p.get_daya_watt()} W")
        print(f"Seri RTX    : {p.get_seri_rtx()}")

    elif isinstance(p, GcAmd):
        print(f"VRAM        : {p.get_vram()} GB {p.get_tipe_vram()}")
        print(f"Daya Watt   : {p.get_daya_watt()} W")
        print(f"Seri Radeon : {p.get_seri_radeon()}")

    elif isinstance(p, Ram):
        print(f"Kapasitas   : {p.get_kapasitas()} GB")
        print(f"Kecepatan   : {p.get_kecepatan()} MHz")
        print(f"Tipe DDR    : {p.get_tipe_ddr()}")

    elif isinstance(p, Storage):
        print(f"Kapasitas   : {p.get_kapasitas()} GB")
        print(f"Tipe Storage: {p.get_tipe_storage()}")
        print(f"Kecepatan   : {p.get_kecepatan()} MB/s (atau RPM)")
        print(f"Antarmuka   : {p.get_antarmuka()}")

# Prosedur menampilkan katalog toko
def tampilkan_katalog_toko(toko):
    print("=" * 65)
    print(f"          KATALOG TOKO - {toko.get_nama_toko().upper()}")
    print(f"          Lokasi: {toko.get_lokasi()}")
    print("=" * 65)
    
    daftar = toko.get_list_produk()
    if not daftar:
        print("Belum ada produk di dalam katalog.")
    else:
        for idx, item in enumerate(daftar, start=1):
            print(f"\n[{idx}] Kategori: {dapatkan_kategori(item)}")
            tampilkan_detail_produk(item)
            print("-" * 65)

def main():
    # Inisialisasi wadah toko
    toko = Toko()
    toko.set_nama_toko("J4RZZZ STORE")
    toko.set_lokasi("Bandung")

    # 1. Data statis sebelum penambahan
    p1 = Intel("PRC-INT-01", "Core i5-14600K", "Intel", 5200000.0, 3, "LGA1700", 14, 20, 3.5, "Gen 14 Raptor Lake")
    p2 = Nvidia("GPU-NVD-01", "GeForce RTX 4060 Ti", "Gigabyte", 7500000.0, 3, 8, "GDDR6", 160, "RTX 4060 Ti")
    p3 = Ram("RAM-01", "Fury Beast RGB", "Kingston", 1100000.0, 5, 16, 3200, "DDR4")
    p4 = Storage("STR-01", "Samsung 980 NVMe", "Samsung", 1250000.0, 5, 1000, "SSD M.2 NVMe", 3500, "PCIe 3.0")

    toko.tambah_produk(p1)
    toko.tambah_produk(p2)
    toko.tambah_produk(p3)
    toko.tambah_produk(p4)

    # Tampilkan katalog sebelum penambahan
    print("\n" + "=" * 65)
    print("                 KONDISI DATA SEBELUM PENAMBAHAN")
    print("=" * 65)
    tampilkan_katalog_toko(toko)

    # 2. Penambahan data baru
    p5 = AMD("PRC-AMD-02", "Ryzen 5 7600X", "AMD", 3800000.0, 3, "AM5", 6, 12, 4.7, "Zen 4")
    p6 = GcAmd("GPU-AMD-02", "Radeon RX 7700 XT", "Sapphire", 7800000.0, 2, 12, "GDDR6", 245, "RX 7700 XT")

    toko.tambah_produk(p5)
    toko.tambah_produk(p6)

    # Tampilkan katalog sesudah penambahan
    print("\n" + "=" * 65)
    print("                 KONDISI DATA SESUDAH PENAMBAHAN")
    print("=" * 65)
    tampilkan_katalog_toko(toko)

if __name__ == "__main__":
    main()