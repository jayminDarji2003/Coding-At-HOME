// This is the repeat program of the pr1_createArray.

#include<stdio.h>
#include<stdlib.h>

struct myArray{
    int total_size;
    int used_size;
    int *ptr;
}marks;

void createArray(struct myArray *a,int tSize, int uSize){
    a->total_size=tSize;
    a->used_size=uSize;
    a->ptr=(int *)malloc(tSize * sizeof(int));
}
void setArray(struct myArray *b){
    int  temp;
    for(int i=0;i<b->used_size;i++){
        printf("Enter element %d = ",i+1);
        scanf("%d",&temp);
        (b->ptr)[i]= temp;
    }
}
void disArray(struct myArray *c){
    for (int i = 0; i < c->used_size; i++)
    {
        printf("%d\t",c->ptr[i]);
    }    
}

int main(){
    // struct myArray marks;    //I have defiend after making the structure.
    createArray(&marks,5,3);

    printf("---We are running setArray now---\n");
    setArray(&marks);

    printf("---We are running disArray now---\n");
    disArray(&marks);

    return 0;
}