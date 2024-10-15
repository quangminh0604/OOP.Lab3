#include "sophuc.h"

int main() {
    SoPhuc sp1, sp2;
    cout << "Nhap so phuc thu nhat:\n";
    cin >> sp1;
    cout << "Nhap so phuc thu hai:\n";
    cin >> sp2;

    SoPhuc tong = sp1 + sp2;
    SoPhuc hieu = sp1 - sp2;
    SoPhuc tich = sp1 * sp2;
    SoPhuc thuong = sp1 / sp2;

    cout << "Tong hai so phuc: " << tong << endl;
    cout << "Hieu hai so phuc: " << hieu << endl;
    cout << "Tich hai so phuc: " << tich << endl;
    cout << "Thuong hai so phuc: " << thuong << endl;

    if (sp1 == sp2) cout << "Hai so phuc bang nhau\n";
    if (sp1 != sp2) cout << "Hai so phuc khong bang nhau\n";

    return 0;
}
