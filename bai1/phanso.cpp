#include "phanso.h"

PhanSo::PhanSo(int t, int m) : iTu(t), iMau(m) {
    if (m == 0) iMau = 1; // Prevent division by zero
}

void PhanSo::Nhap() {
    cout << "Nhap tu so: ";
    cin >> iTu;
    cout << "Nhap mau so: ";
    cin >> iMau;
    if (iMau == 0) iMau = 1; // Prevent division by zero
}

void PhanSo::Xuat() const {
    if (iMau == 1) cout << iTu;
    else cout << iTu << "/" << iMau;
}

// Operator overloading
PhanSo PhanSo::operator+(const PhanSo &p) const {
    int t = iTu * p.iMau + iMau * p.iTu;
    int m = iMau * p.iMau;
    return PhanSo(t, m);
}

PhanSo PhanSo::operator-(const PhanSo &p) const {
    int t = iTu * p.iMau - iMau * p.iTu;
    int m = iMau * p.iMau;
    return PhanSo(t, m);
}

PhanSo PhanSo::operator*(const PhanSo &p) const {
    return PhanSo(iTu * p.iTu, iMau * p.iMau);
}

PhanSo PhanSo::operator/(const PhanSo &p) const {
    return PhanSo(iTu * p.iMau, iMau * p.iTu);
}

bool PhanSo::operator==(const PhanSo &p) const {
    return iTu * p.iMau == iMau * p.iTu;
}

bool PhanSo::operator!=(const PhanSo &p) const {
    return !(*this == p);
}

bool PhanSo::operator>(const PhanSo &p) const {
    return iTu * p.iMau > iMau * p.iTu;
}

bool PhanSo::operator<(const PhanSo &p) const {
    return iTu * p.iMau < iMau * p.iTu;
}

bool PhanSo::operator>=(const PhanSo &p) const {
    return !(*this < p);
}

bool PhanSo::operator<=(const PhanSo &p) const {
    return !(*this > p);
}

// Friend functions for stream insertion and extraction
ostream& operator<<(ostream &out, const PhanSo &p) {
    if (p.iMau == 1) out << p.iTu;
    else out << p.iTu << "/" << p.iMau;
    return out;
}

istream& operator>>(istream &in, PhanSo &p) {
    cout << "Nhap tu so: ";
    in >> p.iTu;
    cout << "Nhap mau so: ";
    in >> p.iMau;
    if (p.iMau == 0) p.iMau = 1; // Prevent division by zero
    return in;
}
