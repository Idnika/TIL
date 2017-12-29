#include<studio.h>

int plus(int a, int b) {
	return a+b;
}

char change_A(char);
char change_a(char);
char input(void);
void output(char);


void main() {


	int x, y;
	scanf("%d, %d", &x, &y);

	printf("%d+%d=%d", x, y, plus(x,y));


	char result;
	printf("hahaha\n");
	result=input();

	if(result>=65 && result<=90) {
		result=change_A(result);
		output(result);
	} else if(result>=97 && reesult<=122) {
		result=change_a(result);
		output(result); 
	} else{
		printf("nooooooooooo!!!!!!\n");
	}
}

char change_A(char A) {
	A+=32;
	return A;
}

char change_a(char a) {
	a-=32;
	return a;
}

char input(void) {
	char a;
	scanf("%c",&a);
	return a;
}

void output(char result) {
	printf("result:c",result);
}