#include <stdio.h>

int main(){
    char name; // ค่าชื่อผู้ใช้
    int age;   // อายุ
    float weight;   // น้ำหนัก

    printf("Enter your name, age, weight: ");  // ข้อความให้ผู้ใช้ป้อนข้อมูล ชื่อ อายุ น้ำหนัก
    scanf("%c %d %f", &name, &age, &weight);   // รับค่าข้อมูลที่ได้

    printf("Student %c is %d years old.\n", name, age);  // เเสดงผลข้อมูล ชื่อ อายุ
    printf("his weight is %.1f kg.\n" , weight);  // เเสดงผลข้อมูล น้ำหนัก
    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ
}