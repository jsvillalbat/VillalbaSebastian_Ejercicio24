#include <iostream>
#include <cmath>


float gaussian(float x, float sigma);

int main()
{
    float pi = 2.0*asin(1.0);
    srand48(7);
    int i;
    float delta = 1.0;
    float sigma = 1.0;

    for (i=0;i<10000;i++)
    {
        float punto = drand48();
        float propuesta  = punto + (drand48()-0.5)*delta;
        float r = std::min(sigma, gaussian(propuesta, sigma)/gaussian(punto, sigma));
        float alpha = drand48();
        if(alpha<r)
        {
             std::cout << propuesta << '\n';        
        }
        else
        {
            std::cout << punto<<'\n';   
        }
    }
    return 0;
}


float gaussian(float x, float sigma)
{
    float pi = 2.0*asin(1.0);
    return exp(-(x*x)/(2.0*(sigma*sigma))/sqrt(2.0*pi*sigma*sigma));
}

