#include <iostream>
#include <print>
int apply_gravity(float y, float g)
{
    // velocity
    float v = 0;

    // number of seconds counter until the object reaches the ground(0y)
    float s = 0;

    std::printf("Started 0s, %.2f y\n", y);

    while(y > 0)
    {
        v = v + (g / 1000000); // higher precision
        y = y - (v / 1000000); // higher precision
        s = s + 0.000001;
        std::printf("time %.6f s  |  y %.6f m  |  v %.6f m/s\n", s, y, v);
    }

    return s;
}

// main program
int main()
{
    // change values here to apply different surface gravities and y levels for an object to fall through
    // y level stops at 0 by default, is measured in meters
    // surface gravity is measured in m/s^2
    apply_gravity(/* change the y level in this arg */0.4, /*change the surface gravity in this arg*/274);

    return 0;

}

