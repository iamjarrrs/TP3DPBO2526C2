// Subclass turunan dari Produk untuk kategori Kartu Grafis

public class GraphicCard extends Produk {
    protected int vram;          // GB
    protected String tipeVram;   // GDDR6 / GDDR6X
    protected int dayaWatt;      // Watt

    public GraphicCard() {
        super();
        this.vram = 0;
        this.tipeVram = "";
        this.dayaWatt = 0;
    }

    public GraphicCard(String idProduk, String nama, String brand, double harga, int garansi, int vram, String tipeVram, int dayaWatt) {
        super(idProduk, nama, brand, harga, garansi);
        this.vram = vram;
        this.tipeVram = tipeVram;
        this.dayaWatt = dayaWatt;
    }

    // Setter & Getter vram
    public void setVram(int vram) { this.vram = vram; }
    public int getVram() { return this.vram; }

    // Setter & Getter tipeVram
    public void setTipeVram(String tipeVram) { this.tipeVram = tipeVram; }
    public String getTipeVram() { return this.tipeVram; }

    // Setter & Getter dayaWatt
    public void setDayaWatt(int dayaWatt) { this.dayaWatt = dayaWatt; }
    public int getDayaWatt() { return this.dayaWatt; }
}