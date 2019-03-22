#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <string.h>
struct student
    {
           int id;
           char name[50];
           int marks;
           struct student *next;
           };
int *header;           
if( header==NULL)
{
            header=current;
}
                else
                {
                    temp=header;
                    while(temp-> next!=NULL)
                    {
                                 temp=temp-> next;
                    }
                    temp -> next=current;
                   
                    }
                    void insert_record(void)
     {
            struct student *current,*temp;
            current=(struct student *)malloc(sizeof(struct student));
             printf("enter name of student");
                    scanf("%s",&current -> name);
                     printf("enter student id");
                    scanf("%d",&current->id);
                     printf("enter student marks");
                    scanf("%d",&current->marks);
                    current -> next=NULL;
     }
                    void show_list(void)
                    {
                         struct student *temp;
                         temp=header;
                         while(temp!=NULL)
                         {
                                          printf("%s",temp->name);
                                           printf("%d",temp->id);
                                            printf("%d",temp->marks);
                                            temp=temp->next;
                                            }
                  }

using namespace std;
int main(int argc, char *argv[])
{
    char choice;
    while(1)
    {
            printf("enter ' i' to insert record");
            printf("enter ' d' to delete record"); 
            printf("enter ' s' to search record"); 
            printf("enter ' x' to dispose record"); 
            choice = getche();
            switch (choice)
            {
                   case 'i':
                        insert_record();
                        break;
                        case 'd':
                             delete_record();
                             break;
                        case 's':
                             search_record();
                             break;
                        case 'x':
                             dispose_record();
                             break;
                        default :
                                printf("wrong insert");
                                }
                                }
                                }
                                   
                                 
                                 
                                 
    system("PAUSE");
    return EXIT_SUCCESS;
}

