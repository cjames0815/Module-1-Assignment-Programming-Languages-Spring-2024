// pre-processor directives

// include needed header file
#include <stdio.h>
#include "./headers/Assignment.h"
// write code for functions declared in header file
void heartrate (int  age, int restingPulse, int intensity_start, int increased_intensity, int max_intensity ){
    int intensity = intensity_start;
    do {
        int targetHeartRate = (((220 - age)- restingPulse)*intensity/100) + restingPulse;
        printf("Intensity: %d%% Target Hear Rate: %d bpm\n", intensity, targetHeartRate);
        intensity += increased_intensity;

    }while (intensity <= max_intensity);

}
void heartRateReference(int *agePtr, int *restingPulsePtr,int intensity_start, int increased_intensity, int max_intensity) {
    int age = *agePtr;
    int restingPulse = *restingPulsePtr;
    int intensity = intensity_start;
     do {
        int targetHeartRate = (((220 - age)- restingPulse)*intensity/100) + restingPulse;
        printf("Intensity: %d%% Target Hear Rate: %d bpm\n", intensity, targetHeartRate);
        intensity += increased_intensity;

    }while (intensity <= max_intensity);
}