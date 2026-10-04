// Container class yang menerapkan komposisi (ArrayList of Produk)

import java.util.ArrayList;

public class Toko {
    private String namaToko;
    private String lokasi;
    private ArrayList<Produk> listProduk; // Komposisi / Array of Objects

    public Toko() {
        this.namaToko = "";
        this.lokasi = "";
        this.listProduk = new ArrayList<>();
    }

    public Toko(String namaToko, String lokasi) {
        this.namaToko = namaToko;
        this.lokasi = lokasi;
        this.listProduk = new ArrayList<>();
    }

    // Setter & Getter namaToko
    public void setNamaToko(String namaToko) { this.namaToko = namaToko; }
    public String getNamaToko() { return this.namaToko; }

    // Setter & Getter lokasi
    public void setLokasi(String lokasi) { this.lokasi = lokasi; }
    public String getLokasi() { return this.lokasi; }

    // Setter & Getter listProduk
    public void setListProduk(ArrayList<Produk> listProduk) { this.listProduk = listProduk; }
    public ArrayList<Produk> getListProduk() { return this.listProduk; }

    // Method tambah produk
    public void tambahProduk(Produk p) {
        this.listProduk.add(p);
    }
}