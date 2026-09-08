#include <stdio.h>  

int main () {  
        int n, subtotal, quantity, newitem, yesno; 
        printf("====================================="); 
        printf("            FOOD MENU       "); 
        printf("====================================="); 
        printf("1. Burger             - Inr. 120");  
        printf("2. Pizza              - Inr. 200");
        printf("3. Sandwich           - Inr. 100");
        printf("4. French Fries       - Inr. 80");
        printf("5. Exit");  
        printf("====================================="); 
        printf("Enter your choice: "); 
        scanf("%d", n); 
        printf("Enter quantity: "); 
        scanf("%d", &quantity);
         if (n==1) {
                subtotal = 120*quantity; 
        } 
        if (n==2) {
                subtotal = 200*quantity; 
        }
        if (n==3) {
                subtotal = 100*quantity; 
        }

        if (n==4) {
                subtotal = 80*quantity; 
        }
        printf("Do you want to order something else? (1 = Yes, 0 = No): "); 
        scanf("%d", &yesno); 
         
                if (yesno == 1) {
                        do {
        if (n==1) {
                subtotal = 120*quantity; 
        } 
        if (n==2) {
                subtotal = 200*quantity; 
        }
        if (n==3) {
                subtotal = 100*quantity; 
        }

        if (n==4) {
                subtotal = 80*quantity; 
        }
        if (n==5) {
                break;  
        } 
} while (1);
                }


        return 0;
}
