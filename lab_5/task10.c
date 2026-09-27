#include <stdio.h>
#include <math.h>
int main() 
{
    int acc,c_score,ds_size,model_status,permission,user;
    float m_score;
    printf("input accuracy percentage: ");
    scanf("%d",&acc);
    printf("input confidence score: ");
    scanf("%d",&c_score);
    printf("input data set size: ");
    scanf("%d",&ds_size);
    printf("select user role: \n1.admin \n2.developer \n3.researcher\n");
    scanf("%d",&user);
    printf("select model status: \n1.ready \n2.testing \n3.training\n");
    scanf("%d",&model_status);
    printf("input permission value: ");
    scanf("%d",&permission);
    if(acc>=80)
    {
        if(c_score>=75 && ds_size>=1000 && model_status==1 && permission&8)
        printf("DEPLOYMENT READY\n");
    }
    else 
       printf("not ready for deployment :((\n");
    m_score=(acc+c_score)/2;
    printf("model score: %.2f\n",m_score);
    if (permission!=0)
    {
     if ((permission&2) && (permission&8))
    printf("both training and deployment allowed\n");
    else if(permission&2 )
    printf("training allowed\n");
    else if(permission&8)
    printf("deployment allowed\n");
    if(permission&4 )
    printf("testing allowed\n");
    if(permission&1)
    printf("viewing allowed\n");
    }
    else 
    printf("nothing is allowed\n");
    switch (user)
    {
      case 1:
       printf("user role: admin");
       break;
      case 2:
       printf("user role: developer");
       break;
      case 3:
       printf("user role: researcher");
       break;
      default:
      printf("invalid user role");
      break;
    }
      switch (model_status)
    {
      case 1:
       printf("\nmodel_status: ready");
       break;
      case 2:
       printf("\nmodel_status: testing");
       break;
      case 3:
       printf("\nmodel_status: training");
       break;
      default:
      printf("\ninvalid model_status");
      break;
    }
  
 
    



return 0;
}