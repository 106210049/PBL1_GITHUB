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
giangVien* gv = new giangVien[2];
void xulyMenu(){
    switch (chooseGV()) {
        case 1:
            gv->nhapMang(gv,2);
            break;
        case 2:
            gv->xuatMang(gv,2);
            break;
        case 3:
            gv->outSalary(gv,2);
            break;
        case 4:
            gv->outSalary_5yearsLater(gv,2);
            break;
        case 5:
            gv->update_in4(gv,2);
    }
}
void menuGV(){
    checkPass();
    cout << "------------------------" << endl;
    cout << "1. Nhap thong tin giang vien" << endl;
    cout << "2. Kiem tra thong tin giang vien" << endl;
    cout << "3. Kiem tra luong hien tai cua giang vien " << endl;
    cout << "4. Kiem tra luong sau 5 nam cua giang vien " << endl;
    cout << "5. Cap nhat(chinh sua) thong tin giang vien " << endl;
    cout << "---------------------------------" << endl;
    xulyMenu();
}
