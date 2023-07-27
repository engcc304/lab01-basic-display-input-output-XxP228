/*
    เขียนโปรแกรมรับ "ชื่อ" จากผู้ใช้ และแสดงผลบนหน้าจอดังผลลัพธ์ด้านล่างต่อไปนี้ 
    
    Test case:
        First Name: Aomsin
        Last Name: AomMoney
    Output:
        Aomsin AomMoneys TC, RMUTL, Chiang Mai, Thailand

    Test case:
        First Name: ABC
        Last Name: DEF
    Output:
        ABD DEFs TC, RMUTL, Chiang Mai, Thailand
*/
#include <stdio.h>
int main() {
    char FName[50];
    char LName[50];
    printf("Enter you Firt Name: ");
    scanf("%s",FName);
    printf("Enter you Last Name: ");
    scanf("%s", LName);
    printf("%s %ss TC, RMUTL, Chiang Mai, Thailand" ,FName,LName);
    return 0;
}