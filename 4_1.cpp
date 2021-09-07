#include<iostream>

int QuadrantFINDER(float x,float y)
{
   int q[]={3, 4, 2, 1};
   int sx = ((int)(x/x*((x>0)-(x<0))) + 1)/2;
   int sy = ((int)(y/y*((y>0)-(y<0))) + 1); 
   return q[sx+sy];
}
int main()
{
    float x,y;
    printf("Put your x and y :");
    scanf("%f %f",&x,&y);

    printf("Your number is in Quadrant \"%d\"",QuadrantFINDER(x,y));


}