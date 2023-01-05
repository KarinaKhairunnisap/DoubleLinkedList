#include "mod7.h"

void createList_1301213106(List &L){
    first(L) = nil;
    last(L) = nil;
}
adr newElement_1301213106(infotype x){
    adr P = new elmList;
    info(P) = x;
    next(P) = nil;
    prev(P) = nil;
    return P;
}

void showAllData_1301213106(List L){
    if(first(L) != nil){
        adr p = first(L);
        while(p != nil){
            cout << endl;
            cout << "Nama: " << info(p).nama << endl;
            cout << "Jenis barang: " << info(p).jenisBarang << endl;
            cout << "ID Asuransi: " << info(p).IDAsuransi << endl;
            cout << "Nominal Asuransi: " << info(p).nominalAsuransi << endl;
            cout << "Jumlah barang: " << info(p).jumlahBarang << endl;
            p = next(p);
        }
        cout << endl;
    }else{
        cout << "List Kosong" << endl;
    }
}

void insertFirst_1301213106(List &L, adr p){
    if(first(L) == nil){
        first(L) = p;
    }else{
        prev(p) = first(L);
        next(p) = first(L);
        first(L) = p;
    }
}

void reverseList_1301213106(List &L){
    if (first(L) != NULL && last(L) != NULL){
        adr p = last(L);
        while (p != NULL){
            cout << "Nama: " << info(p).nama << endl;
            cout << "Jenis barang: " << info(p).jenisBarang << endl;
            cout << "ID Asuransi: " << info(p).IDAsuransi << endl;
            cout << "Nominal Asuransi: " << info(p).nominalAsuransi << endl;
            cout << "Jumlah barang: " << info(p).jumlahBarang << endl;
            p = prev(p);
        }
        cout << endl;
    }else {
        cout << "List Kosong" << endl;
    }
}

float average_1301213106(List L){
    float rerata = 0;
    int i = 0;

    if(first(L) != nil){
        adr P = first(L);
        while(P != nil){
            cout<<endl;
            cout<<info(P).nominalAsuransi<<endl;
            P = next(P);

            rerata = rerata + info(P).nominalAsuransi;
            i++;
        }
        cout<<endl;
    }else{
        cout<<"List Kosong!"<<endl;
    }
    return rerata;
}


void inputAngka_1301213106(int &NUM, int x){
    NUM = x;
}

void tambah_1301213106(int &NUM, int x){
    NUM += x;
}

void printHasil_1301213106(int NUM){
    cout<<"Nilai saat ini: "<< NUM <<endl;
}

int selectMenu_1301213106(){
    cout << "===== MENU =====" << endl;
    cout << "1. Menambah N data baru" << endl;
    cout << "2. Menampilkan semua data" << endl;
    cout << "3. Membalik list" << endl;
    cout << "4. Rata-rata list" << endl;
    cout << "0. Exit" << endl;

    cout << "Masukkan menu: " << endl;
    int input = 0;
    cin >> input;

    return input;

}

infotype createElement_1301213106(string nama, string jenisBarang, int IDAsuransi, int nominalAsuransi, int jumlahBarang){
    infotype x;
    x.nama = nama;
    x.jenisBarang = jenisBarang;
    x.IDAsuransi = IDAsuransi;
    x.nominalAsuransi = nominalAsuransi;
    x.jumlahBarang = jumlahBarang;
    return x;

}


