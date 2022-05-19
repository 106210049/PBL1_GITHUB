#include "Giang Vien/giangVien.h"
#include "Sinh Vien/Sinhvien.h"
#include "Sinh Vien/menuSV.h"
#include "Giang Vien/menuGV.h"
#include <iostream>
using namespace std;

void menu(){
    cout << "-------------------------------" << endl;
    cout << "1. Chuc nang giang vien" << endl;
    cout << "2. Chuc nang sinh vien" << endl;
    cout << "----------------------------" << endl;
}

int chooseMain(){
    int control;
    cout << "Nhap chuc nang: ";
    cin >> control;
    return control;
}

void xulyMENU(){
    switch (chooseMain()) {
        case 1:
            menuGV();
            break;
        case 2:
            menuSV();
            break;
    }
}

int main() {
//    Sinhvien *sv= new Sinhvien[2];
//    sv->Nhap(sv,2);
//    sv->Xuat(sv,2);
    menu();
    xulyMENU();
    return 0;
}


