#include <stdio.h>

int main(){
    char name[30];   // ค่าชื่อผู้ใช้ (สูงสุด 30 ตัวอักษร)
    int age;         // ค่าอายุ
    float height;    // ค่าส่วนสูง
    char subject;    // ค่าชื่อวิชา
    float grade;     // ค่าเกรดที่ได้
    char gradeChar;  // ตัวอักษรที่แทนเกรด

    printf("Enter your name, age, height,");   //ข้อความให้ผู้ใช้ใส่ข้อมูล ชื่อ อายุ ส่วนสูง 
    scanf(" %s %d %f", &name, &age, &height);  // รับค่าข้อมูลที่ผู้ใช้ป้อน
    printf("Enter your subjiect, grade, grade symbol"); // ข้อความให้ผู้ใช้ใส่ข้อมูล ชื่อวิชา ค่าเกรดที่ได้ ตัวอักษรแทนเกรด
    scanf(" %c %f %c", &subject, &grade, &gradeChar); // รับค่าข้อมูลที่ผู้ใช้ป้อน
    

    printf("%s is %d yaer old and %.1f centimeers tall.\n", name,age,height);   //  เเสดงผลข้อมูลตามที่ผู้ใช้ป้อน ชื่อ อายุ เเละส่วนสูง
    printf("In subjiec %c , %s got %.2f is symbolized as '%c'.\n", subject,name,grade,gradeChar);  // เเสดงผลข้อมูล ชื่อวิชา ชื่อ เกรด ตัวอักษรเเทนเกรด
    return 0; // คืนค่า 0 เพื่อบอกว่าการทำงานสำเร็จ 
}