#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = GetAvgerageValue(numberset,setlength);
    s.min = GetMinimumValue(numberset,setlength);
    s.max = GetMaximumValue(numberset,setlength);
}

float GetMinimumValue(const float* numberset,int setlength)
{ 
    float min = 100000;
    for(int i=0;i<setlength;i++)
    {
	    if(numberset[i] < min)
	    {
	    min = numberset[i];
	    }
    }
return min;
}

float GetMaximumValue(const float* numberset,int setlength)
{
    float max = -5000;
    for(int i=0;i<setlength;i++)
    {
	    if(numberset[i] > max)
	    {
	    max = numberset[i];
	    }
    }
return max;
}

float GetAvgerageValue(const float* numberset,int setlength)
{
   float avg =0;
    for(int i=0;i<setlength;i++)
    {
	    avg+=numberset[i];
    }
return (float)(avg/setlength);
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
