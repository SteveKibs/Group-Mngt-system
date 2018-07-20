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
    printf("6.  Enter address:  "); scanf("%d", &address);
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
  // Close the file
  fclose(file);

  // Open the file for reading
  file = fopen("records.txt", "rt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    return -1;
  }

  // Load and display data
  i = 0;
  while(!feof(file) && !found)
  {
    ++i;
    fscanf(file, "%s\t%s", firstName, lastName);
    if (strcmp(firstName, "John") == 0 && strcmp(lastName, "Doe") == 0)
    {
      printf("Record found (#%d): %s %s\n", i, firstName, lastName);
      found = 1;
    }
  }
  if (!found)
    printf("Record could not be found");

  // Close the file
  fclose(file);
getch();
  return 0;
}
