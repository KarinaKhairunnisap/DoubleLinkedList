#include "mod7.h"

using namespace std;

int main()
{
    List L;
    adr P;
    infotype K;
    int pilihan = 0;
    createList_1301213106(L);

    pilihan = selectMenu_1301213106();

    while (pilihan != 0){
        switch(pilihan){
        case 1:
            {
            int data;
            int i = 0;
            cout<<"Jumlah data yang akan ditambahkan: ";
            cin>> data;
            while(i < data){
                string nama, jenisBarang;
                int nominalAsuransi, IDAsuransi, jumlahBarang;
                cout << "Masukkan Nama nasabah: ";
                cin>>nama;
                cout << "Masukkan jenis barang: ";
                cin>>jenisBarang;
                cout << "Masukkan ID asuransi barang: ";
                cin>>IDAsuransi;
                cout << "Masukkan nominal asuransi: ";
                cin>>nominalAsuransi;
                cout << "Masukkan jumlah barang: ";
                cin>>jumlahBarang;
                K = createElement_1301213106(nama, jenisBarang, IDAsuransi, nominalAsuransi, jumlahBarang);
                P = newElement_1301213106(K);
                insertFirst_1301213106(L,P);
                i++;
            }
            }
            break;
        case 2:
            {
            cout<<"Menampilkan semua data: "<<endl;
            showAllData_1301213106(L);}
            break;
        case 3:
            {
            cout<<"Membalik data: " << endl;
            reverseList_1301213106(L);
            }
            break;
        case 4:
            {
            cout<<"Menampilkan rata-rata: "<<endl;
            average_1301213106(L);
            }
            break;
        default:

            cout << "harap masukkan angka yang ada di menu" << endl;

        }
            char DLL = nil;
            cout<<"Kembali ke menu utama? (Y/N) : "<<endl;
            cin>> DLL;
            cout<<endl;

            if (DLL =='Y' || DLL == 'y'){
                pilihan = selectMenu_1301213106();
            }else if (DLL == 'N' || DLL == 'n'){
                pilihan = 0;
            }

}
    cout<<"ANDA TELAH KELUAR DARI PROGRAM"<<endl;
    return 0;
}
