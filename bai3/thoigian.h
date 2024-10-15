#ifndef THOIGIAN_H
#define THOIGIAN_H
#include <iostream>
using namespace std;

class ThoiGian {
private:
    int iGio;
    int iPhut;
    int iGiay;

public:
    ThoiGian();
    ThoiGian(int Gio, int Phut, int Giay);

    int TinhGiay() const;
    void TinhLaiGio(int Giay);

    ThoiGian operator+(int Giay) const;
    ThoiGian operator-(int Giay) const;
    ThoiGian operator+(const ThoiGian &a) const;
    ThoiGian operator-(const ThoiGian &a) const;

    ThoiGian& operator++();
    ThoiGian& operator--();

    bool operator==(const ThoiGian &a) const;
    bool operator!=(const ThoiGian &a) const;
    bool operator>=(const ThoiGian &a) const;
    bool operator<=(const ThoiGian &a) const;
    bool operator>(const ThoiGian &a) const;
    bool operator<(const ThoiGian &a) const;

    friend ostream& operator<<(ostream &out, const ThoiGian &tg);
    friend istream& operator>>(istream &in, ThoiGian &tg);
};

#endif

