#include<stdio.h>
#include<stdlib.h>

typedef struct ADT
{
    /* data */
    int takenData;
    int usedData;
    int *ptr;
}ADT;

void setData(struct ADT *a,int taken,int used){
    a->takenData = taken;
    a->usedData= used;
    a->ptr = (int *)malloc(taken*sizeof(int));
}
void show(struct ADT *a){
    for (int i = 0; i < a->usedData; i++)
    {
        printf("%d\n",a->ptr[i]);
    }
    
}

void set(struct ADT *a){
    for (int i = 0; i < a->usedData; i++)
    {
        scanf("%d",&a->ptr[i]);
    }
    
}

int main(){
    ADT a;
    setData(&a,10,5);
    set(&a);
    show(&a);
    return 0;
}