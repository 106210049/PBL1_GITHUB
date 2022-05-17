// Chuc nang: nhap xuat thong tin giang vien, truy xuat lop con trong
#include<iostream>
#include<windows.h>
#include "Person.h"
using namespace std;

class GiangVien:public person
{
    private:
        unsigned long ID;
        unsigned long Salary;
        int classSize;
        string nameClass;
    public:
        GiangVien();
        ~GiangVien();
        void nhapgv();
        void xuatgv();
        void nhapMang(GiangVien* gv, int);
        void xuatMang(GiangVien*gv, int);
        void FindAvailableClass(GiangVien*gv, int);
        
};
GiangVien *gv;
GiangVien::GiangVien()
{
    gv=new GiangVien[siso];
    name=new char[strlen(name)+1];
}
GiangVien::~GiangVien()
{
    delete[] gv;
    delete[] name;
}
void GiangVien::nhapgv() {
    cout << "id: " ; cin >> ID;
    fflush(stdin);
    cout << "name: " ;cin>>name;
    fflush(stdin);
    cout << "birthday: " ; getline(cin,birth); 
    cout << "salary: " ; cin >> Salary;
    fflush(stdin);
    cout << "name class: " ; getline(cin,nameClass);
    cout << " class size: " ; cin >> classSize;
}

void GiangVien ::nhapMang(GiangVien * gv, int quantity) 
{
    cout << endl << "Vui long nhap theo trinh tu!!!" << endl;
    for (int i = 0; i < quantity; i++){
        cout << "Giang vien " << i + 1 << ": " << endl;
        gv[i].nhapgv();
    }
}
void GiangVien ::xuatMang(GiangVien *gv, int quantity) {
    for (int i = 0; i < quantity; i++){
        gv[i].xuatgv();
    }
}
void GiangVien ::FindAvailableClass(GiangVien *gv, int quanity) {
    cout << "Lop con trong: ";
    for (int i = 0; i < quanity; i++){
        if (gv[i].classSize != 0) {
            cout << "name: " << gv[i].name << "\t" << "name class: " << gv[i].nameClass << endl;
        }
    }
}
void GiangVien ::xuatgv() {
    cout << "----------------------------------------------------------" << endl;
    cout << "Giang vien: " << endl;
    cout << "id: " << ID << "\t" << "name: " << name << "\t" << endl;
    cout << "birthday: " <<birth<< endl;
    cout << "salary: " << Salary << endl;
    cout << "name class: " << nameClass << "\t" << "class size: " << classSize << endl;
    cout << "----------------------------------------------------------" << endl << endl;
}