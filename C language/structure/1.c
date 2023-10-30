#include <stdio.h>
#include <string.h>
struct date1
  { 
    int dd;
    int mm;
    int yyyy;
  };
struct address
  {
    int house_no;
    char area[50];
    char city[50];
    char state[50];
  };  
struct employee
{
  int id;
  char name[100];
  char designation[100];
  char department[100];
  long salary;
  long contact_no;
  struct address a1;
  struct date1 d1;
};
   
 


 FILE *f1,*f2;
 
 void menu();
 void add();
 void search();
 void update();
 void display();
 void delete();
 
 int main()
{
  int choice;
do{
   menu();
   printf("Enter your choice : ");
   scanf("%d",&choice);
   switch (choice)
  { 
    case 1 : add();
               break;
    case 2 : display();
               break;
   case 3 : search();
               break;           
    case 4 : update();
               break;
    case 5 : delete();
               break;                               
    case 6 : printf("\n\nThanks!!!\n\n");
               break;          
    default  : printf("\nInvalid command");
               break;
               
   }
 }while(choice!=6); 
    
    return 0;
    
}
 
 void menu()
 {
   printf("\n~~Welcome to emplyoee managment system~~\n");
   printf("1) Add new employee \n");
   printf("2) Display all employee data \n");
   printf("3) Search for employee data \n");
   printf("4) Update the existing data\n");
   printf("5) Delete employee data\n");
   printf("6) Exit\n");
   }
   
 void add()
 {
   struct employee e1;
   f1= fopen("employees.txt","a");
   printf("\nEnter employee ID : ");
   scanf("%d",&e1.id);
   getchar();
   printf("\nEnter employee name: ");
   fgets(e1.name,20,stdin);
   getchar();
   printf("\nEnter Designation : ");
   fgets(e1.designation,100,stdin);
   getchar();
   printf("\nEnter department : ");
   fgets(e1.department,100,stdin);
   getchar();
   printf("\nEnter the salary : ");
   scanf("%ld",&e1.salary);
   getchar();
   printf("\nEnter the contact No. : ");
   scanf("%ld",&e1.contact_no);
   getchar();
   printf("\nEnter the House no. :");
   scanf("%d",&e1.a1.house_no);
   getchar();
   printf("\nEnter the Area :");
   fgets(e1.a1.area,50,stdin);
   getchar();
   printf("\nEnter the city :");
   fgets(e1.a1.city,50,stdin);
   getchar();
   printf("\nEnter the state :");
   fgets(e1.a1.state,50,stdin);
   getchar();
   printf("\nEnter the date of joining as dd/mm/yyyy : ");
   printf("\nDay : ");
   scanf("%d",&e1.d1.dd);
   getchar();
   printf("month : ");
   scanf("%d",&e1.d1.mm);
   getchar();
   printf("Year : ");
   scanf("%d",&e1.d1.yyyy);
   printf("\nThanks Your details has been submitted.\n");
   getchar();
   
   fwrite(&e1,sizeof(e1),1,f1);
   fclose(f1);
  } 
  
  void display()
{
  struct employee e1;
  f1 = fopen("employees.txt", "r");
  printf("\n\nEmployee ID\tName\tDesignation\tDepartment\tSalary\tContact No.\tAddress\t DOJ\n");
  printf("\n---------------------------------------------------------------------------------------------\n");
  while (fread(&e1, sizeof(e1), 1, f1) == 1)
  {
   printf("%d\t%s\t%s\t%s\t%ld\t%ld\t%d %s%s%s\t%d/%d/%d\n", e1.id, e1.name, e1.designation, e1.department, e1.salary, e1.contact_no, e1.a1.house_no,e1.a1.area,e1.a1.city,e1.a1.state, e1.d1.dd, e1.d1.mm, e1.d1.yyyy);
  }
  fclose(f1);
}

void search()
{
  struct employee e1;
  int e;
  f1 = fopen("employees.txt", "r");
  printf("\nEnter the Employee ID for search: ");
  scanf("%d", &e);
  while (fread(&e1, sizeof(e1), 1, f1))
  {
    if (e1.id == e)
    {
      printf("\n\nEmployee ID : %d\nName : %s\nDesignation : %s\nDepartment : %s\nSalary : %ld\nContact No. : %ld\nAddress : %d %s %s %s\n DOJ : %d/%d/%d\n",e1.id, e1.name, e1.designation, e1.department, e1.salary, e1.contact_no, e1.a1.house_no, e1.a1.area, e1.a1.city, e1.a1.state, e1.d1.dd, e1.d1.mm, e1.d1.yyyy);
    }
  }
  fclose(f1);
}
void update()
{
  struct employee e1;
  int e;
  f1 = fopen("employees.txt", "r+");
  printf("\nEnter the Employee ID for update: ");
  scanf("%d", &e);
  while (fread(&e1, sizeof(e1), 1, f1))
  {
    if (e1.id == e)
    {
      printf("\nEnter employee ID : ");
      scanf("%d", &e1.id);
      getchar();
      printf("\nEnter Designation : ");
      fgets(e1.designation, 100, stdin);
      getchar();
      printf("\nEnter employee name: ");
      fgets(e1.name, 100, stdin);
      getchar();
      printf("\nEnter department : ");
      fgets(e1.department, 100, stdin);
      getchar();
      printf("\nEnter the salary : ");
      scanf("%ld", &e1.salary);
      getchar();
      printf("\nEnter the contact No. : ");
      scanf("%ld", &e1.contact_no);
      getchar();
      printf("\nEnter the House no. :");
      scanf("%d", &e1.a1.house_no);
      getchar();
      printf("\nEnter the Area :");
      fgets(e1.a1.area, 50, stdin);
      getchar();
      printf("\nEnter the city :");
      fgets(e1.a1.city, 50, stdin);
      getchar();
      printf("\nEnter the state :");
      fgets(e1.a1.state, 50, stdin);
      getchar();
      printf("\nEnter the date of joining as dd/mm/yyyy : ");
      printf("\nDay : ");
      scanf("%d", &e1.d1.dd);
      getchar();
      printf("Month : ");
      scanf("%d", &e1.d1.mm);
      getchar();
      printf("Year : ");
      scanf("%d", &e1.d1.yyyy);

      fseek(f1, -sizeof(e1), SEEK_CUR);
      fwrite(&e1, sizeof(e1), 1, f1);
      printf("\nEmployee details updated successfully.\n");
      break;
    }
  }
  fclose(f1);
}
void delete()
{
  struct employee e1;
  int e;
  f1 = fopen("employees.txt", "rb");
  f2 = fopen("temp.txt", "wb");
  printf("\nEnter the Employee ID for Delete: ");
  scanf("%d", &e);
  while (fread(&e1, sizeof(e1), 1, f1))
  {
    if (e1.id != e)
      fwrite(&e1, sizeof(e1), 1, f2);
  }
  fclose(f1);
  fclose(f2);

  remove("employees.txt");
  rename("temp.txt", "employees.txt");
}

    
  
  

