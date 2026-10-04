# Subclass turunan dari GraphicCard untuk lini AMD Radeon

from GraphicCard import GraphicCard

class GcAmd(GraphicCard):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, vram=0, tipe_vram="", daya_watt=0, seri_radeon=""):
        super().__init__(id_produk, nama, brand, harga, garansi, vram, tipe_vram, daya_watt)
        self._seri_radeon = seri_radeon

    # Setter & Getter seri radeon
    def set_seri_radeon(self, seri_radeon):
        self._seri_radeon = seri_radeon
    def get_seri_radeon(self):
        return self._seri_radeon
