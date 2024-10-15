#include "ngaythangnam.h"

NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(2000) {}

NgayThangNam::NgayThangNam(int ngay, int thang, int nam) : iNgay(ngay), iThang(thang), iNam(nam) {}

int NgayThangNam::TinhNgay() const {
    // Implement logic to convert date to total days (can be used for calculations)
    return iNgay + iThang * 30 + iNam * 365;
}

NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay += ngay;
    // Adjust day, month, year appropriately (simplified logic)
    while (temp.iNgay > 30) {
        temp.iNgay -= 30;
        temp.iThang++;
        if (temp.iThang > 12) {
            temp.iThang -= 12;
            temp.iNam++;
        }
    }
    return temp;
}

NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam temp = *this;
    temp.iNgay -= ngay;
    // Adjust day, month, year appropriately (simplified logic)
    while (temp.iNgay <= 0) {
        temp.iNgay += 30;
        temp.iThang--;
        if (temp.iThang <= 0) {
            temp.iThang += 12;
            temp.iNam--;
        }
    }
    return temp;
}

NgayThangNam NgayThangNam::operator-(const NgayThangNam &a) const {
    int totalDays1 = TinhNgay();
    int totalDays2 = a.TinhNgay();
    int difference = totalDays1 - totalDays2;
    return NgayThangNam(difference % 30, (difference / 30) % 12, difference / 365);
}

NgayThangNam& NgayThangNam::operator++() {
    iNgay++;
    if (iNgay > 30) {
        iNgay = 1;
        iThang++;
        if (iThang > 12) {
            iThang = 1;
            iNam++;
        }
    }
    return *this;
}

NgayThangNam& NgayThangNam::operator--() {
    iNgay--;
    if (iNgay <= 0) {
        iNgay = 30;
        iThang--;
        if (iThang <= 0) {
            iThang = 12;
            iNam--;
        }
    }
    return *this;
}

bool NgayThangNam::operator==(const NgayThangNam &a) const {
    return iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam;
}

bool NgayThangNam::operator!=(const NgayThangNam &a) const {
    return !(*this == a);
}

bool NgayThangNam::operator>=(const NgayThangNam &a) const {
    return TinhNgay() >= a.TinhNgay();
}

bool NgayThangNam::operator<=(const NgayThangNam &a) const {
    return TinhNgay() <= a.TinhNgay();
}

bool NgayThangNam::operator>(const NgayThangNam &a) const {
    return TinhNgay() > a.TinhNgay();
}

bool NgayThangNam::operator<(const NgayThangNam &a) const {
    return TinhNgay() < a.TinhNgay();
}

ostream& operator<<(ostream &out, const NgayThangNam &ntn) {
    out << ntn.iNgay << "/" << ntn.iThang << "/" << ntn.iNam;
    return out;
}

istream& operator>>(istream &in, NgayThangNam &ntn) {
    cout << "Nhap ngay: ";
    in >> ntn.iNgay;
    cout << "Nhap thang: ";
    in >> ntn.iThang;
    cout << "Nhap nam: ";
    in >> ntn.iNam;
    return in;
}

