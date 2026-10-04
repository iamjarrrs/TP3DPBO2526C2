# Subclass turunan dari Produk untuk memori utama

from Produk import Produk

class Ram(Produk):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, kapasitas=0, kecepatan=0, tipe_ddr=""):
        super().__init__(id_produk, nama, brand, harga, garansi)
        self._kapasitas = kapasitas  # GB
        self._kecepatan = kecepatan  # MHz
        self._tipe_ddr = tipe_ddr    # DDR4 / DDR5

    # Setter & Getter kapasitas
    def set_kapasitas(self, kapasitas):
        self._kapasitas = kapasitas
    def get_kapasitas(self):
        return self._kapasitas

    # Setter & Getter kecepatan
    def set_kecepatan(self, kecepatan):
        self._kecepatan = kecepatan
    def get_kecepatan(self):
        return self._kecepatan

    # Setter & Getter tipe ddr
    def set_tipe_ddr(self, tipe_ddr):
        self._tipe_ddr = tipe_ddr
    def get_tipe_ddr(self):
        return self._tipe_ddr