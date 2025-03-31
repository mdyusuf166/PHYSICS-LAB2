#include <stdio.h>
#include <math.h>


int main() {
    double theta = 45.0;  // Angle in degrees
    double sin_theta = sin(theta * M_PI / 180.0); // Convert to radians and compute sine
    double ratio = 1.0 / sin_theta;

    printf("The ratio of slit width to wavelength is: %.5f\n", ratio);
    return 0;
}
