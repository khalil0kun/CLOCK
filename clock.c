#include<stdio.h>
#include<windows.h>

int main(){
    int choice;
    printf("Are You A 'H24' Or 'H12' Clock Format Guy ? (Enter 1 For H24 And 0 For H12)  ");
    scanf("%d",&choice);
    while (choice != 1 && choice != 0){
        printf("\nPlease Enter A Valid Input !  ");
        scanf("%d",&choice);
    }
    switch (choice){
    case 1:
        int h,m,s,a=1;
        printf("\nWhat Time Is it ? (hours)  ");
        scanf("%d",&h);
        while (h<0 || h>24){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&h);
        }
        if(h==24){
            h=0;
        }
        printf("\nWhat About Minutes ?  ");
        scanf("%d",&m);
        while (m<0 || m>=60){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&m);
        }
        printf("\nAnd Seconds ?  ");
        scanf("%d",&s);
        while (s<0 || s>=60){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&s);
        }
        printf("\n\n\n\n");
        while (a!=0){
            if (h<10 && m<10 && s<10){
                printf("\rTime ==> 0%d:0%d:0%d",h,m,s);
            } else if(h<10 && m<10){
                printf("\rTime ==> 0%d:0%d:%d",h,m,s);
            } else if(h<10 && s<10){
                printf("\rTime ==> 0%d:%d:0%d",h,m,s);
            } else if(m<10 && s<10){
                printf("\rTime ==> %d:0%d:0%d",h,m,s);
            } else if(h<10){
                printf("\rTime ==> 0%d:%d:%d",h,m,s);
            } else if(m<10){
                printf("\rTime ==> %d:0%d:%d",h,m,s);
            } else if(s<10){
                printf("\rTime ==> %d:%d:0%d",h,m,s);
            } else{
                printf("\rTime ==> %d:%d:%d",h,m,s);
            }
            Sleep(1000);
            s+=1;
            if (s==60){
                s=0;
                m+=1;
                if(m==60){
                    m=0;
                    h+=1;
                    if(h==24){
                        h=0;
                    }
                }
            }
        }
        break;
    
    case 0:
        int c;
        printf("\nWhat Time Is it ? (hours)  ");
        scanf("%d",&h);
        while (h<0 || h>12){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&h);
        }
        printf("\nWhat About Minutes ?  ");
        scanf("%d",&m);
        while (m<0 || m>=60){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&m);
        }
        printf("\nAnd Seconds ?  ");
        scanf("%d",&s);
        while (s<0 || s>=60){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&s);
        }
        printf("Is It 'AM' or 'PM' ? (Enter 1 For AM And 0 For PM)   ");
        scanf("%d",&c);
        while (c != 1 && c != 0){
            printf("\nPlease Enter A Valid Input !  ");
            scanf("%d",&c);
        }
        printf("\n\n\n\n");
        while (a!=0){
            if (c==1){
                if (h<10 && m<10 && s<10){
                    printf("\rTime ==> 0%d:0%d:0%d AM",h,m,s);
                } else if(h<10 && m<10){
                    printf("\rTime ==> 0%d:0%d:%d AM",h,m,s);
                } else if(h<10 && s<10){
                    printf("\rTime ==> 0%d:%d:0%d AM",h,m,s);
                } else if(m<10 && s<10){
                    printf("\rTime ==> %d:0%d:0%d AM",h,m,s);
                } else if(h<10){
                    printf("\rTime ==> 0%d:%d:%d AM",h,m,s);
                } else if(m<10){
                    printf("\rTime ==> %d:0%d:%d AM",h,m,s);
                } else if(s<10){
                    printf("\rTime ==> %d:%d:0%d AM",h,m,s);
                } else{
                    printf("\rTime ==> %d:%d:%d AM",h,m,s);
                }
            } else if (c==0)
            {
                if (h<10 && m<10 && s<10){
                    printf("\rTime ==> 0%d:0%d:0%d PM",h,m,s);
                } else if(h<10 && m<10){
                    printf("\rTime ==> 0%d:0%d:%d PM",h,m,s);
                } else if(h<10 && s<10){
                    printf("\rTime ==> 0%d:%d:0%d PM",h,m,s);
                } else if(m<10 && s<10){
                    printf("\rTime ==> %d:0%d:0%d PM",h,m,s);
                } else if(h<10){
                    printf("\rTime ==> 0%d:%d:%d PM",h,m,s);
                } else if(m<10){
                    printf("\rTime ==> %d:0%d:%d PM",h,m,s);
                } else if(s<10){
                    printf("\rTime ==> %d:%d:0%d PM",h,m,s);
                } else{
                    printf("\rTime ==> %d:%d:%d PM",h,m,s);
                }
            }
            Sleep(1000);
            s+=1;
            if (s==60){
                s=0;
                m+=1;
                if(m==60){
                    m=0;
                    h+=1;
                    if(h==12){
                        if (c==1){
                            c=0;
                        }else if(c==0){
                            c=1;
                        }
                    }else if(h>12){
                        h=1;
                    }
                }
            }
        }
        break;
    }
    return 0;
}