//
// Created by HP on 5/16/2022.
//

#include <iostream>
#include "giangVien.h"

using namespace std;


int giangVien :: count = 0;

void giangVien ::nhap() {
    cout << "id: " ; cin >> id;
    cin.ignore();
    cout << "name: " ;
    cin.getline(name, 30);
    cout << "birthday: " ;
    getline(cin, birth);
    cout << "salary: " ; cin >> salary;
    cin.ignore();
    cout << "name class: " ;
    getline(cin, nameClass);
    cout << " css size: "; cin >> classSize;
    count++;
}

void giangVien ::xuat() {
    cout << "----------------------------------------------------------" << endl;
    cout << "Giang vien: " << endl;
    cout << "id: " << id << "\t" << "name: " << name << "\t" << endl;
    cout << "birthday: " << birth << endl;
    cout << "salary: " << salary << endl;
    cout << "name class: " << nameClass << "\t" << "class size: " << classSize << endl;
    cout << "----------------------------------------------------------" << endl << endl;
}

void giangVien ::nhapMang(giangVien * Giangvien, int quantity) {
    cout << endl << "Vui long nhap theo trinh tu!!!" << endl;
    for (int i = 0; i < quantity; i++){
        cout << "Giang vien " << i + 1 << ": ";
        Giangvien[i].nhap();
    }
    menuGV();
}

void giangVien ::xuatMang(giangVien *Giangvien, int quantity) {
    for (int i = 0; i < quantity; i++){
        Giangvien[i].xuat();
    }
}

void giangVien ::FindAvailableClass(giangVien *Giangvien, int quanity) {
    cout << "Lop con trong: ";
    for (int i = 0; i < quanity; i++){
        if (Giangvien[i].classSize != 0) {
            cout << "name: " << Giangvien[i].name << "\t" << "name class: " << Giangvien[i].nameClass << endl;
        }
    }
}

void giangVien ::update_in4(giangVien *Giangvien, int quantity) {
    unsigned long ID;
    cout << "nhap ID can sua: ";
    cin >> ID;
    for (int i = 0; i < quantity; i++){
        if (ID == Giangvien->id){
            Giangvien[i].nhap();
            cout << "\n Cap nhat thanh cong!!!";
            break;
        }
    }
}

void giangVien ::outSalary(giangVien *Giangvien, int quantity) {
    unsigned long ID;
    cout << "nhap ID can sua: ";
    cin >> ID;
    for (int i = 0; i < quantity; i++){
        if (ID == Giangvien->id){
            cout << "Luong hien tai cua ban: " << Giangvien->salary;
            break;
        }
    }
}

void giangVien ::outSalary_5yearsLater(giangVien * Giangvien, int quantity) {
    unsigned long ID;
    cout << "nhap ID can sua: ";
    cin >> ID;
    for (int i = 0; i < quantity; i++){
        if (ID == Giangvien->id){
            int luong = Giangvien->salary;
            luong += luong*(0.05*5);
            cout << "Luong du kien sau 5 nam cua ban: " << luong;
            break;
        }
    }
}
