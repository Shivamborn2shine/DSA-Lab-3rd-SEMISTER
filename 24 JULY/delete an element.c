//2> wap to delete an element from an given array.


#include <stdio.h>
void delete_index();

int main(){
int arr[] = {1,2,3,4,5,6,7,8,9,10};
int index,element,i,j,size = 10,answer;

output(arr,size);

    printf("Enter if you wanna delete index or element \n(1) for index \n(2) for element\n");
    scanf("%d",&answer);
    if (answer == 1){
        printf("Choose index to delete -> ");
        scanf("%d",&index);
        delete_index(arr,size,index);
    }
    else if(answer == 2){
        printf("Choose element to delete -> ");
        scanf("%d",&element);
        delete_element(arr,size,element);
    }

output(arr,size);
return 0;
}

void delete_index(int arr[], int size,int index){
     int i,j;
     for(i = 0; i<size; i++){
        if ( i == index){
            for( j = i; j<size; j++){
                    arr[j] = arr[j+1];
            }
        }
    }
}
void delete_element(int arr[], int size,int element){
     int i,j;
     for(i = 0; i<size; i++){
        if ( arr[i] == element){
            for( j = i; j<size; j++){
                    arr[j] = arr[j+1];
            }
        }
    }
}

void output(int arr[], int size){
    int i;
    printf("\n\nyour array now is :\n");
    for(i = 0; i<size-1; i++){
        printf("%d ",arr[i]);
    }
    printf("\n\n");
}
