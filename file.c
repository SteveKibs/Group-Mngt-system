#include <stdlib.h>
#include<stdio.h>
#include<windows.h>
 
struct Student {
   int roll;
   char name[12];
   int percent;
   
} s1 = { 10, "SMJC", 80 };
// s1.roll=10;
int main() {
   FILE *fp;
   struct Student s2;
 //printf("hello");
 
   //Write details of s1 to file
   fp = fopen("ip.txt", "w");
   fwrite(&s1, sizeof(s1), 1, fp);
   fclose(fp);
 
   fp = fopen("ip.txt", "r");
   fread(&s2, sizeof(s2), 1, fp);
   fclose(fp);
 
   printf("\nRoll : %d", s2.roll);
   printf("\nName : %s", s2.name);
   printf("\nPercent : %d", s2.percent);
   
   ShellExecute(NULL,"open","C:\\chama.exe",NULL,NULL,SW_SHOWNORMAL);
 getch();
   return (0);
}
