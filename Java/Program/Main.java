// Driver program: memuat prosedur tampilan dan alur eksekusi utama

import java.text.DecimalFormat;
import java.text.DecimalFormatSymbols;
import java.util.ArrayList;
import java.util.Locale;

public class Main {

    // Helper penentu label kategori
    public static String dapatkanKategori(Produk p) {
        if (p instanceof Processor) return "Processor";
        if (p instanceof GraphicCard) return "Graphic Card";
        if (p instanceof RAM) return "RAM";
        if (p instanceof Storage) return "Storage";
        return "Produk";
    }

    // Prosedur menampilkan detail produk via getter & casting
    public static void tampilkanDetailProduk(Produk p) {
        DecimalFormatSymbols symbols = new DecimalFormatSymbols(new Locale("id", "ID"));
        DecimalFormat df = new DecimalFormat("#,###", symbols);

        System.out.println("ID Produk   : " + p.getIdProduk());
        System.out.println("Nama        : " + p.getNama());
        System.out.println("Brand       : " + p.getBrand());
        System.out.println("Harga       : Rp " + df.format(p.getHarga()));
        System.out.println("Garansi     : " + p.getGaransi() + " Tahun");

        if (p instanceof Intel) {
            Intel intel = (Intel) p;
            System.out.println("Socket      : " + intel.getSocket());
            System.out.println("Spesifikasi : " + intel.getCore() + " Core / " + intel.getThread() + " Thread @ " + intel.getBaseClock() + " GHz");
            System.out.println("Generasi    : " + intel.getGenerasi());
        } else if (p instanceof AMD) {
            AMD amd = (AMD) p;
            System.out.println("Socket      : " + amd.getSocket());
            System.out.println("Spesifikasi : " + amd.getCore() + " Core / " + amd.getThread() + " Thread @ " + amd.getBaseClock() + " GHz");
            System.out.println("Arsitektur  : " + amd.getArsitektur());
        } else if (p instanceof Nvidia) {
            Nvidia nvd = (Nvidia) p;
            System.out.println("VRAM        : " + nvd.getVram() + " GB " + nvd.getTipeVram());
            System.out.println("Daya Watt   : " + nvd.getDayaWatt() + " W");
            System.out.println("Seri RTX    : " + nvd.getSeriRtx());
        } else if (p instanceof GcAmd) {
            GcAmd gcAmd = (GcAmd) p;
            System.out.println("VRAM        : " + gcAmd.getVram() + " GB " + gcAmd.getTipeVram());
            System.out.println("Daya Watt   : " + gcAmd.getDayaWatt() + " W");
            System.out.println("Seri Radeon : " + gcAmd.getSeriRadeon());
        } else if (p instanceof RAM) {
            RAM ram = (RAM) p;
            System.out.println("Kapasitas   : " + ram.getKapasitas() + " GB");
            System.out.println("Kecepatan   : " + ram.getKecepatan() + " MHz");
            System.out.println("Tipe DDR    : " + ram.getTipeDdr());
        } else if (p instanceof Storage) {
            Storage stg = (Storage) p;
            System.out.println("Kapasitas   : " + stg.getKapasitas() + " GB");
            System.out.println("Tipe Storage: " + stg.getTipeStorage());
            System.out.println("Kecepatan   : " + stg.getKecepatan() + " MB/s (atau RPM)");
            System.out.println("Antarmuka   : " + stg.getAntarmuka());
        }
    }

    // Prosedur menampilkan katalog toko
    public static void tampilkanKatalogToko(Toko toko) {
        System.out.println("=================================================================");
        System.out.println("          KATALOG TOKO - " + toko.getNamaToko().toUpperCase());
        System.out.println("          Lokasi: " + toko.getLokasi());
        System.out.println("=================================================================");

        ArrayList<Produk> daftar = toko.getListProduk();
        if (daftar.isEmpty()) {
            System.out.println("Belum ada produk di dalam katalog.");
        } else {
            for (int i = 0; i < daftar.size(); i++) {
                Produk item = daftar.get(i);
                System.out.println("\n[" + (i + 1) + "] Kategori: " + dapatkanKategori(item));
                tampilkanDetailProduk(item);
                System.out.println("-----------------------------------------------------------------");
            }
        }
    }

    public static void main(String[] args) {
        // Inisialisasi wadah toko via setter
        Toko toko = new Toko();
        toko.setNamaToko("J4RZZZ STORE");
        toko.setLokasi("Bandung");

        // 1. Data statis sebelum penambahan
        Produk p1 = new Intel("PRC-INT-01", "Core i5-14600K", "Intel", 5200000.0, 3, "LGA1700", 14, 20, 3.5, "Gen 14 Raptor Lake");
        Produk p2 = new Nvidia("GPU-NVD-01", "GeForce RTX 4060 Ti", "Gigabyte", 7500000.0, 3, 8, "GDDR6", 160, "RTX 4060 Ti");
        Produk p3 = new RAM("RAM-01", "Fury Beast RGB", "Kingston", 1100000.0, 5, 16, 3200, "DDR4");
        Produk p4 = new Storage("STR-01", "Samsung 980 NVMe", "Samsung", 1250000.0, 5, 1000, "SSD M.2 NVMe", 3500, "PCIe 3.0");

        toko.tambahProduk(p1);
        toko.tambahProduk(p2);
        toko.tambahProduk(p3);
        toko.tambahProduk(p4);

        // Tampilkan katalog sebelum penambahan
        System.out.println("\n#################################################################");
        System.out.println("                 KONDISI DATA SEBELUM PENAMBAHAN");
        System.out.println("#################################################################");
        tampilkanKatalogToko(toko);

        // 2. Penambahan data baru
        Produk p5 = new AMD("PRC-AMD-02", "Ryzen 5 7600X", "AMD", 3800000.0, 3, "AM5", 6, 12, 4.7, "Zen 4");
        Produk p6 = new GcAmd("GPU-AMD-02", "Radeon RX 7700 XT", "Sapphire", 7800000.0, 2, 12, "GDDR6", 245, "RX 7700 XT");

        toko.tambahProduk(p5);
        toko.tambahProduk(p6);

        // Tampilkan katalog sesudah penambahan
        System.out.println("\n#################################################################");
        System.out.println("                 KONDISI DATA SESUDAH PENAMBAHAN");
        System.out.println("#################################################################");
        tampilkanKatalogToko(toko);
    }
}