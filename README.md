# minhthuan073
#include <iostream>
#include <string>
#include <vector>
using namespace std;

struct SinhVien {
    string hoTen;
    string maSo;
    float diemTB;
};

void nhapThongTin(SinhVien &sv) {
    cout << "Nhap ma so sinh vien (nhap '0' de dung): ";
    getline(cin, sv.maSo);
    if (sv.maSo == "0") return;

    cout << "Nhap ho ten: ";
    getline(cin, sv.hoTen);
    cout << "Nhap diem trung binh: ";
    cin >> sv.diemTB;
    cin.ignore(); // bỏ dòng newline còn lại
}

void xuatThongTin(const SinhVien &sv) {
    cout << "Ho ten: " << sv.hoTen 
         << ", MSSV: " << sv.maSo 
         << ", Diem TB: " << sv.diemTB << endl;
}

int main() {
    vector<SinhVien> danhSach;
    while (true) {
        SinhVien sv;
        nhapThongTin(sv);
        if (sv.maSo == "0") break;
        danhSach.push_back(sv);
    }

    cout << "\nDanh sach sinh vien da nhap:\n";
    for (const auto &sv : danhSach) {
        xuatThongTin(sv);
    }

    // Tìm sinh viên có điểm cao nhất (nếu có sinh viên)
    if (!danhSach.empty()) {
        int index = 0;
        for (int i = 1; i < danhSach.size(); ++i) {
            if (danhSach[i].diemTB > danhSach[index].diemTB) {
                index = i;
            }
        }

        cout << "\nSinh vien co diem trung binh cao nhat:\n";
        xuatThongTin(danhSach[index]);
    } else {
        cout << "\nKhong co sinh vien nao duoc nhap.\n";
    }

    return 0;
}
