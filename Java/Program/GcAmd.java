// Subclass turunan dari GraphicCard untuk lini AMD Radeon

public class GcAmd extends GraphicCard {
    private String seriRadeon;

    public GcAmd() {
        super();
        this.seriRadeon = "";
    }

    public GcAmd(String idProduk, String nama, String brand, double harga, int garansi, int vram, String tipeVram, int dayaWatt, String seriRadeon) {
        super(idProduk, nama, brand, harga, garansi, vram, tipeVram, dayaWatt);
        this.seriRadeon = seriRadeon;
    }

    // Setter & Getter seriRadeon
    public void setSeriRadeon(String seriRadeon) { this.seriRadeon = seriRadeon; }
    public String getSeriRadeon() { return this.seriRadeon; }
}