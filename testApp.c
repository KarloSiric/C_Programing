#include <stdio.h>
#include <stdlib.h>

int main() {
    
    printf("Hello World!\n");
    
    
    int number; // here we have a variable which we have not yet initialized
    int *pnumber = &number; //here we have a pointer to a number variable
    printf("Enter a number: ");
    scanf("%d", pnumber);
    printf("Your number is: %d\n", *pnumber); // here we have * to dereference the pointer, because we want to print the value and not the memory address
    
    // Now we can also print the memory address of the variable
    printf("Memory address is: %p\n", pnumber);
    
    
    
    
    
    
    
    
    
        
    
    return 0;
}

