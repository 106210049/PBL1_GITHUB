//
// Created by HP on 5/17/2022.
//

#include "menuGV.h"
#include <iostream>

using namespace std;

void checkPass(){
    string pass;
    do{
        cout << "nhap pass de su dung: " ;
        cin >> pass;
    } while (pass != "12345");
}

int chooseGV(){
    int control;
        cout << "Nhap chuc nang: ";
        cin >> control;
    return control;
}

void xulyMenu(){
    giangVien* gv = new giangVien[2];
    switch (chooseGV()) {
        case 1:
            gv->nhapMang(gv,2);
            break;
        case 2:
            gv->xuatMang(gv,2);
            break;
    }
}
void menuGV(){
    checkPass();
    cout << "------------------------" << endl;
    cout << "1. Nhap thong tin giang vien" << endl;
    cout << "2. Kiem tra thong tin giang vien" << endl;
    cout << "---------------------------------" << endl;
    xulyMenu();
}
