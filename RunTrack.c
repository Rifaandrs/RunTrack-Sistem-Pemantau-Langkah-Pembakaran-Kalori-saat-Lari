#include <stdio.h>

void fungsiUntukPelari() {
    
    // Array pada kelompok kalori patokan
    int kaloriPatokan[] = {50, 45, 125, 110, 130, 115, 90, 80};

    //Deklarasi Variabel
    int kelompokUsia;
    int jenisKelamin;
    int kalori;
    float kaloriTerbakar;     // satuan kal
    float waktu;             // dalam menit
    float jarak;            // dalam meter
    float kecepatan;       // dalam m/s

printf("\nRUN TRACK : SISTEM PEMANTAU KECEPATAN, LANGKAH, DAN PEMBAKARAN KALORI PADA SAAT LARI\n");
printf("====================================================================================\n\n");

 // Algoritma pendataan pelari
    printf("\n****************** JENIS KELAMIN ******************\n");
    printf("1.Laki-laki\n2.Perempuan\n");
    printf("Masukkan jenis kelamin : ");

// Input Jenis Kelamin berdasarkan 1 = laki-laki atau 2 = perempuan
    while (jenisKelamin < 1 || jenisKelamin > 2)
    {
        scanf("%d", &jenisKelamin);
        if (jenisKelamin < 1 || jenisKelamin > 2)
        {
            printf("Masukkan input sesuai dengan ketentuan! (1 = Laki-laki, 2 = Perempuan): ");
        }
    }
    
    printf("\n"); //untuk memisahkan antara jenis kelamin dan kelompok usia

// Input Kelompok Usia berdasarkan 1 = anak-anak, 2 = Remaja, 3 = Dewasa, atau 4 = Lansia
    printf("***************** KELOMPOK USIA ****************** \n");
    printf("1.Anak-anak\n2.Remaja\n3.Dewasa\n4.Lansia\n");
    printf("Masukkan kelompok usia : ");

    while (kelompokUsia < 1 || kelompokUsia > 4)
    {
        scanf("%d", &kelompokUsia);
        if (kelompokUsia < 1 || kelompokUsia > 4)
        {
             printf("Masukan input Sesuai dengan ketentuan! (1 = Anak-anak, 2 = Remaja, 3 = Dewasa, 4 = Lansia): ");
        }
    }
    // Disini terdapat looping untuk input kembali apabila user menginput > 1 atau > 4


    // Untuk input pada kalori
    // Yang merupakan kalori yang keluar per 10 menit sekali
    if ((jenisKelamin == 1 && kelompokUsia == 1))
    {
        kalori = kaloriPatokan[0];
    }
    else if ((jenisKelamin == 2 && kelompokUsia == 1))
    {
        kalori = kaloriPatokan[1];
    }
    else if ((jenisKelamin == 1 && kelompokUsia == 2))
    {
        kalori = kaloriPatokan[2];
    }
    else if ((jenisKelamin == 2 && kelompokUsia == 2))
    {
        kalori = kaloriPatokan[3];
    }
    else if ((jenisKelamin == 1 && kelompokUsia == 3))
    {
        kalori = kaloriPatokan[4];
    }
    else if ((jenisKelamin == 2 && kelompokUsia == 3))
    {
        kalori = kaloriPatokan[5];
    }
    else if ((jenisKelamin == 1 && kelompokUsia == 4))
    {
        kalori = kaloriPatokan[6];
    }
    else if ((jenisKelamin == 2 && kelompokUsia == 4))
    {
        kalori = kaloriPatokan[7];
    }


 // 1. Fungsi menghitung kecepatan dan langkah

    // Input jarak
    printf("\n************* INPUT JARAK DALAM METER *************");
    do
    {
        printf("\nMasukkan jarak yang ditempuh: ");
        scanf("%f", &jarak);
        if (jarak <= 0)
        {
            printf("Input tidak boleh <= 0: ");
        } 
    } while (jarak <= 0);
    // Disini terdapat looping untuk input kembali apabila inputnya <= 0


    // Input waktu
    printf("\n************* INPUT WAKTU DALAM MENIT *************");
    do{
        printf("\nMasukkan waktu yang ditempuh: ");
        scanf("%f", &waktu);
        
        if (waktu <= 0){
            printf("Input tidak boleh <= 0: ");
        }
    } while (waktu <= 0);
    // Disini terdapat looping untuk input kembali apabila inputnya <= 0


  // Algoritma menghitung kecepatan
    // Konversi waktu dari menit ke detik (karena output nya adalah m/s)
    float waktuDetik = waktu * 60;
    // Hitung kecepatan (m/s)
    kecepatan = jarak / waktuDetik;
    // Output kecepatan, memakai 2 angka dibelakang koma
    printf("\n- Kecepatan kamu berlari: %.2f m/s.", kecepatan);
    
  // Algoritma menghitung langkah
    float langkah;              // langkah
    float satuLangkah = 0.8;   // satu langkah = 0,8 meter 

    // Hitung langkah
    langkah = jarak / satuLangkah;
    //Output langkah
    printf("\n- Anda melangkah sebanyak %.f langkah.", langkah);

 // 2. kaloriTerbakar
  //Algoritma menghitung kalori terbakar
    kaloriTerbakar = waktu / 10 * kalori;  
    // Menghitung kalori yang terbakar berdasarkan waktu per 10 menit dan kalori patokan
    printf("\n- Kalori yang terbakar sebanyak %.f kal.\n", kaloriTerbakar);

    return;
}

int main(){

    char kondisional; 
    // Di pakai untuk kondisi user melanjutkan sistem atau memberhentikan sistem

do
    {
        fungsiUntukPelari();
        // Untuk memanggil fungsi yang di dalamnya ada untuk menghitung kecepatan, langkah, dan kalori terbakar

        while (1)
        {
            printf("\n Apakah ingin lanjut menghitung lagi?");
            printf("\n YA/TIDAK");
            printf("\n 1.YA atau 2.TIDAK: ");

            scanf(" %c", &kondisional);
            
            // Disini terdapat kondisional 1 untuk user melanjutkan sistem atau 2 untuk memberhentikan sistem
            if (kondisional == '1' || kondisional == '2')
            {
                break;
            } else {
                printf("\nTidak Valid. Tolong masukkan Ya = 1 atau Tidak = 2: \n");
            }
             
        }

    } while (kondisional == '1');
// Memakai do while karena, minimal program ini dipakai untuk 1 kali, lalu di cek apakah user masih ingin memakai program atau tidak

    
    
    return 0;
}