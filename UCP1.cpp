#include <iostream>
using namespace std;

string status1, status2;
int indeks3 = 45;

void kota()
{
    int indeks1, indeks2, indeks4, indeks5;

    cout  << "Masukan indeks polusi sensor 1 Tanggerang : ";
    cin >> indeks1;
    cout << "Masukan indeks polusi 2 Tanggerang : ";
    cin >> indeks2;
    cout  << "Masukan indeks polusi sensor 1 Bekasi : ";
    cin >> indeks4;
    cout << "Masukan indeks polusi 2 Bekasi : ";
    cin >> indeks5;

    float rerata1 = (indeks1 + indeks2 + indeks3) / 3;
    if (rerata1 >= 75)
    {
        status1 = "Sehat";
    }
    else 
    {
        status1 = "Tidak Sehat";
    }

    float rerata2 = (indeks4 + indeks5 + indeks3) / 3;
    if (rerata2 >= 75)
    {
        status2 = "Sehat";
    }
    else 
    {
        status2 = "Tidak Sehat";
    } 
    
    cout << "Kota         " << "Status" << endl;
    cout << "Tanggerang   " << status1 << endl;
    cout << "Bekasi       " << status2 << endl;
}

int main()
{
    char lang;

    do {
        int ulang;
        cout << "Ingin melakukan pengulangan berapakali?" << endl;
        cin >> ulang;

        for (int i = 0; i < ulang; i++)
        {
            kota();
        }

        cout << "Apakah Anda ingin mengulang memasukkan data mahasiswa baru? (Y/N): ";
        cin >> ulang;
    } while (lang == 'Y' || lang == 'y');  // Loop terus menerus sampai pengguna memasukkan selain 'Y' atau 'y'

    return 0;
}





/*
1. Contoh deklarasi variabel :
    - int = variabel yang digunakan untuk bilangan bulat.
    - string = variabel yang digunakan untuk text atau kalimat.
    - float = variabel yang digunakan untuk bilangan berdesimal.

2. Fungsi :
#include <iostream>
using namespace std;

string nama;
int nAdidas, nPuma, nNB, nCompass, nNike;
int hAdidas = 300, hPuma = 250, hNB = 150, hCompass = 150, hNike = 350;

void input ()
{
    cout << "Masukan jumlah Adidas =";
    cin >> nAdidas;

    cout << "Masukan jumlah Puma =";
    cin >> nPuma;
    
    cout << "Masukan jumlah New Balance =";
    cin >> nNB;

    cout << "Masukan jumlah Compass =";
    cin >> nCompass;

    cout << "Masukan jumlah NIke =";
    cin >> nNike;
}

int totalHarga ()
{
    return (nAdidas * hAdidas) + (nPuma *hPuma) + (nNB * hNB) +(nNike * hNike);
}

void display ()
{
    cout << endl;
    cout << "========================" << endl;
    cout << endl;
    cout << "Jumlah puma =" << nPuma << endl;
    cout << "JUmlah nAdidas" << nAdidas << endl;
    cout << "Total Harga = Rp." << totalHarga() << endl;
}

int main ()
{
    input ();
    display ();
}

3. Looping :
int main()
{
    int i;
    string nama [5];

    for (i = 0; i < 7; i++)
    {
        cout << i << ". " << "Aswin" << endl;
    }

    for (i = 0; i < 5; i++)
    {
        cout << "Masukan nama = ";
        cin >> nama[i];
    }

        cout << endl;
        cout << "====================" << endl;
        cout << "KUMPULAN NAMA - NAMA" << endl;

    for (i = 0; i < 5; i++)
    {
        cout << "Namanya adalah " << nama[i] << endl;
    }
}

4. Conditional :
if (nilaiAkhir >= 60.0) 
{
    cout << "Siswa lulus dengan nilai " << nilaiAkhir << std::endl;
}
else 
{
    cout << "Siswa tidak lulus dengan nilai " << nilaiAkhir << std::endl;
}

5. Struct :
struct mahasiswa 
{
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};
*/