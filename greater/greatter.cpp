#include <iostream>
int main() {
	int num,notme;
	scanf_s("%d", &num);
	if (num < 0)
		printf("please insert the number that is greater or equal zero");
	else if (num >= 50) printf("Pass");
	else printf("Fail");
}