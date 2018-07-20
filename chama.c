#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/*struct Member 
              {
                     char name[12];
                     int acc_no;
                     int id_no;
                     char gender[2];
                     int address;
                     int tel_no;
                     
                     
                     } s1 = {"john", 100, 30004, "m", 12, 072};
                     */
int main(int argc, char *argv[])
{
    FILE *fp;
    int a;
    
  printf("Welcome to CHAMA MANAGEMENT SYSTEM.\n\n MENU:\n 1 = CAPTURE New Record\n 2 = SEARCH a Record\n 3 = DELETE a Record\n 4 = HELP\n\n Please SELECT Menu to Continue (e.g 1)\n");
   //printf("Welcome to CHAMA MANAGEMENT SYSTEM.\n\n MENU:\n 1 = CAPTURE New Record\n  4 = HELP\n\n Please SELECT Menu to Continue (e.g 1)\n");
  
  scanf("%d",&a);
  switch (a)
  {
         case 1:
              {
              printf("Loading Member Form..");
              
              
                    //call the new member registration form
                                                 ShellExecute(NULL,"open","C:\\chama\\saved.exe",NULL,NULL,SW_SHOWNORMAL);
         break;
         }
         case 2:
              {
                       printf("Loading Records Form..");  
                       // search member form and update  
                       ShellExecute(NULL,"open","C:\\chama\\retrieve_record.exe",NULL,NULL,SW_SHOWNORMAL); 
                       break;
                       }
                       case 3:
                            {
                                      printf("Loading Delete Records Form..");
                                      //search record and delete it
                                      //call the new member registration form
                                                 ShellExecute(NULL,"open","C:\\chama\\retrieve_record.exe",NULL,NULL,SW_SHOWNORMAL);
                                      break;
                                 }
                                 case 4:
                                      {
                                           //printf("Loading HELP GUIDE..");
                                                    //Show Help File
                                                    /*FILE *fp;
                                                    fp = fopen("C:\\Help.txt","r");
                                                    if (fp == NULL)
                                                    {
                                                           printff("Error opening file!\n");
                                                           exit();
                                                           }
                                                    fprintf(fp, "Testing...\n");
                                                    scanf("%d",&a);
                                                    */
                                                    int answer, stop;
                                                     printf("Do you want to Load the HELP GUIDE?\n\n 1 = YES\n 2 = NO\n");  
                                                     scanf("%d",&answer); 
                                                     if(answer == 1)
                                                     {
                                                    int c;
                                                    FILE *file;
                                                    file = fopen("C:\\chama\\Help.txt", "r");
                                                    if (file) {
                                                      while ((c = getc(file)) != EOF)
                                                           putchar(c);
                                                           fclose(file);
                                                           }
                                                           printf("Press 1 to Exit HELP GUIDE and Go Main Menu\n");  
                                                     scanf("%d",&stop); 
                                                     if(stop == 1)
                                                     {
                                                           
                                                           //call the main menu form
                                                 ShellExecute(NULL,"open","C:\\chama\\chama.exe",NULL,NULL,SW_SHOWNORMAL);
                                                 }  
                                                           }
                                                           else
                                                           {
                                                               //call the main menu form
                                                 ShellExecute(NULL,"open","C:\\chama\\chama.exe",NULL,NULL,SW_SHOWNORMAL);
                                                 }
                                                    break; 
                                                    
                                            }
                                 default:
                                         {
                                                 
                                                    break;
                                               }
                                               }
  //system("PAUSE");
  getch();	
  return 0;
}
