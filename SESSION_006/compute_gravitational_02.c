#include <stdio.h>

int main(void)
{
    double m1_GCS;                      // for storing mass of object 1
    double m2_GCS;                      // for storing mass of object 2
    double r_GCS;                       // for storing distance between objects
    double G = 6.67 * 10e-11;       // universal constant of gravitation
    double F_GCS;                       // for storing gravitational force of attraction

    printf("Enter mass of object 1 in kgs: ");
    scanf("%lf", &m1_GCS);

    printf("Enter mass of obejct 2 in kgs: ");
    scanf("%lf", &m2_GCS);

    printf("Enter distance between objects in meters: ");
    scanf("%lf", &r_GCS);

    if(m1_GCS <= 0.0 || m2_GCS <= 0.0 || r_GCS <= 0.0)
    {
        printf("Invalid value for mass or distance\n");
        return(-1);
    }

    F_GCS = (G * m1_GCS * m2_GCS) / (r_GCS * r_GCS);
    printf("[2]. Gravitational force between two objects is %lf Newton\n", F_GCS);

    return(0);
}