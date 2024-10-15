
#include "sophuc.h"

SoPhuc::SoPhuc() : dThuc(0), dAo(0) {}

SoPhuc::SoPhuc(double thuc, double ao) : dThuc(thuc), dAo(ao) {}

SoPhuc SoPhuc::operator+(const SoPhuc &sp) const {
    return SoPhuc(dThuc + sp.dThuc, dAo + sp.dAo);
}

SoPhuc SoPhuc::operator-(const SoPhuc &sp) const {
    return SoPhuc(dThuc - sp.dThuc, dAo - sp.dAo);
}

SoPhuc SoPhuc::operator*(const SoPhuc &sp) const {
    return SoPhuc(dThuc * sp.dThuc - dAo * sp.dAo, dThuc * sp.dAo + dAo * sp.dThuc);
}

SoPhuc SoPhuc::operator/(const SoPhuc &sp) const {
    double denominator = sp.dThuc * sp.dThuc + sp.dAo * sp.dAo;
    return SoPhuc((dThuc * sp.dThuc + dAo * sp.dAo) / denominator,
                  (dAo * sp.dThuc - dThuc * sp.dAo) / denominator);
}

bool SoPhuc::operator==(const SoPhuc &sp) const {
    return dThuc == sp.dThuc && dAo == sp.dAo;
}

bool SoPhuc::operator!=(const SoPhuc &sp) const {
    return !(*this == sp);
}

ostream& operator<<(ostream &out, const SoPhuc &sp) {
    out << sp.dThuc << " + " << sp.dAo << "i";
    return out;
}

istream& operator>>(istream &in, SoPhuc &sp) {
    cout << "Nhap phan thuc: ";
    in >> sp.dThuc;
    cout << "Nhap phan ao: ";
    in >> sp.dAo;
    return in;
}
