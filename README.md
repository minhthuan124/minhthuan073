#include <stdio.h>
#include <strings.h>
struct HOCSINH
{
	char HoTen[30];
    int DiemToan, DiemVan;
    float DiemTB;
};
struct LOPHOC{
	char tenlop[30];
	int siso; // so luong hoc sinh thuc te
	HOCSINH hs[100];	// danh sach toi da nhieu hs
};
// cau 1: hay nhap , xuat danh sach gom nhieu lop hoc	
void Nhap1HS(HOCSINH &hs) {
		fflush(stdin);
	printf("hay nhap hoten:\n"); gets(hs.HoTen);
	printf("hay diem toan:\n"); scanf("%d",&hs.DiemToan);
	printf("hay diem van:\n"); scanf("%d",&hs.DiemVan);
	hs.DiemTB=(hs.DiemToan+hs.DiemVan)/2;
}
void Nhap1LOP(LOPHOC &lop)
{	
	fflush(stdin);
	printf("hay nhap ten lop:\n"); gets(lop.tenlop);    
	printf("hay nhap si so lop:\n"); scanf("%d",&lop.siso);
	for(int i=0;i<lop.siso;i++)
	Nhap1HS(lop.hs[i]);		// Nhap tung HocSinh trong lop do
}
void NhapDSNhieuLop(LOPHOC lop[100], int &n)
{	printf("nhap so luong lop hoc:\n");scanf("%d",&n);
	for(int i=0;i<n;i++)   
	{
			printf("lop thu %d \n",i+1);
			Nhap1LOP(lop[i]);
	}
}
// cau 2: xuat nhieu lop hoc
void Xuat1HS(HOCSINH hs) {
	printf(" hoten :  %s\n",hs.HoTen);
	printf("diem toan: %d \n",hs.DiemToan);
	printf("diem van: %d \n" ,hs.DiemVan);
	printf("diem trung binh %f \n" ,hs.DiemTB);
}
void Xuat1LOP(LOPHOC lop)
{	
	printf("ten lop: %s \n",lop.tenlop);      
	printf("si so lop: %d \n", lop.siso);
	for(int i=0;i<lop.siso;i++)
	Xuat1HS(lop.hs[i]);		// Xuat tung HocSinh trong lop do
}
void XuatDSNhieuLop(LOPHOC lop[100], int n)
{	printf("so luong lop hoc: %d \n",n);
	for(int i=0;i<n;i++)   Xuat1LOP(lop[i]);
}					// cau 3: hay in ra cac hoc sinh dtb >5.0 cua tat ca cac lop
int main()
{
	LOPHOC lop[100]; int n;
	NhapDSNhieuLop(lop,n); XuatDSNhieuLop(lop,n);
	return 1;
}
