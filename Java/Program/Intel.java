// Subclass turunan dari Processor spesifik lini Intel

public class Intel extends Processor {
    private String generasi;

    public Intel() {
        super();
        this.generasi = "";
    }

    public Intel(String idProduk, String nama, String brand, double harga, int garansi, String socket, int core, int thread, double baseClock, String generasi) {
        super(idProduk, nama, brand, harga, garansi, socket, core, thread, baseClock);
        this.generasi = generasi;
    }

    // Setter & Getter generasi
    public void setGenerasi(String generasi) { this.generasi = generasi; }
    public String getGenerasi() { return this.generasi; }
}