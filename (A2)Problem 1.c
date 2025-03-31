#include <stdio.h>
#include<math.h>

int calculate_order(double wavelength, double theta, double d) {
    double wavelength_m = wavelength * 1e-9; 
    double d_m = d * 1e-6; 
    double sin_theta = sin(theta * M_PI / 180); 
    int order = round(d_m * sin_theta / wavelength_m); 
    return order;
}

int main() {
    double wavelength, theta, d;
    
    
    printf("Enter wavelength (nm): ");
    scanf("%lf", &wavelength);
    
    if (wavelength < 380 || wavelength > 750) {
        printf("Out of range. Please enter a valid number (380-750 nm).\n");
        return 1;
    }
    
    printf("Enter angle theta (degrees): ");
    scanf("%lf", &theta);
    
    if (theta < 0 || theta > 90) {
        printf("Invalid angle. Theta must be between 0 and 90 degrees.\n");
        return 1;
    }
    
    printf("Enter slit separation d (μm): ");
    scanf("%lf", &d);
    
    if (d <= 0) {
        printf("Slit separation must be positive.\n");
        return 1;
    }
    
    
    int Result = calculate_order(wavelength, theta, d);
    
    
    printf("%d-th order maxima\n", Result);

    return 0; 
}
