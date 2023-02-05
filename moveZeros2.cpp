#include<bits\stdc++.h>

using namespace std;

// void swap(int a, int b)
// {
    
// }

void moveZeros(int arr[],int n)
{
    int k=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i] == 0){
            k=i;
            break;
        }
    }

    int i=k;
    int j=k+1;
    while(i<n && j<n){
        if(arr[j] != 0){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
        }
        
        j++;
    }
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}

int main(){
    int arr[] = {1,2,0,1,0,0,4,0,3,4,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    moveZeros(arr,n);
    return 0;
}