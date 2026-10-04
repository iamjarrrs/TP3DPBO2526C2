# Tugas Praktikum 3 DPBO — Hierarchical Inheritance & Komposisi

## Janji

Saya Afit Fajar Rianto dengan NIM 2501826 mengerjakan Tugas Praktikum 3 pada Mata Kuliah Desain dan Pemrograman Berorientasi Objek (DPBO) untuk keberkahan-Nya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

---

# Deskripsi Program

Program ini merupakan implementasi konsep **Object-Oriented Programming (OOP)** dengan menerapkan **Hierarchical Inheritance** (pewarisan bercabang bertingkat) serta **Composition** menggunakan **Array of Objects**.

Studi kasus yang digunakan adalah **Sistem Katalog Toko Komputer/PC**, yang mengelola berbagai macam komponen perangkat keras dengan total 10 buah class.

---

# Struktur File

```text
TP3DPBO2526C2/
├── CPP/
│   ├── Dokumentasi/
│   │   └── cpp.png
│   └── Program/
│       ├── Produk.cpp
│       ├── Processor.cpp
│       ├── Intel.cpp
│       ├── Amd.cpp
│       ├── GraphicCard.cpp
│       ├── Nvidia.cpp
│       ├── GcAmd.cpp
│       ├── Storage.cpp
│       ├── Ram.cpp
│       ├── Toko.cpp
│       └── main.cpp
│
├── Python/
│   ├── Dokumentasi/
│   │   └── python.png
│   └── Program/
│       ├── Produk.py
│       ├── Processor.py
│       ├── Intel.py
│       ├── AMD.py
│       ├── GraphicCard.py
│       ├── Nvidia.py
│       ├── GcAmd.py
│       ├── Storage.py
│       ├── RAM.py
│       ├── Toko.py
│       └── main.py
│
├── diagram/
│   └── class_diagram.png
├── .gitignore
└── README.md
```
---

# Desain / Class Diagram

Class diagram yang digunakan dalam program adalah sebagai berikut:

<div align="center">
    <img src="diagram/TP3.drawio.png" alt="Diagram" style="width: 90%;">
</div>

Selain hierarki produk di atas, terdapat class `Toko` yang menerapkan konsep **Komposisi (Composition)**, di mana satu objek Toko menampung kumpulan banyak objek produk `(List of Objects / vector<Produk*>)`.

Program ini dibuat untuk mensimulasikan pencatatan stok barang di katalog toko:
- Menampilkan kondisi katalog sebelum penambahan (data statis awal).
- Menampilkan kondisi katalog sesudah penambahan objek baru secara dinamis.

Seluruh atribut dibungkus secara aman (encapsulation) menggunakan Setter dan Getter. Logika tampilan dipusatkan pada fungsi/prosedur di file `main` untuk menjaga kemurnian representasi data class.

- `Produk` → Parent / Base Superclass
Class dasar yang memuat informasi identitas umum dari seluruh barang yang dijual di toko hardware.
- `Processor`, `GraphicCard`, `Storage`, `RAM` → Child Class Level 1
Empat cabang utama yang mewarisi class `Produk` serta menambahkan karakteristik spesifik dari tiap kategori perangkat keras.
- `Intel`, `AMD`, `Nvidia`, `GcAmd` → Child Class Level 2
Kelas turunan yang lebih mendalam untuk merepresentasikan lini dan arsitektur spesifik pabrikan (vendor-specific).
- `Toko` → Container Class (Komposisi)
Class yang berperan sebagai wadah utama dan memiliki relasi komposisi (has-a) dengan menampung array of objects dari pointer/objek `Produk`.

Program diimplementasikan dalam 3 bahasa pemrograman:
- Python
- C++
- Java

---

