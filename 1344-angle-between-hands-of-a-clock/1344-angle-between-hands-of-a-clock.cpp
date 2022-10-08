class Solution {
public:
    double angleClock(int h, int m) {
        
         if (h <0 || m < 0 || h >12 || m > 60)
        return -1.1;
 
    if (h == 12) h = 0;
    if (m == 60)
     {
      m = 0;
      h += 1;
       if(h>12)
        h = h-12;
     }
 float hour_angle = 0.5 * (h * 60 + m);
    float minute_angle = 6 * m;
         
        float angle = abs(hour_angle - minute_angle);
 
    
    angle = min(360 - angle, angle);
 
    return angle;
    }
};