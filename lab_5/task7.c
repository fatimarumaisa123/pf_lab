#include <stdio.h>
int main()
{
    int confidence, threshold;
    printf("input confidence: ");
    scanf("%d", &confidence);

    printf("input confidence threshold: ");
    scanf("%d", &threshold);

    if (confidence>=90)
        printf("confidence level: very high\n");
    else if (confidence>=75)
        printf("confidence level: high\n");
    else if (confidence >=50)
        printf("confidence level: moderate\n");
    else
        printf("confidence level: low\n");

    if (confidence>=threshold && confidence>=50)
    {
        printf("prediction accepted");
    }
    else
    {
        printf("prediction rejected");
    }

    return 0;
}

