// pre-processor directives

// include needed C and header files
#include Assignment.c


// write code for main function
int main(void){   
    static int age = 22;
    static int restingPulse = 65;
    
    printf("Using heartRate function: \n",age, restingPulse);
    

    printf("Using heartRateReference function:\n", &age, &restingPulse);
    
}