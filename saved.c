#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
  FILE *file;
  int i = 0;
  char firstName[32];
  char lastName[32];
  int found = 0;
  int accno;
  char gender[6];
  int telno;
  int address;
  int age;
  int save;

  // Open the file for writing
  file = fopen("records.txt", "a");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    getchar();
    return -1;
  }

  // Read and save data
  if (i > 8)
  {
        exit(1);
        }
        else
  {
    // Read data
    printf("New Member Registration Form\n\n");
    printf("1.  Enter first name: "); scanf("%s", firstName);
   printf("2.  Enter last name:  "); scanf("%s", lastName);
       printf("3.  Enter Account no: "); scanf("%d", &accno);
   printf("4.  Enter gender:  "); scanf("%s", gender);
      printf("5.  Enter tel_no: "); scanf("%d", &telno);
    printf("6.  Enter Amount:  "); scanf("%d", &address);
      printf("7.  Enter age: "); scanf("%d", &age);
        
        printf("\n");

    // Save data
    //printf("Save Record?\n 1 = SAVE \n 2 = CANCEL \n");  scanf("%s", &save);
  //  if(save==2)
  //  { 
  //             exit(1);
    
   // }
   // else
  //  {
   printf("Record Saved\n");
    fprintf(file, "%s\t%s\t%d\t%s\t%d\t%d\t%d\n", firstName, lastName, accno, gender, telno, address, age );
    i++;
    
   // }
 }
 
                                               
  fclose(file);
     //call the main menu form
                                              ShellExecute(NULL,"open","C:\\chama\\chama.exe",NULL,NULL,SW_SHOWNORMAL);
  getch();
  return 0;
}
