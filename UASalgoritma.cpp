#include <iostream>
#include <string>
using namespace std;

struct Node
{
	const int MAX_MAHASISWA = 100;
	int NIM[100];
	string nama[100];
	int tahunMasuk[100];
	Node* next;
	int jumlahMahasiswa = 0;
};

const int MAX_MAHASISWA = 100;
int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];
int jumlahMahasiswa = 0;

Node* START = NULL;

void tambahMahasiswa() {
	int NIM;
	string nama;
	string jurusan;
	int tahunMasuk;
	Node* nodebaru = new Node();
	cout << "NIM        : ";
	cin >> NIM;
	cout << "Nama       : ";
	cin >> nama;
	cout << "Jurusan    : ";
	cin >> jurusan;
	cout << "TahunMasuk : ";
	cin >> tahunMasuk;
	nodebaru->jumlahMahasiswa = NIM;
	nodebaru->nama = nama;

	if (START == NULL || nim <= START->jumlahMahasiswa) {
		if (START != NULL && nim == START->noMhs)
		{
			cout << "NIM sudah ada" << endl;
			return;
		}

		nodebaru->next = START;
		START = nodebaru;
		return;
	}

	Node* previous = START;
	Node* current = START;
}

void tampilkanSemuaMahasiswa() {
}
	
	void algorithmacariMahasiswaByNIM();
	//isi disini
	void algorithmaSortByTahunMasuk();
};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl;
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
		{
			
			break;
		}
		case 2:
			
			break;
		case 3:
			
			break;
		case 4:
			
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
		}
		cout << endl;
	} while (pilihan != 5);
	return 0;
}//2. Berdasarkan studi kasus diatas, algoritma apa saja yang anda gunakan ? (10 Poin)
//	 = SingleLinkList
// 
//3. Jelaskan perbedaan mendasar antara algorithma stack dan queue!(15 Poin)
//	 = algoritma stack: stack menumpuk data, akhir masuk pertama keluar
//	   algoritma queue: pertama masuk pertama keluar
// 
//4. Jelaskan pada saat bagaimana harus menggunakan algorithma stack ? (15 poin)
//	 = algoritma stack dia menumpuk data, seperti menggunakan undo redo
// 
//5. Perhatikan gambar berikut : (20 Poin)//a.Seberapa banyak kedalaman yang dimiliki struktur tersebut ?
//	 = 5
// 
//b.Bagaimana cara membaca struktur pohon di atas ? (Pilih salah satu metode yaitu
//	Inorder, Preorder atau Postorder Traversal)//	 = Inorder, //