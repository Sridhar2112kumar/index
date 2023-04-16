#include<stdio.h>
int que[5];
int s=4,e=0;
void push(){
    if(e==5 && s!=4)e=0;
    if(e==s || e==5){
        printf("THE QUEUE IS FULL");
    }else{
        int num;
        printf("ENTER THE ELEMENT TO BE PUSHED");
        scanf("%d",&num);
        que[e++]=num;
        if(e==5 && s<4)e=0;
    }
}
void pop(){
    if(s==5 && e>0)s=0;
    if(s+1==e || s==4){
        printf("THE QUEUE IS EMPTY.");
    }else{
        printf("THE DELETED ELEMENT IS %d\n",que[++s]);
        if(s==5 && e>0)s=0;
    }
}