#include <stdio.h>
#include <string.h>

int main()
{
  FILE *file;
  int i;
  char firstName[32];
  char lastName[32];
  int found = 0;
  int acc_no;
  char gender[6];
  int tel_no;
  int address;
  int age;

  // Open the file for writing
  file = fopen("records.txt", "a");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    getchar();
    return -1;
  }

  // Read and save data
  for (i = 0; i< 8; ++i)
  {
    // Read data
  //  printf("Record #%d\n", i + 1);
    printf("Enter first name: "); scanf("%s", firstName);
    printf("Enter last name:  "); scanf("%s", lastName);
      printf("Enter Account no: "); scanf("%d", &acc_no);
    printf("Enter gender:  "); scanf("%s", gender);
      printf("Enter tel_no: "); scanf("%d", &tel_no);
    printf("Enter address:  "); scanf("%d", &address);
      printf("Enter age: "); scanf("%d", &age);
        printf("\n");

    // Save data
    fprintf(file, "%s\t%s\t%d\t%s\t%d\t%d\t%d\n", firstName, lastName, acc_no, gender, tel_no, address, age);
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
