#ifndef NGAYTHANGNAM_H
#define NGAYTHANGNAM_H

#include <iostream>
using namespace std;

class NgayThangNam {
private:
    int iNgay, iThang, iNam;
    bool isValidDate(int ngay, int thang, int nam); // Hàm kiểm tra ngày hợp lệ
    int daysInMonth(int thang, int nam) const;            // Hàm tính số ngày trong tháng

public:
    NgayThangNam(); // Constructor mặc định
    NgayThangNam(int nam, int thang, int ngay); // Constructor có tham số
    int TinhNgay() const;   // Tính tổng số ngày từ năm 0
    NgayThangNam operator+(int ngay) const; // Toán tử cộng số ngày
    NgayThangNam operator-(int ngay) const; // Toán tử trừ số ngày
    int operator-(NgayThangNam a) const;    // Toán tử trừ hai ngày
    NgayThangNam& operator++(); // Toán tử ++ tiền tố
    NgayThangNam& operator--(); // Toán tử -- tiền tố
    bool operator==(const NgayThangNam& a) const; // Toán tử ==
    bool operator!=(const NgayThangNam& a) const; // Toán tử !=
    bool operator>=(const NgayThangNam& a) const; // Toán tử >=
    bool operator<=(const NgayThangNam& a) const; // Toán tử <=
    bool operator>(const NgayThangNam& a) const;  // Toán tử >
    bool operator<(const NgayThangNam& a) const;  // Toán tử <
    friend istream& operator>>(istream& is, NgayThangNam& a); // Toán tử nhập
    friend ostream& operator<<(ostream& os, const NgayThangNam& a); // Toán tử xuất
};

#endif
