#include<stdio.h>
void main()
{int pass,count,ch,num1,num2,ans;
printf("Enter password \n");
for(count=0;count<=3;count++)
{scanf("\n %d",&pass);
if(pass==1234)
{printf(" !! UNLOCKED !! \n ");


printf("\n Press 1 for calculator \n Press 2 for lock your phone \n");
scanf("%d",&ch);
        if(ch==1)
{
        pass=1;
while(pass==1)
{
    printf("\n Press 1 for addition \n Press 2 for substraction \n press 3 for multiplication \n press 4 for division \n press 5 to exit \n ");
        scanf("%d",&count);
        switch(count)
{
        case 1: printf("\n Enter two number \n");
                scanf("%d %d",&num1,&num2);
                ans=num1+num2;
                printf("\n answer is %d",ans);
                break;
        case 2: printf("\n Enter two number \n");
                scanf("%d %d",&num1,&num2);
                ans=num1-num2;
                printf("\n answer is %d",ans);
                break;
        case 3: printf("\n Enter two number \n");
                scanf("%d %d",&num1,&num2);
                 ans=num1*num2;
                 printf("\n answer is %d",ans);
                 break;
        case 4:  printf("\n Enter two number \n");
                 scanf("%d %d",&num1,&num2);
                 if(num1==0)
                    printf("division not possible answer is infinity");
                 else ans=num1/num2;
                 printf("\n answer is %d",ans);
                 break;
        case 5: pass=0;
                break;
        default:
                printf(" \n !! INVALID CHOICE !! \n");
                break;
}
}

}
break;}
}


printf("\n Phone is permanently locked go to your operator \n");
printf("\n Dial Emergency number examples \n 100 for police \n 108 for ambulance \n 101 for Fire ");
scanf("%d",&ch);
if(ch==100)
    printf("Police will arrive in a minute \n !! PLEASE WAIT!!");
    else if(ch==108)
        printf("Ambulance will arrive in a minute \n !! BE CALM !!");
    else if(ch==101)
        printf("Firefighter`s are arriving \n !! PLEASE WAIT !!");
printf(" !! INCORRECT PASSWORD !! \n");

}
