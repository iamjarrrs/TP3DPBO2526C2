# Container class yang menerapkan komposisi (List of Produk)

class Toko:
    def __init__(self, nama_toko="", lokasi=""):
        self._nama_toko = nama_toko
        self._lokasi = lokasi
        self._list_produk = []  # Array of Objects / Komposisi

    # Setter & Getter nama toko
    def set_nama_toko(self, nama_toko):
        self._nama_toko = nama_toko
    def get_nama_toko(self):
        return self._nama_toko

    # Setter & Getter lokasi
    def set_lokasi(self, lokasi):
        self._lokasi = lokasi
    def get_lokasi(self):
        return self._lokasi

    # Setter & Getter list produk
    def set_list_produk(self, list_produk):
        self._list_produk = list_produk
    def get_list_produk(self):
        return self._list_produk

    # Method tambah produk
    def tambah_produk(self, produk):
        self._list_produk.append(produk)