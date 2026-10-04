# Base class untuk seluruh komponen

class Produk:
    def __init__(self, id_produk="", nama="", brand="", harga=0.0, garansi=0):
        # Inisialisasi atribut proteksi (diawali underscore)
        self._id_produk = id_produk
        self._nama = nama
        self._brand = brand
        self._harga = harga
        self._garansi = garansi # Dalam satuan Tahun

    # Setter & Getter id_produk
    def set_id_produk(self, id_produk):
        self._id_produk = id_produk
    def get_id_produk(self):
        return self._id_produk

    # Setter & Getter nama
    def set_nama(self, nama):
        self._nama = nama
    def get_nama(self):
        return self._nama

    # Setter & Getter brand
    def set_brand(self, brand):
        self._brand = brand
    def get_brand(self):
        return self._brand

    # Setter & Getter harga
    def set_harga(self, harga):
        self._harga = harga
    def get_harga(self):
        return self._harga

    # Setter & Getter garansi
    def set_garansi(self, garansi):
        self._garansi = garansi
    def get_garansi(self):
        return self._garansi