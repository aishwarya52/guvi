#include<stdio.h>
int main()
{
    char custname,busname;
    int time,date,seatnum,ticket,choice;
    char scr,dest;
    {
        printf("Ticket reservation");
        printf("Menu");
        printf("1.bookin\t2.Canelling\t3.exit\n");
        printf("enter your choice");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            printf("enter the busname");
            scanf("%s",&busname);
            printf("enter the customername");
            
            scanf("%s",&custname);
            printf("enter the ticket number");
            scanf("%d",&ticket);
            printf("enter the seat number");
            scanf("%d",&seatnum);
            printf("source place");
            scanf("%s",&scr);
            printf("destination place");
            scanf("%s",&dest);
            printf("\n...........................................");
            printf("\n..............booked sucessfully...............");
            break;
            
            case 2:
             printf("enter the bus name");
            scanf("%s",&busname);
            printf("enter the customer name");
            scanf("%s",&custname);
            printf("enter the ticket number");
            scanf("%d",&ticket);
             printf("\n...........................................");
            printf("\n..............cancelled sucessfully...............");
            break;
            case 3:
            printf("................. THANK YOU .....................\n");
            break;
            default:
            printf("....................wrong selection.............");
            
            return 0;
        }
        
    }
}
