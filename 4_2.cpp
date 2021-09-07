#include<iostream>

int QuadrantFINDER(float x,float y)
{
    if(x>0&&y!=0)
    {
        if(y>0)
        {
            return 1;
        }
        else if(y<0)
        {
            return 4;
        }
    }
    else if(x<0&&y!=0)
    {
        if(y>0)
        {
            return 2;
        }
        else if(y<1);
        {
            return 3;
        }
    }
}
int main()
{
    float x,y;
    printf("Put your x and y :");
    scanf("%f %f",&x,&y);

    printf("Your number is in Quadrant \"%d\"",QuadrantFINDER(x,y));


}