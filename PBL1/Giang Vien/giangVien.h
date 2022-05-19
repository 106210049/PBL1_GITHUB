//
// Created by HP on 5/16/2022.
//

// CHƯƠNG TRÌNH THÊM DỮ LIỆU GIẢNG VIÊN
//CÁC DẠNG THÔNG TIN: ID, TÊN, NGÀY THÁNG NĂM SINH,LƯƠNG, SỈ SỐ LỚP, TÊN LỚP
// CHỨC NĂNG: TẠO THÔNG TIN CÁ NHÂN, LỚP DẠY-- XUẤT THÔNG TIN LỚP CÒN TRỐNG-- XUẤT THÔNG TIN CHẤT LƯỢNG LỚP THÔNG GIẢNG VIÊN

#ifndef PBL1_GIANGVIEN_H
#define PBL1_GIANGVIEN_H

#include <string>
#include "menuGV.h"
using namespace std;

class giangVien {
    static int count;
    int id;
    string name;
    int day, month, year;
    int salary;
    string nameClass;
    int classSize;

public:
    giangVien(int id = NULL, string name = "", int day = NULL, int month = NULL, int year = NULL, int salary = NULL, int classSize = NULL, string nameClass = "" ){
        this->id= id;
        this->name = name;
        this->day = day;
        this->month = month;
        this->year = year;
        this->salary = salary;
        this->classSize = classSize;
        this->nameClass = nameClass;
    }

    void nhap();
    void xuat();
    void nhapMang(giangVien*, int);
    void xuatMang(giangVien*, int);

    void FindAvailableClass(giangVien*, int);

};


#endif //PBL1_GIANGVIEN_H
