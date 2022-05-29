//
// Created by HP on 5/17/2022.
//
#ifndef PBL1_SINHVIEN_H
#define PBL1_SINHVIEN_H
#include "menuSV.h"
#include "string.h"
#include "../Giang Vien/giangVien.h"

class Sinhvien: public Person{
    friend class giangVien;
    char hocluc[100];
    unsigned long mssv;
    unsigned long gpa;
public:
    void Nhap(Sinhvien *sv, int &length);
    void Xuat(Sinhvien *sv, int &length);
    void Update_information_MSSV(Sinhvien &sv);
    void update(Sinhvien *sv, int &length);
    void Arrangeforgpa(Sinhvien *sv, int &length);
    void Arrangeformssv(Sinhvien *sv, int &length);
    void Arrangeforname(Sinhvien *sv, int &length);
    void timKiemTheoTen(Sinhvien *sv, int &length);
    void xeploai(Sinhvien *sv, int &length);
    int XoatheoMSSV(Sinhvien *sv, int &length);

};

#endif //PBL1_SINHVIEN_H
