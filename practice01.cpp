#include<stdio.h>
#include<string.h>
struct sinhVien{
	char ten[50];
	int maSV;
	float diemTB;
};
int main(){
	struct sinhVien sv1;
	strcpy(sv1.ten,"Nguyen Van A");
	sv1.maSV = 12345;
	sv1.diemTB = 10;
	printf("Thong tin sinh vien\n");
	printf("Ten sinh vien: %s\n",sv1.ten);
	printf("Ma sinh vien: %d\n",sv1.maSV);
	printf("Diem trung binh: %.2f\n",sv1.diemTB);
}
