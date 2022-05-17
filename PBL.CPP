// tham khao thanh vien tinh
#include <iostream>
#include<windows.h>
#include<string.h>
#include "giangvien.cpp"
#include "sinhvien.cpp"
using namespace std;

int Chucnang(Sinhvien *sv, int &chucnang, int &siso)
{
    Chucnang:
    switch(chucnang)
    {
        case 0:
            exit(0);
            break;
        case 1:
            sv->update(sv,siso);
            break;
        case 2:
            sv->Arrangeforgpa(sv,siso);
            break;
        case 3:
            sv->Arrangeformssv(sv,siso);
            break;
        case 4:
            sv->Arrangeforname(sv,siso);
            break;
        case 5:
            sv->timKiemTheoTen(sv,siso);
            break;
        case 6:
            sv->xeploai(sv,siso);
            break;
        case 7:
            sv->XoatheoMSSV(sv,siso);
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
    return chucnang;
}

void chonloc(int &chucnang)
{
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
}

int main()
{
    system("cls");
    cout<<"Init the number of student: ";
    cin>>siso;
    int chucnang;
    sv->Nhap(sv,siso);
    cout<<"Nhap tu chuc nang de chon chuc nang: "<<endl;
    string temp;
    cin>>temp;
    while(temp =="chucnang")
    {
        chonloc(chucnang);
        Chucnang(sv,chucnang,siso);
    }
}