// Subclass turunan dari Produk untuk media penyimpanan

public class Storage extends Produk {
    protected int kapasitas;       // GB
    protected String tipeStorage;  // SSD NVMe / HDD SATA
    protected int kecepatan;       // MB/s atau RPM
    protected String antarmuka;    // PCIe Gen 4 / SATA III

    public Storage() {
        super();
        this.kapasitas = 0;
        this.tipeStorage = "";
        this.kecepatan = 0;
        this.antarmuka = "";
    }

    public Storage(String idProduk, String nama, String brand, double harga, int garansi, int kapasitas, String tipeStorage, int kecepatan, String antarmuka) {
        super(idProduk, nama, brand, harga, garansi);
        this.kapasitas = kapasitas;
        this.tipeStorage = tipeStorage;
        this.kecepatan = kecepatan;
        this.antarmuka = antarmuka;
    }

    // Setter & Getter kapasitas
    public void setKapasitas(int kapasitas) { this.kapasitas = kapasitas; }
    public int getKapasitas() { return this.kapasitas; }

    // Setter & Getter tipeStorage
    public void setTipeStorage(String tipeStorage) { this.tipeStorage = tipeStorage; }
    public String getTipeStorage() { return this.tipeStorage; }

    // Setter & Getter kecepatan
    public void setKecepatan(int kecepatan) { this.kecepatan = kecepatan; }
    public int getKecepatan() { return this.kecepatan; }

    // Setter & Getter antarmuka
    public void setAntarmuka(String antarmuka) { this.antarmuka = antarmuka; }
    public String getAntarmuka() { return this.antarmuka; }
}