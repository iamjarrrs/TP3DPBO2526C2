// Subclass turunan dari Produk untuk kategori CPU

public class Processor extends Produk {
    protected String socket;
    protected int core;
    protected int thread;
    protected double baseClock; // GHz

    public Processor() {
        super();
        this.socket = "";
        this.core = 0;
        this.thread = 0;
        this.baseClock = 0.0;
    }

    public Processor(String idProduk, String nama, String brand, double harga, int garansi, String socket, int core, int thread, double baseClock) {
        super(idProduk, nama, brand, harga, garansi);
        this.socket = socket;
        this.core = core;
        this.thread = thread;
        this.baseClock = baseClock;
    }

    // Setter & Getter socket
    public void setSocket(String socket) { this.socket = socket; }
    public String getSocket() { return this.socket; }

    // Setter & Getter core
    public void setCore(int core) { this.core = core; }
    public int getCore() { return this.core; }

    // Setter & Getter thread
    public void setThread(int thread) { this.thread = thread; }
    public int getThread() { return this.thread; }

    // Setter & Getter baseClock
    public void setBaseClock(double baseClock) { this.baseClock = baseClock; }
    public double getBaseClock() { return this.baseClock; }
}