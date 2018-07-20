#include <stdio.h>
#include <string.h>
#include <windows.h>

int main()
{
  FILE *file;
  int i;
  char firstName[32];
  char lastName[32];
  int accno;
  int found = 0;
  char fname[32];
  char lname[32];
  char gender[32];
  int telno;
  int address;
  int age;
  int ans;
  printf("Records Search Form\n\n");
/*
  // Open the file for writing
  file = fopen("retrieve.txt", "wt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    getchar();
    return -1;
  }

  // Read and save data
  for (i = 0; i < 3; ++i)
  {
    // Read data
    printf("Record #%d\n", i + 1);
    printf("Enter first name: "); scanf("%s", firstName);
    printf("Enter last name:  "); scanf("%s", lastName);
    printf("\n");

    // Save data
    fprintf(file, "%s\t%s\n", firstName, lastName);
  } 

  // Close the file
  fclose(file);
*/
  // Open the file for reading
  file = fopen("records.txt", "rt");
  if (!file)
  {
    printf("File could not be opened\n\a\a");
    return -1;
  }

  // Load and display data
  // enter item to search
    printf("Enter First Name:\n"); 
    scanf("%s", fname);
     printf("Enter Last Name:\n");
    scanf("%s", lname);
         printf("Enter Member Account Number:\n");
    scanf("%d", &accno);
    
    i = 0;
  while(!feof(file) && !found)
  {
    ++i;
    fscanf(file, "%s\t%s\t%d\t%s\t%d\t%d\t%d", firstName, lastName, &accno, gender, &telno, &address, &age);
    
    //if (strcmp(firstName, "jane") == 0 && strcmp(lastName, "doe") == 0)
    //if(strcmp(firstName, fname) == 0 && strcmp(lastName, lname) == 0)
    if (strcmp(firstName, fname) == 0 && strcmp(lastName, lname) == 0 && strcmp(accno, accno) == 0)
    {
     //printf("Record found (#%d): \n\n", i);
     printf("F. Name\t Last Name \t Acc No\t Gender\t Tel No\t Amount\t Age\n");
      printf("%s\t %s\t \t %d \t%s\t%d\t%d\t\t%d\n", firstName, lastName, accno, gender, telno, address, age);
      found = 1;
      printf("Delete this Record? 1 = YES \t 2 = NO\n\n");
      scanf("%d", &ans);
      if(ans == 1)
      {
      FILE *fp1, *fp2;
    //consider 40 character string to store filename
    char filename[40];
    char c;
    int del_line, temp = 1;
    //asks userfor file name
   // printf("Enter file name");
    //receives file name from user and stores in 'filename'
    //scanf("%s", filename);
    //open file in read mode
    fp1 = fopen("C:\\chama\\records.txt", "r");
    //filename = "C:\\chama\\records.txt";
    c =getc(fp1);
    //until the last character of file is obtained
    while (c != EOF)
    {
          //printf("%c", c);
          //print current character and read next character
          c = getc(fp1);
                    }
                    //rewind
                    rewind(fp1);
                    printf("This is Record No: %d\n", i);
                    printf("\n Enter Record number of the line to be deleted\n");
                    //accept number from user.
                    scanf("%d", &del_line);
                    
                    //del_line = i;
                    //open new file in write mode
                    fp2 = fopen("copy.c","w");
                    c = getc(fp1);
                    while(c != EOF)
                    {
                            c = getc(fp1);
                            if(c == '\n')
                            temp++;
                            //except the line to be deleted
                            if(temp != del_line)
                            {
                             //copy all lines in file copy.c
                             putc(c, fp2);       
                                    }
                            }
                            //close both the files
                            fclose(fp1);
                            fclose(fp2);
                            //remove original file
                            remove("C:\\chama\\records.txt");
                            //rename the file copy.c to original name
                            rename("copy.c", "C:\\chama\\records.txt");
                             //printf("\n The contents of the file after being modified are as follows:\n");
                            fp1 = fopen("C:\\chama\\records.txt", "r");
                            c = getc(fp1);
                            while(c != EOF)
                            {
                                    //printf("%c", c);
                                    c = getc(fp1);
                                    }
                                    fclose(fp1);
                                    //return 0;
                                    
                                    }
                                    else
                                    {
                                        //call the main menu form
                                              ShellExecute(NULL,"open","C:\\chama\\chama.exe",NULL,NULL,SW_SHOWNORMAL);
                                        }
    }
    
    
    
    
  }
  if (!found)
    printf("Record could not be found");

  // Close the file
  fclose(file);
getch();
  return 0;
}
