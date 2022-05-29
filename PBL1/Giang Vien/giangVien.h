//
// Created by HP on 5/16/2022.
//

// CHƯƠNG TRÌNH THÊM DỮ LIỆU GIẢNG VIÊN
//CÁC DẠNG THÔNG TIN: ID, TÊN, NGÀY THÁNG NĂM SINH,LƯƠNG, SỈ SỐ LỚP, TÊN LỚP
// CHỨC NĂNG: TẠO THÔNG TIN CÁ NHÂN, LỚP DẠY-- XUẤT THÔNG TIN LỚP CÒN TRỐNG-- XUẤT THÔNG TIN CHẤT LƯỢNG LỚP THÔNG GIẢNG VIÊN

#ifndef PBL1_GIANGVIEN_H
#define PBL1_GIANGVIEN_H
#include "../Person.h"
#include <string>
#include "menuGV.h"
using namespace std;

class giangVien : public Person{
    static int count;
    unsigned long id;
    int salary;
    string nameClass;
    int classSize;

public:
    void nhap();
    void xuat();
    void nhapMang(giangVien*, int &);
    void xuatMang(giangVien*, int);
    void update_in4(giangVien*, int);
    void xoa_Giangvien(giangVien*,int &);
    void outSalary(giangVien*, int);
    void outSalary_5yearsLater(giangVien*, int);
    void outStudent(giangVien*);
    void FindAvailableClass(giangVien*, int);

};
//giangVien* gv = new giangVien[2];

#endif //PBL1_GIANGVIEN_H
