//finding average
#include<stdio.h>
main()
{
    
    int sum=0;
    int avg=0;
    int x=0;
     int max;
    printf("Enter max:");
    scanf("%d",&max);
   
    int num[max];
    for(x=0;x<max;x++)
    {
    printf("ENTER a num:",(x+1));
    scanf("%d",&num[x]);
    }
    
    for(x=0;x<max;x++)
    {
        sum=sum+num[x];
    }
    avg=sum/10;
    printf("%d is the average.",avg);
}


//reversing string
#include<stdio.h>
main()
{
int begin=0;
int count=0;
int end=0;
char s[100];
char r[100];
printf("Plz enter a string:");
gets(s);
while(s[count]!='\0')
count++;

end=count-1;

for(begin=0;begin<count;begin++)
{
r[begin]=s[end];
end--;
}

r[begin]='\0';
printf("%s\n",r);
}

//char value
#include<stdio.h>
main()
{
int c=0,n=126;

while(c<=n)
{
    
printf("%d : %c\n",c,c);
c++;
}
}
