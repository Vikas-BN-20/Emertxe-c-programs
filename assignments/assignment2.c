// WAP to find which day of the year

/*



#include <stdio.h>
int main()

{
    int n,first_day,day;

    printf("Enter the value of 'n': ");
    scanf("%d", &n);

    if (n<=0 || n>365)
    {
        printf("Invalid input , n value should be >0 and <=365 \n");

        return 1;
    }

    printf("choose first day: \n");
    printf("1. Sunday\n");
    printf("2. Monday\n");
    printf("3. Tuesday\n");
    printf("4. Wednesday\n");
    printf("5. Thursday\n");
    printf("6. Friday\n");
    printf("7. Saturday\n");

    printf("Enter the options to set the first day: ");
    scanf("%d", &first_day);


    if (first_day<=0 || first_day>7)
    {
        printf("Invalid input , first day should be >0 and <=7 \n");

        return 2;
    }

    day = (first_day+n-1)%7 ;   // this is the formula to calculate days (ex: n=9 , firstday=2) (2+9-1)%7 ;(10)%7; we get '3' . so from sunday count 3 i.e., Tuesday is the answer.
                               // (ex: n=45 , firstday=3) (day = 3+45-1 = 47)%7 then (45/7=6.71428) now take integer part "6" . (6*7=42) now, (47-42 = 5 is the answer) 
    switch (day)
    {
    case 1:
        printf("The day is Sunday\n");
        break;

    case 2:
        printf("The day is Monday\n");
        break;

    case 3:
        printf("The day is Tuesday\n");
        break;

    case 4:
        printf("The day is Wednesday\n");
        break;

    case 5:
        printf("The day is Thursday\n");
        break;

    case 6:
        printf("The day is Friday\n");
        break;

    case 0:
        printf("The day is Saturday\n");
        break;
    
    }


    return 0;

}



*/