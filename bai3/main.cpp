#include "thoigian.h"

int main() {
    ThoiGian tg1, tg2;
    cout << "Nhap thoi gian thu nhat:\n";
    cin >> tg1;
    cout << "Nhap thoi gian thu hai:\n";
    cin >> tg2;

    ThoiGian tong = tg1 + tg2;
    ThoiGian hieu = tg1 - tg2;
    ThoiGian congGiay = tg1 + 3600; // Cong 1 gio
    ThoiGian truGiay = tg1 - 3600;  // Tru 1 gio

    cout << "Thoi gian thu nhat: " << tg1 << endl;
    cout << "Thoi gian thu hai: " << tg2 << endl;
    cout << "Tong hai thoi gian: " << tong << endl;
    cout << "Hieu hai thoi gian: " << hieu << endl;
    cout << "Cong them 1 gio: " << congGiay << endl;
    cout << "Tru di 1 gio: " << truGiay << endl;

    if (tg1 == tg2) cout << "Hai thoi gian bang nhau\n";
    if (tg1 != tg2) cout << "Hai thoi gian khong bang nhau\n";
    if (tg1 > tg2) cout << "Thoi gian thu nhat lon hon thoi gian thu hai\n";
    if (tg1 < tg2) cout << "Thoi gian thu nhat nho hon thoi gian thu hai\n";
    if (tg1 >= tg2) cout << "Thoi gian thu nhat lon hon hoac bang thoi gian thu hai\n";
    if (tg1 <= tg2) cout << "Thoi gian thu nhat nho hon hoac bang thoi gian thu hai\n";

    return 0;
}
