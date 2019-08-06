#include<stdio.h>
int main(){
  int s,k;
  printf("Enter the size of Array: ");
  scanf(" %d", &s);
  int arr[s];
  printf("Now enter the Elements One by One: ");
  for(int i=0; i < s; i++){

    scanf(" %d", &arr[i]);
  }

  for(int i=0; i < s; i++){
    printf(" %d", arr[i]);
  }





}
