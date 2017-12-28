#include<studio.h>

void main() {
    int a;
    scanf("%d", &a);
    printf("입력된 점수 : %d", a);
    if (a>=85) {
        printf("합격");
    } else {
        printf("불합격");
    }

    printf("오늘은 하루에 몇 끼를 먹었나?");
    int b;
    scanf("%d", &b);

    switch(b)
    {
        case 0:
            printf("세 끼를 더 먹어야 한다.");
            break;
        case 1:
            printf("두 끼를 더 먹어야 한다.");
            break;
        case 2:
            printf("한 끼를 더 먹어야 한다.");
            break;
        case 3:
            printf("규칙적인 식습관이다.");
            break;
        default:
            printf("그만 먹어야 한다.");
    }
    
    int indexForfor;

    for (indexForfor = 0; indexForfor<10; indexForfor++) {
        printf("오늘도 거친 하루였다... \n");
    }

    int c;

    while (c<=10) {
        printf("오늘도 힘든 하루였다... \n");
        c++;
    }
}