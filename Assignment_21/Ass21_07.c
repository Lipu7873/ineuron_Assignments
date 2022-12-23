/* 7. Write a program to calculate the difference between two time periods. */
#include<stdio.h>
struct time{
    int hrs;
    int min;
    int sec;
};
void diff_between_time(struct time t1,struct time t2,struct time *diff);
int main()
{
    struct time t1,t2,diff;
    printf("Enter start time: ");
    printf("Enter hours, minute and second:\n");
    scanf("%d:%d:%d",&t1.hrs,&t1.min,&t1.sec);

    printf("Enter stop time: ");
    printf("Enter hours, minute and second:\n");
    scanf("%d:%d:%d",&t2.hrs,&t2.min,&t2.sec);

    diff_between_time(t1,t2,&diff);

    printf("\ntime diff: %d:%d:%d",t1.hrs,t1.min,t1.sec);
   printf(" - %d:%d:%d",t2.hrs,t2.min,t2.sec);
   printf("= %d:%d:%d\n",diff.hrs,diff.min,diff.sec);
}

void diff_between_time(struct time start,struct time stop,struct time *diff)
{
   while (stop.sec>start.sec)
   {
      --start.min;
      start.sec +=60;
   }
   diff->sec=start.sec-stop.sec;
   while (stop.min>start.min)
   {
      --start.hrs;
      start.min +=60;
   }
   diff->min=start.min-stop.min;
   diff->hrs=start.hrs-stop.hrs;
   
}