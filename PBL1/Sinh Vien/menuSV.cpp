//
// Created by HP on 5/16/2022.
//

#include <iostream>
#include "menuSV.h"
using namespace std;

int hamchucnang(int &chucnang)
{
    int length=2;
    Sinhvien *sv=new Sinhvien[length];
    Chucnang:
    switch(chucnang)
    {
        case 0:
            exit(0);
            break;
        case 1:
            sv->update(sv,length);
            break;
        case 2:
            sv->Arrangeforgpa(sv,length);
            cout<<"Chuc nang 2 da duoc goi"<<endl;
            break;
        case 3:
            sv->Arrangeformssv(sv,length);
            break;
        case 4:
            sv->Arrangeforname(sv,length);
            break;
        case 5:
            sv->timKiemTheoTen(sv,length);
            break;
        case 6:
            sv->xeploai(sv,length);
            break;
        case 7:
            sv->XoatheoMSSV(sv,length);
            break;
        default:
            cout<<"Khong co chuc nang tuong ung: "<<endl;
            cout<<"Nhap 1 de tiep tuc: ";
            int temp;
            cin>>temp;
            if(temp==1)
            {
                goto Chucnang;
            }
            else{
                return 1;
            }
    }
}


int menuSV(){
    int chucnang;
    cout<<"Chon cach sap xep: "<<endl;
    cout<<"================================================"<<endl;
    cout<<"0. Thoat chuong trinh."<<endl;
    cout<<"1. Cap nhat thong tin sinh vien theo ma so sinh vien: "<<endl;
    cout<<"2. Sap xep sinh vien theo diem GPA"<<endl;
    cout<<"3. Sap xep sinh vien theo ma so sinh vien: "<<endl;
    cout<<"4. Sap xep sinh vien theo ten "<<endl;;
    cout<<"5. Tim kiem thong tin sinh vien theo ten: "<<endl;
    cout<<"6. Xep loai cho sinh vien: "<<endl;
    cout<<"7. Xoa thong tin sinh vien theo ma so sinh vien "<<endl;
    cout<<"================================================"<<endl;
    cin>>chucnang;
    hamchucnang(chucnang);
}