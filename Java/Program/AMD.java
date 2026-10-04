// Subclass turunan dari Processor spesifik lini AMD

public class AMD extends Processor {
    private String arsitektur;

    public AMD() {
        super();
        this.arsitektur = "";
    }

    public AMD(String idProduk, String nama, String brand, double harga, int garansi, String socket, int core, int thread, double baseClock, String arsitektur) {
        super(idProduk, nama, brand, harga, garansi, socket, core, thread, baseClock);
        this.arsitektur = arsitektur;
    }

    // Setter & Getter arsitektur
    public void setArsitektur(String arsitektur) { this.arsitektur = arsitektur; }
    public String getArsitektur() { return this.arsitektur; }
}