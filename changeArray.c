#include<stdio.h>
int main(){
  int s,k,r,q;
  printf("Enter the size of Array: ");
  scanf(" %d", &s);
  int arr[s];
  printf("Now enter the Elements One by One: \n");
  for(int i=0; i < s; i++){

    scanf(" %d", &arr[i]);
  }

printf("This is the Array you gave: \n");

  for(int i=0; i < s; i++){
    printf(" %d", arr[i]);
  }

printf("\n\nNow Enter the position at which you want to Enter New Element: \n");
scanf(" %d", &r);

printf("\nNow Enter the value you want to place at %d ", r);
scanf(" %d", &q);

arr[r] = q;

  for(int i=0; i < s; i++){
    printf(" %d", arr[i]);
  }




}
