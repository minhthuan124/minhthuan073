#include <stdio.h>
#include <conio.h>

typedef struct {
    char tenhs[30];
    float diemtoan;
    float diemvan;
    float diemtb;
} hocsinh;

typedef struct {
    char tenlop[30];
    int siso;
    hocsinh hs[100];
} lop;

void NhapSV(hocsinh hs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nNhap ten sinh vien thu %d: ", i + 1);
        fflush(stdin);
        gets(hs[i].tenhs);  // c?nh báo: không an toàn
        printf("Nhap diem Toan: ");
        scanf("%f", &hs[i].diemtoan);

        printf("Nhap diem Van: ");
        scanf("%f", &hs[i].diemvan);

        hs[i].diemtb = (hs[i].diemtoan + hs[i].diemvan) / 2;
    }
}

void NhapLop(lop *l) {
    printf("\nNhap ten lop: ");
    fflush(stdin);
    gets(l->tenlop); 

    printf("\nNhap si so: ");
    scanf("%d", &l->siso);

    NhapSV(l->hs, l->siso);
}

void Xuat(lop *l) {
    printf("\nTen lop: %s\n", l->tenlop);
    for (int i = 0; i < l->siso; i++) {
        printf("\nTen HS: %s", l->hs[i].tenhs);
        printf("\nDiem Toan: %.2f", l->hs[i].diemtoan);
        printf("\nDiem Van: %.2f", l->hs[i].diemvan);
        printf("\nDiem TB: %.2f", l->hs[i].diemtb);
        printf("\n---------------------------");
    }
}

int main() {
    lop l;

    NhapLop(&l);
    Xuat(&l);

    getch();
    return 0;
}

