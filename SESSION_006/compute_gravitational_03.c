#include <stdio.h>

int main(void)
{
    double m1_GMS;                      // for storing mass of object 1
    double m2_GMS;                      // for storing mass of object 2
    double r_GMS;                       // for storing distance between objects
    double G = 6.67 * 10e-11;       // universal constant of gravitation
    double F_GMS;                       // for storing gravitational force of attraction

    printf("Enter the mass of object 1 in kgs: ");
    scanf("%lf", &m1_GMS);

    printf("Enter the mass of object 2 in kgs: ");
    scanf("%lf", &m2_GMS);

    printf("Enter the distance between two objects in meters: ");
    scanf("%lf", &r_GMS);

    if(m1_GMS <= 0.0 || m2_GMS <= 0.0 || r_GMS <= 0.0)
    {
        printf("Invalid value entered for mass or distance\n");
        return(-1);
    }

    F_GMS = (G * m1_GMS * m2_GMS) / (r_GMS * r_GMS);
    printf("[3]. Gravitational Force between two objects is %lf Newton\n", F_GMS);

    return(0);
}