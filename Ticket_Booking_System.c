#include "stdio.h"
int main()
{
    int age;
    char name[20];
    char ticket_type[20];
    char booking_type[20];
    char contact_no[10];
    char adress[35];
    char bording_to[25];
    char bording_form[25];
    char Date[22];
    char medical_history[25];
    int distance;
    char train_ticket[]="By train";
    char flight_ticket[]="By flight";
    int By_train,By_flight;
    char general_ticket[]="general";
    char tatkal_ticket[]="tatkal";
    int general_data,tatkal_data;
    int fixed_fare;
    fixed_fare=600;
    printf ("Enter a passenger name");
    scanf(" %[^\n]%*c",name);
    printf ("Enter a passenger age");
    scanf(" %d",&age);
    printf ("Enter a passenger bording_to");
    scanf(" %[^\n]%*c",bording_to);
    printf ("Enter a passenger bording_form");
    scanf(" %[^\n]%*c",bording_form);
    printf ("Enter an adress");
    scanf(" %[^\n]%*c",adress);
    printf ("Enter a Date");
    scanf(" %[^\n]%*c",Date);
    printf ("Enter contact number");
    scanf(" %[^\n]%*c",contact_no);
    printf ("Enter a ticket type");
    scanf(" %[^\n]%*c",ticket_type);
    printf ("Enter booking type");
    scanf(" %[^\n]%*c",booking_type);
    printf ("plz enter distance coverd");
    scanf("%d",&distance);
    printf ("Enter a passenger age");
    scanf("%d",&age);
    printf("\npassenger Name:%s",name);
    printf("\npassenger medical history:%s",medical_history);
    printf("\npassenger bording form:%s",bording_form);
      printf("\npassenger bording to:%s",bording_to);
        printf("\npassenger adress:%s",adress);
          printf("\npassenger Date:%s",Date);
            printf("\npassenger contact no:%s",contact_no);
              printf("\npassenger Ticket Type:%s",ticket_type);
                 printf("\npassenger Booking type:%s",booking_type);
                   printf("\nFixed fare:%d",fixed_fare);
                     printf("\nDistance coverd in km: %d",distance);
    By_train=strcmp(ticket_type,train_ticket);
     By_flight=strcmp(ticket_type,flight_ticket);
    general_data=strcmp(booking_type,general_ticket);
     tatkal_data=strcmp(booking_type,tatkal_ticket);



     if(age>=60)
     {
      fixed_fare=fixed_fare-(fixed_fare*20/100);
      printf("As per you include in senior citizen list , so you will get 20per dicount your total rs:%d",fixed_fare);
     }

     if(tatkal_ticket==0)
     {
         fixed_fare=fixed_fare*100/7;
         printf("you make your ticket tatkal so you have to pay 7per extra money so your total rs:%d",fixed_fare);
    }

     if(ticket_type==train_ticket && distance>=700)
        {
         fixed_fare=fixed_fare-(fixed_fare*15/100);
         printf("distance covered is more than 700 therefore you get 15per discount pay your bill money in rs:%d",fixed_fare);
        }
     else if(ticket_type==flight_ticket && distance>1000)
{
         fixed_fare=fixed_fare-(fixed_fare*10/100);
         printf("distance covered is more than 1000 therefore you get 10per discount pay your bill money in rs:%d",fixed_fare);
        }


}
