//
//  main.c
//  Calculate Age
//
//  Created by Jacobo Vazquez on 6/23/24.
//

#include <stdio.h>

/* function declaration */
int calculateAge(int age);

int main(int argc, const char * argv[]) {
    /* local variables definition */
    int age = 40;
    int ret;
    
    /* calling the calculateAge function to get final age */
    ret = calculateAge(age);
    
    printf("Age: %d", ret);
    printf("\n");
    
    return 0;
}

/* function to calculate the final age of a given age */
int calculateAge(int age){
    return age * 1.2;
}
