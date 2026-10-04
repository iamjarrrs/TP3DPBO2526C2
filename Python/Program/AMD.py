# Subclass turunan dari Processor spesifikasi lini AMD

from Processor import Processor

class AMD(Processor):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, socket="", core=0, thread=0, base_clock=0.0, arsitektur=""):
        super().__init__(id_produk, nama, brand, harga, garansi, socket, core, thread, base_clock)
        self._arsitektur = arsitektur

    # Setter & Getter arsitektur
    def get_arsitektur(self):
        return self._arsitektur

    def set_arsitektur(self, arsitektur):
        self._arsitektur = arsitektur