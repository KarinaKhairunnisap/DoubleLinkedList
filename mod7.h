#ifndef MOD7_H_INCLUDED
#define MOD7_H_INCLUDED

#include <iostream>
#define info(P) (P)->info
#define next(P) (P)->next
#define prev(P) (P)->prev
#define first(L) ((L).first)
#define last(L) ((L).last)
#define nil NULL
using namespace std;

struct nasabahAsuransiBarang{
    string nama, jenisBarang;
    int IDAsuransi, nominalAsuransi, jumlahBarang;
};

typedef struct nasabahAsuransiBarang infotype;
typedef struct elmList *adr;

struct elmList{
    infotype info;
    adr next;
    adr prev;
};

struct List{
    adr first;
    adr last;
};

void createList_1301213106(List &L);
adr newElement_1301213106(infotype x);
void showAllData_1301213106(List L);
void reverseList_1301213106(List &L);
void insertFirst_1301213106(List &L, adr p);

float average_1301213106(List L);

void inputAngka_1301213106(int &NUM, int x);
void tambah_1301213106(int &NUM,int x);
void printHasil_1301213106(int NUM);
int selectMenu_1301213106();

infotype createElement_1301213106(string nama, string jenisBarang, int IDAsuransi, int nominalAsuransi, int jumlahBarang);

#endif // MOD7_H_INCLUDED
