// Superclass / Base Class untuk seluruh komponen komputer

public class Produk {
    protected String idProduk;
    protected String nama;
    protected String brand;
    protected double harga;
    protected int garansi; // dalam tahun

    // Konstruktor default & parameter
    public Produk() {
        this.idProduk = "";
        this.nama = "";
        this.brand = "";
        this.harga = 0.0;
        this.garansi = 0;
    }

    public Produk(String idProduk, String nama, String brand, double harga, int garansi) {
        this.idProduk = idProduk;
        this.nama = nama;
        this.brand = brand;
        this.harga = harga;
        this.garansi = garansi;
    }

    // Setter & Getter idProduk
    public void setIdProduk(String idProduk) { this.idProduk = idProduk; }
    public String getIdProduk() { return this.idProduk; }

    // Setter & Getter nama
    public void setNama(String nama) { this.nama = nama; }
    public String getNama() { return this.nama; }

    // Setter & Getter brand
    public void setBrand(String brand) { this.brand = brand; }
    public String getBrand() { return this.brand; }

    // Setter & Getter harga
    public void setHarga(double harga) { this.harga = harga; }
    public double getHarga() { return this.harga; }

    // Setter & Getter garansi
    public void setGaransi(int garansi) { this.garansi = garansi; }
    public int getGaransi() { return this.garansi; }
}