#include "NgayThangNam.h"

// Constructor mặc định
NgayThangNam::NgayThangNam() : iNgay(1), iThang(1), iNam(2000) {}

// Constructor có tham số
NgayThangNam::NgayThangNam(int nam, int thang, int ngay) {
    if (isValidDate(ngay, thang, nam)) {
        iNgay = ngay;
        iThang = thang;
        iNam = nam;
    } else {
        cout << "Ngày tháng năm không hợp lệ!" << endl;
        iNgay = 1;
        iThang = 1;
        iNam = 2000;
    }
}

// Hàm kiểm tra ngày hợp lệ
bool NgayThangNam::isValidDate(int ngay, int thang, int nam) {
    if (thang < 1 || thang > 12) return false;
    if (ngay < 1 || ngay > daysInMonth(thang, nam)) return false;
    return true;
}

// Hàm trả về số ngày trong tháng
int NgayThangNam::daysInMonth(int thang, int nam) const {
    if (thang == 2) {
        if (nam % 400 == 0 || (nam % 4 == 0 && nam % 100 != 0)) return 29;
        else return 28;
    }
    else if (thang == 4 || thang == 6 || thang == 9 || thang == 11) return 30;
    else return 31;
}

// Phương thức tính tổng số ngày từ năm 0
int NgayThangNam::TinhNgay() const {
    int totalDays = iNgay;
    for (int year = 0; year < iNam; year++) {
        totalDays += (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 366 : 365;
    }
    for (int month = 1; month < iThang; month++) {
        totalDays += daysInMonth(month, iNam);
    }
    return totalDays;
}

// Toán tử cộng thêm số ngày
NgayThangNam NgayThangNam::operator+(int ngay) const {
    NgayThangNam result = *this;
    result.iNgay += ngay;
    while (result.iNgay > daysInMonth(result.iThang, result.iNam)) {
        result.iNgay -= daysInMonth(result.iThang, result.iNam);
        result.iThang++;
        if (result.iThang > 12) {
            result.iThang = 1;
            result.iNam++;
        }
    }
    return result;
}

// Toán tử trừ số ngày
NgayThangNam NgayThangNam::operator-(int ngay) const {
    NgayThangNam result = *this;
    result.iNgay -= ngay;
    while (result.iNgay <= 0) {
        result.iThang--;
        if (result.iThang <= 0) {
            result.iThang = 12;
            result.iNam--;
        }
        result.iNgay += daysInMonth(result.iThang, result.iNam);
    }
    return result;
}

// Toán tử trừ hai ngày
int NgayThangNam::operator-(NgayThangNam a) const {
    return this->TinhNgay() - a.TinhNgay();
}

// Toán tử ++ tiền tố
NgayThangNam& NgayThangNam::operator++() {
    *this = *this + 1;
    return *this;
}

// Toán tử -- tiền tố
NgayThangNam& NgayThangNam::operator--() {
    *this = *this - 1;
    return *this;
}

// Toán tử ==
bool NgayThangNam::operator==(const NgayThangNam& a) const {
    return iNgay == a.iNgay && iThang == a.iThang && iNam == a.iNam;
}

// Toán tử !=
bool NgayThangNam::operator!=(const NgayThangNam& a) const {
    return !(*this == a);
}

// Toán tử >=
bool NgayThangNam::operator>=(const NgayThangNam& a) const {
    return TinhNgay() >= a.TinhNgay();
}

// Toán tử <=
bool NgayThangNam::operator<=(const NgayThangNam& a) const {
    return TinhNgay() <= a.TinhNgay();
}

// Toán tử >
bool NgayThangNam::operator>(const NgayThangNam& a) const {
    return TinhNgay() > a.TinhNgay();
}

// Toán tử <
bool NgayThangNam::operator<(const NgayThangNam& a) const {
    return TinhNgay() < a.TinhNgay();
}

// Toán tử nhập
istream& operator>>(istream& is, NgayThangNam& a) {
    cout << "Nhap ngay: "; is >> a.iNgay;
    cout << "Nhap thang: "; is >> a.iThang;
    cout << "Nhap nam: "; is >> a.iNam;
    if (!a.isValidDate(a.iNgay, a.iThang, a.iNam)) {
        cout << "Ngay thang nam khong hop le, tu dong chuyen thanh 01/01/2000" << endl;
        a.iNgay = 1;
        a.iThang = 1;
        a.iNam = 2000;
    }
    return is;
}

// Toán tử xuất
ostream& operator<<(ostream& os, const NgayThangNam& a) {
    os << a.iNgay << "/" << a.iThang << "/" << a.iNam;
    return os;
}
