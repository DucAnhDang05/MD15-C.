#include<stdio.h>
#include<string.h>
struct diemThi{
	int maSV;
	float diemToan;
	float diemVan;
};
int main(){
	struct diemThi dsDiemThi[5];
	for(int i=0;i<5;i++){
		printf("Nhap ma sinh vien: ");
		scanf("%d",&dsDiemThi[i].maSV);
		printf("Nhap diem toan: ");
		scanf("%f",&dsDiemThi[i].diemToan);
		printf("Nhap diem van: ");
		scanf("%f",&dsDiemThi[i].diemVan);
	}
	printf("Danh sach diem thi\n");
	for(int i=0;i<5;i++){
		printf("Ma sinh vien: %d\t diem toan: %.2f\t diem van: %.2f\n",dsDiemThi[i].maSV,dsDiemThi[i].diemToan,dsDiemThi[i].diemVan);
	}
	return 0;
}
