#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
     int top=-1;
     int dizi[5];
     int Push_(int s1)
    {   
        if ( top==4)
        {  printf("Stack doludur.");
        }
        else
        {
            top=top+1;
            dizi[top]=s1;
        }
    }
    void pop_()
    { 
        if ( top==-1)
        {
            printf("Stack bostur.");
        }
        else
        {
           top = top - 1;
        }
    }
    int top_()
    {   printf("Stack'in top elemani %d",top);
        return 0;
    }




int main() {
   
    /* 1.	Sonsuz döngüde çalışan bir program yazın (dil farketmez, pseudocode da olur). Menü aşağıdaki gibi olsun.
    Yazılacak program tamamen metotlardan oluşacak ve stack için dizi yapısı kullanılacak. Dizi (stack) max 5 eleman almalı.
    1.	Push(x)
    2.	Pop
    3.	Peek
    4.	Clean Stack */
    int selection=0,sayi;
    

    while(selection!=4) 
    {   printf("\nİslemlerden birini giriniz: \n1.Push(x) \n2.Pop \n3.Top \n4.Clean Stack");
        scanf("%d",&selection);
        switch(selection)
        {
            case 1:
            {
                printf("Eklemek istedginiz sayiyi giriniz:\n");
                scanf("%d", &sayi);
                Push_(sayi);
                for(int i=0;i<=top; i++)
                {
                    printf("%d ",dizi[i]);
                }
                break;
                selection=0;
            }

            case 2:
            {   pop_();
                for(int i=0;i <= top; i++)
                {

                    printf("%d ",  dizi[i]);
                }
                break;
                selection=0;
            }
            case 3:
            {
                top_();
                break;
                selection=0;

            }
            case 4:
            {

            }
                default:
               break;
        }
        
    }
    getchar();
    return 0;
}


