#include "phanso.h"

int main() {
    PhanSo p1, p2;
    cout << "Nhap phan so thu nhat:\n";
    cin >> p1;
    cout << "Nhap phan so thu hai:\n";
    cin >> p2;

    PhanSo tong = p1 + p2;
    PhanSo hieu = p1 - p2;
    PhanSo tich = p1 * p2;
    PhanSo thuong = p1 / p2;

    cout << "Tong hai phan so: " << tong << endl;
    cout << "Hieu hai phan so: " << hieu << endl;
    cout << "Tich hai phan so: " << tich << endl;
    cout << "Thuong hai phan so: " << thuong << endl;

    if (p1 == p2) cout << "Hai phan so bang nhau\n";
    if (p1 != p2) cout << "Hai phan so khong bang nhau\n";
    if (p1 > p2) cout << "Phan so thu nhat lon hon phan so thu hai\n";
    if (p1 < p2) cout << "Phan so thu nhat nho hon phan so thu hai\n";
    if (p1 >= p2) cout << "Phan so thu nhat lon hon hoac bang phan so thu hai\n";
    if (p1 <= p2) cout << "Phan so thu nhat nho hon hoac bang phan so thu hai\n";

    return 0;
}
