#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

#include <iostream>
using namespace std;

class NgayThangNam {
private:
    int iNgay;
    int iThang;
    int iNam;

public:
    NgayThangNam();
    NgayThangNam(int ngay, int thang, int nam);

    int TinhNgay() const;

    NgayThangNam operator+(int ngay) const;
    NgayThangNam operator-(int ngay) const;
    NgayThangNam operator-(const NgayThangNam &a) const;

    NgayThangNam& operator++();
    NgayThangNam& operator--();

    bool operator==(const NgayThangNam &a) const;
    bool operator!=(const NgayThangNam &a) const;
    bool operator>=(const NgayThangNam &a) const;
    bool operator<=(const NgayThangNam &a) const;
    bool operator>(const NgayThangNam &a) const;
    bool operator<(const NgayThangNam &a) const;

    friend ostream& operator<<(ostream &out, const NgayThangNam &ntn);
    friend istream& operator>>(istream &in, NgayThangNam &ntn);
};

#endif

