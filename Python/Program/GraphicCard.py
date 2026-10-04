# Subclass turunan dari Produk untuk kategori Graphic Card
from Produk import Produk

class GraphicCard(Produk):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, vram=0, tipe_vram="", daya_watt=0):
        super().__init__(id_produk, nama, brand, harga, garansi)
        self._vram = vram              # GB
        self._tipe_vram = tipe_vram    # GDDR6 / GDDR6X
        self._daya_watt = daya_watt    # Watt

    # Setter & Getter vram
    def set_vram(self, vram):
        self._vram = vram
    def get_vram(self):
        return self._vram

    # Setter & Getter tipe vram
    def set_tipe_vram(self, tipe_vram):
        self._tipe_vram = tipe_vram
    def get_tipe_vram(self):
        return self._tipe_vram

    # Setter & Getter daya watt
    def set_daya_watt(self, daya_watt):
        self._daya_watt = daya_watt
    def get_daya_watt(self):
        return self._daya_watt
