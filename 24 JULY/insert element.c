//3> wap to insert an element at a specific position in an array.


#include <stdio.h>
void delete_index();

int main(){
int arr[12] = {1,2,3,4,5,6,7,8,9,10};
int element,index,size = 11;

output(arr,size);

    printf("Enter the element you wanna insert\n");
    scanf("%d",&element);
    printf("\nNow enter the index where you wanna insert that element\n");
    scanf("%d",&index);

    insert_element(arr,size,index,element);

output(arr,size);
return 0;
}

void insert_element(int arr[], int size, int index, int element){
     int i,j;
     for(i = 0; i<size; i++){
        if ( i == index){
            for( j = size-1; j>i; j--){
                    arr[j] = arr[j-1];
            }
            arr[i] = element;
        }
    }
}

void output(int arr[], int size){
    int i;
    printf("\n\nyour array now is :\n");
    for(i = 0; i<size; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}




