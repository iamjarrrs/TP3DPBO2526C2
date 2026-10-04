# Subclass turunan dari produk untuk kategori processor
from Produk import Produk

class Processor(Produk):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, socket="", core=0, thread=0, base_clock=0.0):
        super().__init__(id_produk, nama, brand, harga, garansi)
        self._socket = socket
        self._core = core
        self._thread = thread
        self._base_clock = base_clock # dalam satuan GHz

    # Setter & Getter socket
    def set_socket(self, socket):
        self._socket = socket
    def get_socket(self):
        return self._socket

    # Setter & Getter core
    def set_core(self, core):
        self._core = core
    def get_core(self):
        return self._core

    # Setter & Getter thread
    def set_thread(self, thread):
        self._thread = thread
    def get_thread(self):
        return self._thread

    # Setter & Getter base_clock
    def set_base_clock(self, base_clock):
        self._base_clock = base_clock
    def get_base_clock(self):
        return self._base_clock