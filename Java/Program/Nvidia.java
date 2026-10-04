// Subclass turunan dari GraphicCard untuk lini Nvidia GeForce

public class Nvidia extends GraphicCard {
    private String seriRtx;

    public Nvidia() {
        super();
        this.seriRtx = "";
    }

    public Nvidia(String idProduk, String nama, String brand, double harga, int garansi, int vram, String tipeVram, int dayaWatt, String seriRtx) {
        super(idProduk, nama, brand, harga, garansi, vram, tipeVram, dayaWatt);
        this.seriRtx = seriRtx;
    }

    // Setter & Getter seriRtx
    public void setSeriRtx(String seriRtx) { this.seriRtx = seriRtx; }
    public String getSeriRtx() { return this.seriRtx; }
}