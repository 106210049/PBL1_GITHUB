#include "Giang Vien/giangVien.h"
#include "Sinh Vien/Sinhvien.h"
#include "Sinh Vien/menuSV.h"
#include "Giang Vien/menuGV.h"
#include <iostream>
using namespace std;
void xulyMENU();
void menu(){
    cout << "-------------------------------" << endl;
    cout << "1. Chuc nang giang vien" << endl;
    cout << "2. Chuc nang sinh vien" << endl;
    cout << "----------------------------" << endl;
    xulyMENU();
}
int chooseMain(){
    int control;
    cout << "Nhap chuc nang: ";
    cin >> control;
    return control;
}

void xulyMENU(){
    int tmp;
    switch (chooseMain()) {
        case 1:
            while(1)
            {
                menuGV();
                cout << "nhap so 999 de thoat!!! ---- neu ko muon thoat nhap khac 999: ";
                int tmp;
                cin >> tmp;
                if(tmp == 999) {
                    menu();
                    break;
                }
                else menuGV();
            }
            break;
        case 2:
            while(1)
            {
                menuSV();
                cout << "nhap so 999 de thoat!!! ---- neu ko muon thoat nhap khac 999: ";
                int tmp;
                cin >> tmp;
                if(tmp == 999) {
                    menu();
                    break;
                }
                else menuSV();
            }

            break;
    }
}

int main() {
    menu();
    return 0;
}
