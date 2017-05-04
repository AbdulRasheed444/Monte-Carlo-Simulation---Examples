/*
Find Area under the curve of the function f(x)=√(cos2(x)+1) between 0≤x≤2
*/

#include<stdio.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>

void main()
{
	int totalDarts=100000;  //Total Darts to throw
	int dartsCounter=0; //Counter for Darts that falls under the curve
    srand(time(0));  //Initializes the random number generator with seed
    int i = 0;

    for(i; i<totalDarts; i++)
	{
        double x=rand()/(1.0 * RAND_MAX);  //Generates a random value x between 0 and 1
        if((double)sqrt(pow(cos(x),2)+1)<=2.414214)
        {
            dartsCounter++;
        }
 	}

 	printf("Area Under Curve: %lf \n", (2.0 * dartsCounter)/totalDarts);
    printf("Darts thrown under the Curve: %d", dartsCounter);
}
