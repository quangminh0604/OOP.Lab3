#include "NgayThangNam.h"

int main() {
    NgayThangNam date1(2024, 10, 15);
    NgayThangNam date2(2023, 5, 10);

    cout << "Date 1: " << date1 << endl;
    cout << "Date 2: " << date2 << endl;

    // Test cộng ngày
    date1 = date1 + 20;
    cout << "Date 1 sau khi +20 ngay: " << date1 << endl;

    // Test trừ ngày
    date2 = date2 - 15;
    cout << "Date 2 sau khi -15 ngay: " << date2 << endl;

    // Test so sánh
    if (date1 > date2) cout << "Date 1 lon hon Date 2" << endl;

    // Test toán tử trừ hai ngày
    int daysBetween = date1 - date2;
    cout << "So ngay giua Date 1 va Date 2: " << daysBetween << endl;

    return 0;
}
