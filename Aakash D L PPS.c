#include <stdio.h>
int main(){
    float acres,hectares;
    int operation;
    printf("Choose '1' if you want to convert acres to hectares\nChoose '2' if you want to convert hectares to acres");
    printf("\n");
    scanf("%d",&operation);
    
    switch (operation)
 {
     case 1:
     printf("Enter your value in acres to find in hectares");
     printf("\n");
     scanf("%f",&acres);
     hectares=acres/(2.471);
     printf("%.f acres = %.4f hectares",acres,hectares);
     break;
     
     case 2:
     printf("Enter your value in hectares to find in acres");
     printf("\n");
     scanf("%f",&hectares);
     acres=hectares*(2.471);
     printf("%.f hectares = %.4f acres",hectares,acres);
     default:
     printf("Incorrect Operator");
     break;
 }
 return 0;
}