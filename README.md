# minhthuan073
#include <stdio.h>
#include <string.h>

// Định nghĩa struct SinhVien
struct SinhVien {
    char hoTen[100];      // Tên sinh viên
    int tuoi;             // Tuổi sinh viên
    char maSo[15];        // Mã số sinh viên
    float diem;           // Điểm trung bình
};

int main() {
    // Khai báo một biến kiểu struct SinhVien
    struct SinhVien sv;

    // Nhập thông tin sinh viên
    printf("Nhap ho ten sinh vien: ");
    fgets(sv.hoTen, sizeof(sv.hoTen), stdin);
    sv.hoTen[strcspn(sv.hoTen, "\n")] = 0; // Loại bỏ ký tự newline

    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.tuoi);

    printf("Nhap ma so sinh vien: ");
    scanf("%s", sv.maSo);

    printf("Nhap diem trung binh sinh vien: ");
    scanf("%f", &sv.diem);

    // In thông tin sinh viên
    printf("\nThong tin sinh vien:\n");
    printf("Ho Ten: %s\n", sv.hoTen);
    printf("Tuoi: %d\n", sv.tuoi);
    printf("Ma So: %s\n", sv.maSo);
    printf("Diem Trung Binh: %.2f\n", sv.diem);

    return 0;
}
