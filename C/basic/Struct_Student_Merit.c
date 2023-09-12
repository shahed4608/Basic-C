#include<stdio.h>
typedef struct student
{
    int roll;
    float sub[3],total;

} st;

int main()
{
    st student[3];
    for(int i=0; i<3; i++)
    {
        printf("\nEnter Student Roll:");
        scanf("%d",&student[i].roll);
        float sum=0;
        for(int s=0; s<3; s++){
                printf("Enter marks for subject %d : ", s+1);
            scanf("%f",&student[i].sub[s]);
            sum+=student[i].sub[s];


        }
        student[i].total=sum;
    }
    for(int i=0;i<3;i++){
        for(int c=i+1;c<3;c++){
            if(student[i].total<student[c].total)
                {st temp=student[i];
            student[i]=student[c];
            student[c]=temp;}
        }
    }
    printf("\nMerit   Roll    Marks\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t%3d\t%3.2f\n", (i+1),student[i].roll, student[i].total);
    }

    return 0;
}
