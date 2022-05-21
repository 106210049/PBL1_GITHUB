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
            menuGV();
            cout<<"Nhap phim 99 de tiep tuc chuc nang: "<<endl;
            cin>>tmp;
            if(tmp==99){
                menuSV();
            }
            else{
                cout<<"Thoat chuong trinh"<<endl;
                exit(0);
            }
            break;
        case 2:
            menuSV();
            cout<<"Nhap phim 99 de tiep tuc chuc nang: "<<endl;
            cin>>tmp;
            if(tmp==99){
                menuSV();
            }
            else{
                cout<<"Thoat chuong trinh"<<endl;
                exit(0);
            }
            break;
    }
}

int main() {
    menu();
    return 0;
}
