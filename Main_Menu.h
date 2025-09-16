#include <stdio.h>
#include "Stock_Mgt/stock_menu.h"

void main_menu()
{   
    int choice;


    printf("\tWelcome to tech world!\n");
    printf("Please make your choice:\n");

    printf("1. Stock Management\n");
    printf("2. Inventory management\n");
    printf("3. Sales management\n");
    printf("4. Employee management\n");
    printf("5. Supplier Management System\n");
    printf("6. Customer Management System\n");
    printf("7. Exit\n");

    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
        printf("%d",choice);
        break;
        
        case 2:
        printf("%d",choice);
        break;
                
        case 3:
        printf("%d",choice);
        break;
                        
        case 4:
        printf("%d",choice);
        break;
                        
        case 5:
        printf("%d",choice);
        break;
                        
        case 6:
        printf("%d",choice);
        break;
                        
        case 7:
        return;
        break;

        default:
        return ;
        }

}

