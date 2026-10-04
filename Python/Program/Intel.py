# Subclass turunan dari Processor spesifikasi lini intel
from Processor import Processor

class Intel(Processor):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, socket="", core=0, thread=0, base_clock=0.0, generasi=""):
        super().__init__(id_produk, nama, brand, harga, garansi, socket, core, thread, base_clock)
        self._generasi = generasi

    # Setter & Getter Generasi
    def get_generasi(self):
        return self._generasi

    def set_generasi(self, generasi):
        self._generasi = generasi