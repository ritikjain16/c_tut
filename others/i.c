# include<stdio.h>
int main(){
    int n;
    printf("Enter size of array");
    scanf("%d",&n);
    int a[10];
    printf("enter array elements");
    int i;
    for(i=0;i<n;i++){
    scanf("%d\t",&a[i]);
    }
    for(i=0;i<n;i++){
    printf("%d\t",a[i]);
    }
    
  int p;
  printf("\nenter position\n");
  scanf("%d",&p);

  int e;
  printf("value of element");
  scanf("%d",&e);

  
    for(i=n-1;i>=p-1;i--){
        a[i+1]=a[i];
        }
            a[p-1]=e;
            for ( i = 0; i<=n+1 ; i++)
            {
                printf("%d\t",a[i]);
            }
           

return 0;
// void display(int arr[],int n){
//     for (int i = 0; i <n; i++)
//     {
//         printf("%d\t",arr[i]);
//     }
//     printf("\n");
    
// }
// int insertion(int arr[],int s,int e,int c,int in){
//   if(s>=c){
//       return -1;
//   }
//   for (int i  =s-1; i >=in ; i++)
//   {
//       arr[i+1]=arr[i];
//   }
//   arr[in]=e;
//   return 1;
  
// }
// int main(){
//     int arr[100]={1,2,3,4,9};
//     int s=3,e=5,in=2;
//     display(arr,s);
//     insertion(arr,s,e,100,in);
//     s+=1;
//     display(arr,s);

// return 0;
}
    
    


