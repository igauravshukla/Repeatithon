#include <stdio.h>

int main(void)
{
    double m1_GS;                      // for storing mass of object 1
    double m2_GS;                      // for storing mass of object 2
    double r_GS;                       // for storing distance between objects
    double G = 6.67 * 10e-11;       // universal constant of gravitation
    double F_GS;                       // for storing gravitational force of attraction

    printf("Enter mass of object 1 in kgs: ");
    scanf("%lf", &m1_GS);

    printf("Enter mass of object 2 in kgs: ");
    scanf("%lf", &m2_GS);

    printf("Enter the distance between the objects in meters: ");
    scanf("%lf", &r_GS);

    if(m1_GS <= 0.0 || m2_GS <= 0.0 || r_GS <= 0.0)
    {
        printf("Invalid values for mass or distance\n");
        return(-1);
    }

    F_GS = (G * m1_GS * m2_GS) / (r_GS * r_GS);
    printf("[1]. Gravitational force of attraction = %lf Newton\n", F_GS);

    return(0);
}
