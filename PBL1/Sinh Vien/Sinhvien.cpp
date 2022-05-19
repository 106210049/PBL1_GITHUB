//
// Created by HP on 5/17/2022.
//
#include <iostream>
#include <string.h>
#include "Sinhvien.h"

using namespace std;
Sinhvien::Sinhvien() // constructor
{

}

Sinhvien::~Sinhvien() // destructor
{
//    delete [] sv;
}

void Sinhvien::timKiemTheoTen(Sinhvien *sv, int &length)
{
    Sinhvien *arrayFound=new Sinhvien[100];
    char tenSV[30];
    int found = 0;
    cout<<"Nhap ten can tim kiem: ";
    fflush(stdin);
    cin.getline(tenSV,30);
    for(int i = 0; i < length; i++)
    {
        strcpy(tenSV,sv[i].name);
        if(strstr(strupr(tenSV), strupr(name)))
        {
            arrayFound[found] = sv[i];
            found++;
        }
    }
    Xuat(arrayFound, found);
}

int Sinhvien::XoatheoMSSV(Sinhvien *sv, int &length)
{
    int found = 0;
    unsigned long id=0;
    cout<<"Nhap ma so sinh vien can xoa khoi danh sach: "<<endl;
    cin>>id;
    for(int i = 0; i < length; i++) {
        if (sv[i].mssv == id) {
            found = 1;
            for (int j = i; j < length; j++) {
                sv[j] = sv[j+1];
            }
            cout << "\n Da xoa SV co ID = " << id;
            break;
        }
    }
    if (found == 0) {
        printf("\n Sinh vien co ID = %d khong ton tai.", id);
        return 0;
    } else {
        return 1;
    }
}

void Sinhvien::Update_information_MSSV(Sinhvien &sv)
{
    fflush(stdin);
    cin.getline(sv.name,30);
    cout<<"Nhap ma so sinh vien: ";
    cin>>sv.mssv;
    cout<<"Nhap gioi tinh: ";
    fflush(stdin);
    getline(cin,sv.sex);
    cout<<"Nhap ngay thang nam sinh cua sinh vien : "<<endl;
    fflush(stdin);
    getline(cin,sv.birth);
    cout<<"Nhap khoa: ";
    fflush(stdin);
    getline(cin,sv.department);
    cout<<"\n Nhap diem: ";
    cin>>sv.gpa;
}
void Sinhvien::update(Sinhvien *sv, int &length)
{
    int found=0;
    unsigned long id=0;
    cout<<"Nhap so id can tim: ";
    cin>>id;
    for(int i=0;i<length;i++)
    {
        if(sv[i].mssv=id)
        {
            found=1;
            cout<<"Cap nhat thong tin cho sinh vien co ma so sinh vien la: "<<id<<endl;
            Update_information_MSSV(sv[i]);
            break;
        }
    }
    if(found==0)
    {
        cout<<"Sinh vien vo ma so sinh vien la "<<id<<" khong ton tai "<<endl;
    }
}
void Sinhvien::Arrangeforname(Sinhvien *sv, int &length)
{
    Sinhvien temp;
    char tenSV1[30];
    char tenSV2[30];
    for(int i=0;i<length;i++)
    {
        strcpy(tenSV1,sv[i].name);
        for(int j = i+1; j < length; j++)
        {
            strcpy(tenSV2, sv[j].name);
            if(strcmp(strupr(tenSV1), strupr(tenSV2)) > 0)
            {
                temp = sv[i];
                sv[i] = sv[j];
                sv[j] = temp;
            }
        }
    }
}

void Sinhvien::xeploai(Sinhvien *sv, int &length)
{
    for(int i=0;i<length;i++)
    {
        if(sv[i].gpa>=8.5)
        {
            strcpy(sv[i].hocluc,"Xuat sac");
        }
        if(sv[i].gpa>=8)
        {
            strcpy(sv[i].hocluc,"Gioi");
        }
        if(sv[i].gpa>=6.5)
        {
            strcpy(sv[i].hocluc,"Kha");
        }
        if(sv[i].gpa>=5)
        {
            strcpy(sv[i].hocluc,"Trung binh");
        }
        else
        {
            strcpy(sv[i].hocluc,"Yeu");
        }
    }
}

void Sinhvien::Arrangeforgpa(Sinhvien *sv, int &length)
{
    Sinhvien x;
    for(int i=0;i<length;i++)
    {
        for(int j=1;j<length;j++)
        {
            if(sv[i].gpa> sv[j].gpa)
            {
                x=sv[j];
                sv[j]=sv[i];
                sv[i]=x;
            }
        }
    }
}


void Sinhvien::Arrangeformssv(Sinhvien *sv, int &length)
{
    Sinhvien x;
    for(int i=0;i<length;i++)
    {
        for(int j=1;j<length;j++)
        {
            if(sv[i].mssv>sv[j].mssv)
            {
                x=sv[j];
                sv[j]=sv[i];
                sv[i]=x;
            }
        }
    }
}

void Sinhvien::Nhap(Sinhvien *sv, int length)
{
    for(int i=0;i<length;i++)
    {
        cout<<"Nhap ho va ten cho sinh vien thu "<<i<<": ";
        fflush(stdin);
        cin.getline(sv[i].name,30);
        cout<<"Nhap ma so sinh vien: ";
        cin>>sv[i].mssv;
        cout<<"Nhap gioi tinh: ";
        fflush(stdin);
        getline(cin,sex);
        cout<<"Nhap ngay thang nam sinh cua sinh vien thu "<<i<<" : ";
        fflush(stdin);
        getline(cin,sv[i].birth);
        cout<<"Nhap khoa: ";
        fflush(stdin);
        getline(cin,sv[i].department);
        cout<<"\n Nhap diem: ";
        cin>>sv[i].gpa;
    }
}

void Sinhvien::Xuat(Sinhvien *sv, int length)
{
    for(int j=0;j<length;j++)
    {
        cout<<"----------------------------------------------"<<endl;
        cout<<"Name of student "<<j<<": "<<sv[j].name<<endl;
        cout<<"ID of student "<<j<<" : "<<sv[j].mssv<<endl;
        cout<<"Birthday of student "<< j<<" : "<<sv[j].birth<<endl;
        cout<<"Department: "<<sv[j].department<<endl;
        cout<<" Test score "<<j<<" : "<<sv[j].gpa<<endl;
        cout<<"Xep loai: "<<sv[j].hocluc<<endl;
    }
}