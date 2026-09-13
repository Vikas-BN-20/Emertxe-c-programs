/*
// structure syntax code

#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    char address[100];
    float marks;
}S3;

int main()
{
    struct Student S1={123,"vikasbn","bengaluru",90.5};
    printf("id is : %d\n", S1.id);
    printf("name is : %s\n", S1.name);
    printf("address is : %s\n", S1.address);
    printf("marks is : %g\n", S1.marks);
}

*/

/*

// structure from user input

#include <stdio.h>

struct Student
{
    int id;
    char name[50];
    char address[100];
    float marks;
};

int main()
{
    struct Student S1;
    printf("Enter id: ");
    scanf("%d", &S1.id);
    printf("Enter name: ");
    scanf("%s", S1.name);
    printf("Enter address: ");
    scanf("%s", S1.address);
    printf("Enter marks: ");
    scanf("%f", &S1.marks);
    printf("\n*****************************************\n");
    printf("id is : %d\n", S1.id);
    printf("name is : %s\n", S1.name);
    printf("address is : %s\n", S1.address);
    printf("marks is : %g\n", S1.marks);
}

*/

/*


// structure function syntax code

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[50];
    char address[100];
};

void fun(struct Student *sptr);

int main()
{
    struct Student S1={123,"vikasbn","bengaluru"};

    fun(&S1);

    printf("%d\n", S1.id);
    S1.id=100;
    //strcpy(S1.name,"harry");
    printf("%s\n", S1.name);
}
void fun(struct Student *sptr)
{
    sptr->id=200;
    strcpy(sptr->name,"vikas");
}

*/


/*

// modify the structure using function

#include <stdio.h>
#include <string.h>
struct Student
{
    int id;
    char name[50];
    char address[100];
};

void modify(struct Student *sptr);
void display(struct Student *sptr);

int main()
{
    struct Student S1={123,"vikasbn","bengaluru"};
    printf("id is : %d\n", S1.id);
    printf("name is : %s\n", S1.name);
    printf("address is : %s\n", S1.address);

    modify(&S1);
}

void modify(struct Student *sptr)
{
    sptr->id=200;
    strcpy(sptr->name,"vikas");
    strcpy(sptr->address,"bangalore");

    display(sptr);
}

void display(struct Student *sptr)
{
    printf("id is : %d\n", sptr->id);
    printf("name is : %s\n", sptr->name);
    printf("address is : %s\n", sptr->address);
}

*/

/*

// structure array and ask how many persons to enter and then display the details of all persons

#include <stdio.h>
struct Person
{
    int id;
    char DOB[20];
    char name[50];
    char address[100];
    float salary;
};

int main()
{
    int n;
    printf("Enter the number of persons: ");
    scanf("%d", &n);
    struct Person P[n];
    for(int i=0;i<n;i++)
    {
        printf("Enter id : ");
        scanf("%d",&P[i].id);
        printf("Enter DOB : ");
        scanf("%s",P[i].DOB);
        printf("Enter name : ");
        scanf(" %[^\n]",P[i].name);
        printf("Enter address : ");
        scanf(" %[^\n]",P[i].address);
        printf("Enter salary : ");
        scanf("%f",&P[i].salary);
    }
    for(int i=0;i<n;i++)
    {
        printf("\n*****************************************\n");
        printf("id is : %d\n", P[i].id);
        printf("DOB is : %s\n", P[i].DOB);
        printf("name is : %s\n", P[i].name);
        printf("address is : %s\n", P[i].address);
        printf("salary is : %g\n", P[i].salary);
    }
}

*/

/*

#include <stdio.h>

struct Car
{
    int cost;
    char name[20];
};

void input(struct Car *C,int s);
void display(struct Car *C , int s);

int main()
{
    int n;
    printf("Enter the number of cars: ");
    scanf("%d", &n);

    struct Car Car[n];

    input(Car,n);

    display(Car,n);

    return 0;

}
void input(struct Car *C,int s)
{
    for(int i=0;i<s;i++)
    {
        scanf("%d",&C[i].cost);
        scanf("%s",C[i].name);

    }
}
void display(struct Car *C , int s)
{
    for(int i=0;i<s;i++)
    {
        printf("%d\n",C->cost);
        printf("%s\n",C->name);
        C++;
    }
}

*/

/*

// nested structure

#include <stdio.h>

struct Students
{
    int id;
    char name[20];
    float marks;
};

struct Mentor
{
    int id;
    char name[20];
    char address[60];
};

struct Emertxe
{
    int members;
    struct Students St;
    struct Mentor Men;
};

int main()
{
    struct Emertxe E1;

    printf("Enter the number of members: ");
    scanf("%d", &E1.members);

    printf("\nSTUDENT DETAILS\n");
    printf("Enter student id: ");
    scanf("%d", &E1.St.id);
    printf("Enter student name: ");
    scanf("%s", E1.St.name);
    printf("Enter student marks: ");
    scanf("%f", &E1.St.marks);

    printf("\nMENTOR DETAILS\n");
    printf("Enter mentor id: ");
    scanf("%d", &E1.Men.id);
    printf("Enter mentor name: ");  
    scanf("%s", E1.Men.name);
    printf("Enter mentor address: ");
    scanf("%s", E1.Men.address);

    printf("\n*****************************************\n");
    printf("Number of members: %d\n", E1.members);
    printf("\nSTUDENT DETAILS\n");
    printf("Student id: %d\n", E1.St.id);
    printf("Student name: %s\n", E1.St.name);
    printf("Student marks: %g\n", E1.St.marks);
    printf("\nMENTOR DETAILS\n");
    printf("Mentor id: %d\n", E1.Men.id);
    printf("Mentor name: %s\n", E1.Men.name);
    printf("Mentor address: %s\n", E1.Men.address);
}


*/

/*

// For multiple students and mentors using ARRAYS

#include <stdio.h>

struct Students 
{
    int id;
    char name[20];
    float marks;
};

struct Mentor 
{
    int id;
    char name[20];
    char address[60];
};

struct Emertxe 
{
    int members;
    struct Students St[100];   // fixed max size
    struct Mentor Men[100];    // fixed max size
};

int main() 
{
    struct Emertxe E1;

    printf("Enter the number of members: ");
    scanf("%d", &E1.members);

    // input loop
    for (int i = 0; i < E1.members; i++) 
    {
        printf("\n--- MEMBER %d ---\n", i+1);

        printf("Enter student id: ");
        scanf("%d", &E1.St[i].id);
        printf("Enter student name: ");
        scanf("%s", E1.St[i].name);
        printf("Enter student marks: ");
        scanf("%f", &E1.St[i].marks);

        printf("Enter mentor id: ");
        scanf("%d", &E1.Men[i].id);
        printf("Enter mentor name: ");
        scanf("%s", E1.Men[i].name);
        printf("Enter mentor address: ");
        scanf("%s", E1.Men[i].address);
    }

    // display loop
    printf("\n*****************************************\n");
    printf("Number of members: %d\n", E1.members);

    for (int i = 0; i < E1.members; i++) 
    {
        printf("\nSTUDENT %d DETAILS\n", i+1);
        printf("Student id: %d\n", E1.St[i].id);
        printf("Student name: %s\n", E1.St[i].name);
        printf("Student marks: %.2f\n", E1.St[i].marks);

        printf("\nMENTOR %d DETAILS\n", i+1);
        printf("Mentor id: %d\n", E1.Men[i].id);
        printf("Mentor name: %s\n", E1.Men[i].name);
        printf("Mentor address: %s\n", E1.Men[i].address);
    }

    return 0;
}




// For multiple students and mentors using FUNCTIONS AND POINTERS

#include <stdio.h>

struct Students 
{
    int id;
    char name[20];
    float marks;
};

struct Mentor 
{
    int id;
    char name[20];
    char address[60];
};

struct Emertxe 
{
    int members;
    struct Students St[50];   // Array of students
    struct Mentor Men[50];    // Array of mentors
};

void inputStudent(struct Students *s) 
{
    printf("\nSTUDENT DETAILS\n");
    printf("Enter student id: ");
    scanf("%d", &s->id);
    printf("Enter student name: ");
    scanf("%s", s->name);
    printf("Enter student marks: ");
    scanf("%f", &s->marks);
}

void inputMentor(struct Mentor *m) 
{
    printf("\nMENTOR DETAILS\n");
    printf("Enter mentor id: ");
    scanf("%d", &m->id);
    printf("Enter mentor name: ");
    scanf("%s", m->name);
    printf("Enter mentor address: ");
    scanf("%s", m->address);
}

void display(struct Emertxe *e) {
    printf("\n*****************************************\n");
    printf("Number of members: %d\n", e->members);

    for (int i = 0; i < e->members; i++) 
    {
        printf("\nSTUDENT %d DETAILS\n", i + 1);
        printf("Student id: %d\n", e->St[i].id);
        printf("Student name: %s\n", e->St[i].name);
        printf("Student marks: %.2f\n", e->St[i].marks);

        printf("\nMENTOR %d DETAILS\n", i + 1);
        printf("Mentor id: %d\n", e->Men[i].id);
        printf("Mentor name: %s\n", e->Men[i].name);
        printf("Mentor address: %s\n", e->Men[i].address);
    }
}

int main() 
{
    struct Emertxe E1;

    printf("Enter the number of members: ");
    scanf("%d", &E1.members);

    for (int i = 0; i < E1.members; i++) 
    {
        printf("\n--- MEMBER %d ---\n", i + 1);
        inputStudent(&E1.St[i]);
        inputMentor(&E1.Men[i]);
    }

    display(&E1);

    return 0;
}

*/

/*

#include <stdio.h>
#pragma pack(1) // to avoid padding and get the exact size of the structure
struct S
{
    int x;
    char ch;
    int y;
};

int main()
{
    struct S1;
    printf("size of struct S is: %lu\n",sizeof(struct S));

    return 0;
}

*/

/*

//BITFIELDS

// using BITFIELD

#include <stdio.h>
struct S
{
    unsigned char x : 4; // 3
    unsigned char y : 4; // 7 and 9 is not possible 
};

int main()
{
    printf("size of struct S is : %lu\n",sizeof(struct S));

    struct S s;

    s.x=10;
    s.y=12;

    printf("x = %d\ny = %d\n", s.x,s.y);
    return 0;
}


*/

// using UNIONS 

#include <stdio.h>
union U
{
    char ch;

    struct
    {
        unsigned char b1 : 1;
        unsigned char b2 : 1;
        unsigned char b3 : 1;
        unsigned char b4 : 1;
        unsigned char b5 : 1;
        unsigned char b6 : 1;
        unsigned char b7 : 1;
        unsigned char b8 : 1;
    } s;
};

int main()
{
    union U u;

    u.ch = 'A';

    printf("%d ", u.s.b1);
    printf("%d ", u.s.b2);
    printf("%d ", u.s.b3);
    printf("%d ", u.s.b4);
    printf("%d ", u.s.b5);
    printf("%d ", u.s.b6);
    printf("%d ", u.s.b7);
    printf("%d ", u.s.b8);

    printf("\n");

}