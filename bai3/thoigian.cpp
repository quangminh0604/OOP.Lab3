#include "thoigian.h"

ThoiGian::ThoiGian() : iGio(0), iPhut(0), iGiay(0) {}

ThoiGian::ThoiGian(int Gio, int Phut, int Giay) : iGio(Gio), iPhut(Phut), iGiay(Giay) {}

int ThoiGian::TinhGiay() const {
    return iGio * 3600 + iPhut * 60 + iGiay;
}

void ThoiGian::TinhLaiGio(int Giay) {
    iGio = Giay / 3600;
    Giay %= 3600;
    iPhut = Giay / 60;
    iGiay = Giay % 60;
}

ThoiGian ThoiGian::operator+(int Giay) const {
    ThoiGian tg;
    int totalGiay = TinhGiay() + Giay;
    tg.TinhLaiGio(totalGiay);
    return tg;
}

ThoiGian ThoiGian::operator-(int Giay) const {
    ThoiGian tg;
    int totalGiay = TinhGiay() - Giay;
    tg.TinhLaiGio(totalGiay);
    return tg;
}

ThoiGian ThoiGian::operator+(const ThoiGian &a) const {
    ThoiGian tg;
    int totalGiay = TinhGiay() + a.TinhGiay();
    tg.TinhLaiGio(totalGiay);
    return tg;
}

ThoiGian ThoiGian::operator-(const ThoiGian &a) const {
    ThoiGian tg;
    int totalGiay = TinhGiay() - a.TinhGiay();
    tg.TinhLaiGio(totalGiay);
    return tg;
}

ThoiGian& ThoiGian::operator++() {
    ++iGiay;
    if (iGiay >= 60) {
        iGiay = 0;
        ++iPhut;
        if (iPhut >= 60) {
            iPhut = 0;
            ++iGio;
        }
    }
    return *this;
}

ThoiGian& ThoiGian::operator--() {
    --iGiay;
    if (iGiay < 0) {
        iGiay = 59;
        --iPhut;
        if (iPhut < 0) {
            iPhut = 59;
            --iGio;
        }
    }
    return *this;
}

bool ThoiGian::operator==(const ThoiGian &a) const {
    return TinhGiay() == a.TinhGiay();
}

bool ThoiGian::operator!=(const ThoiGian &a) const {
    return !(*this == a);
}

bool ThoiGian::operator>=(const ThoiGian &a) const {
    return TinhGiay() >= a.TinhGiay();
}

bool ThoiGian::operator<=(const ThoiGian &a) const {
    return TinhGiay() <= a.TinhGiay();
}

bool ThoiGian::operator>(const ThoiGian &a) const {
    return TinhGiay() > a.TinhGiay();
}

bool ThoiGian::operator<(const ThoiGian &a) const {
    return TinhGiay() < a.TinhGiay();
}

ostream& operator<<(ostream &out, const ThoiGian &tg) {
    out << tg.iGio << "h:" << tg.iPhut << "m:" << tg.iGiay << "s";
    return out;
}

istream& operator>>(istream &in, ThoiGian &tg) {
    cout << "Nhap gio: ";
    in >> tg.iGio;
    cout << "Nhap phut: ";
    in >> tg.iPhut;
    cout << "Nhap giay: ";
    in >> tg.iGiay;
    return in;
}
