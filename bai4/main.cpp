#include "ngaythangnam.h"

int main() {
    NgayThangNam ntn1, ntn2;
    cout << "Nhap ngay thang nam thu nhat:\n";
    cin >> ntn1;
    cout << "Nhap ngay thang nam thu hai:\n";
    cin >> ntn2;

    NgayThangNam tong = ntn1 + 15; // Them 15 ngay
    NgayThangNam hieu = ntn1 - ntn2;
    NgayThangNam truNgay = ntn1 - 10;  // Tru 10 ngay

    cout << "Ngay thang nam thu nhat: " << ntn1 << endl;
    cout << "Ngay thang nam thu hai: " << ntn2 << endl;
    cout << "Ngay sau khi them 15 ngay: " << tong << endl;
    cout << "Hieu giua hai ngay: " << hieu << endl;
    cout << "Ngay sau khi tru 10 ngay: " << truNgay << endl;

    if (ntn1 == ntn2) cout << "Hai ngay thang nam bang nhau\n";
    if (ntn1 != ntn2) cout << "Hai ngay thang nam khong bang nhau\n";
    if (ntn1 > ntn2) cout << "Ngay thang nam thu nhat lon hon ngay thang nam thu hai\n";
    if (ntn1 < ntn2) cout << "Ngay thang nam thu nhat nho hon ngay thang nam thu hai\n";
    if (ntn1 >= ntn2) cout << "Ngay thang nam thu nhat lon hon hoac bang ngay thang nam thu hai\n";
    if (ntn1 <= ntn2) cout << "Ngay thang nam thu nhat nho hon hoac bang ngay thang nam thu hai\n";

    return 0;
}

