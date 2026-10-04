// Subclass turunan dari Produk untuk memori utama

public class RAM extends Produk {
    protected int kapasitas;  // GB
    protected int kecepatan;  // MHz
    protected String tipeDdr; // DDR4 / DDR5

    public RAM() {
        super();
        this.kapasitas = 0;
        this.kecepatan = 0;
        this.tipeDdr = "";
    }

    public RAM(String idProduk, String nama, String brand, double harga, int garansi, int kapasitas, int kecepatan, String tipeDdr) {
        super(idProduk, nama, brand, harga, garansi);
        this.kapasitas = kapasitas;
        this.kecepatan = kecepatan;
        this.tipeDdr = tipeDdr;
    }

    // Setter & Getter kapasitas
    public void setKapasitas(int kapasitas) { this.kapasitas = kapasitas; }
    public int getKapasitas() { return this.kapasitas; }

    // Setter & Getter kecepatan
    public void setKecepatan(int kecepatan) { this.kecepatan = kecepatan; }
    public int getKecepatan() { return this.kecepatan; }

    // Setter & Getter tipeDdr
    public void setTipeDdr(String tipeDdr) { this.tipeDdr = tipeDdr; }
    public String getTipeDdr() { return this.tipeDdr; }
}