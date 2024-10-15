#ifndef PHANSO_H
#define PHANSO_H

#include <iostream>
using namespace std;

class PhanSo {
private:
    int iTu;
    int iMau;

public:
    PhanSo(int t = 0, int m = 1);

    void Nhap();
    void Xuat() const;

    PhanSo operator+(const PhanSo &p) const;
    PhanSo operator-(const PhanSo &p) const;
    PhanSo operator*(const PhanSo &p) const;
    PhanSo operator/(const PhanSo &p) const;

    bool operator==(const PhanSo &p) const;
    bool operator!=(const PhanSo &p) const;
    bool operator>(const PhanSo &p) const;
    bool operator<(const PhanSo &p) const;
    bool operator>=(const PhanSo &p) const;
    bool operator<=(const PhanSo &p) const;

    friend ostream& operator<<(ostream &out, const PhanSo &p);
    friend istream& operator>>(istream &in, PhanSo &p);
};

#endif
