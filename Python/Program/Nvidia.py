# Subclass turunan dari GraphicCard untuk lini Nvidia

from GraphicCard import GraphicCard

class Nvidia(GraphicCard):
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0, vram=0, tipe_vram="", daya_watt=0, seri_rtx=""):
        super().__init__(id_produk, nama, brand, harga, garansi, vram, tipe_vram, daya_watt)
        self._seri_rtx = seri_rtx

    # Setter & Getter Seri RTX
    def set_seri_rtx(self, seri_rtx):
        self._seri_rtx = seri_rtx
    def get_seri_rtx(self):
        return self._seri_rtx
