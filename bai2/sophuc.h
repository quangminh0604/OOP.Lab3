
#ifndef SOPHUC_H
#define SOPHUC_H

#include <iostream>
using namespace std;

class SoPhuc {
private:
    double dThuc;
    double dAo;

public:
    SoPhuc();
    SoPhuc(double thuc, double ao);

    SoPhuc operator+(const SoPhuc &sp) const;
    SoPhuc operator-(const SoPhuc &sp) const;
    SoPhuc operator*(const SoPhuc &sp) const;
    SoPhuc operator/(const SoPhuc &sp) const;

    bool operator==(const SoPhuc &sp) const;
    bool operator!=(const SoPhuc &sp) const;

    friend ostream& operator<<(ostream &out, const SoPhuc &sp);
    friend istream& operator>>(istream &in, SoPhuc &sp);
};

#endif
