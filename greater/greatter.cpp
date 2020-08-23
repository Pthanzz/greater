#include <iostream>
int main() {
	int num,notme;
	scanf_s("%d", &num);
	if (num < 0) {
		printf("please insert the number that is greater or equal zero\n");
		scanf_s("%d", &notme);
		if (notme >= 50) printf("Pass");
		else printf("Fail");}
	else if (num >=50)printf("Pass");
	else printf("Fail");
}
//P.S.เปลี่ยนเป็นถ้ารับค่ารอบแรกน้อยกว่า0ให้รับค่าอีกรอบ