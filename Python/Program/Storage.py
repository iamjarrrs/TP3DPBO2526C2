# Subclass turunan dari Produk untuk media penyimpanan

from Produk import Produk

class Storage(Produk):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, kapasitas=0, tipe_storage="", kecepatan=0, antarmuka=""):
        super().__init__(id_produk, nama, brand, harga, garansi)
        self._kapasitas = kapasitas        # GB
        self._tipe_storage = tipe_storage  # SSD NVMe / HDD SATA
        self._kecepatan = kecepatan        # MB/s atau RPM
        self._antarmuka = antarmuka        # PCIe Gen 4 / SATA III

    # Setter & Getter kapasitas
    def set_kapasitas(self, kapasitas):
        self._kapasitas = kapasitas
    def get_kapasitas(self):
        return self._kapasitas

    # Setter & Getter tipe storage
    def set_tipe_storage(self, tipe_storage):
        self._tipe_storage = tipe_storage
    def get_tipe_storage(self):
        return self._tipe_storage

    # Setter & Getter kecepatan
    def set_kecepatan(self, kecepatan):
        self._kecepatan = kecepatan
    def get_kecepatan(self):
        return self._kecepatan

    # Setter & Getter antarmuka
    def set_antarmuka(self, antarmuka):
        self._antarmuka = antarmuka
    def get_antarmuka(self):
        return self._antarmuka
