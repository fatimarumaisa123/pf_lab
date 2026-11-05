#include <stdio.h>
void printSensorData(void *data, char type)
{
    if (type =='f')
    {
        float temp = *(float *)data;
        temp= (temp-32) *(5.0/9.0);
        printf("Temperature: %.1fC\n", temp);
    }
    else if (type =='i')
    {
        int motion = *(int *)data;
        if (motion ==1)
            printf("motion detected\n");
        else if (motion ==0)
            printf("no notion\n");
        else
            printf("invalid input\n");
    }
    else if (type =='c')
    {
        char door = *(char *)data;
        if (door == 'O')
            printf("door open\n");
        else if (door =='C')
            printf("door closed\n");
        else
            printf("invalid input \n");
    }
    
}

int main()
{
    float temperature = 10;
    int motion = 0;
    char door = 'O';
    printSensorData(&temperature,'f');
    printSensorData(&motion,'i');
    printSensorData(&door,'c');

    return 0;
}