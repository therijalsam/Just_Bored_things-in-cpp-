#include<iostream>
using namespace std;

void reversearr(int arr[], int iSize){
    int iStart= 0;
    int iEnd = iSize-1;

    while(iStart <= iEnd){
        
        int temp = arr[iStart];
        arr[iStart] = arr[iEnd];
        arr[iEnd] = temp;
     iStart ++;
     iEnd--;
    }
}

void reversebrr(int brr[], int iSize){
    int iStart= 0;
    int iEnd = iSize-1;
     
    while(iStart <= iEnd){
        int temp = brr[iStart];
        brr[iStart] = brr[iEnd];
        brr[iEnd] = temp;
     iStart ++;
     iEnd--;
    }
}

void prntarr(int arr[], int iSize){
    for (int i = 0; i < iSize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void prntbrr(int brr[], int iSize){
    for (int i = 0; i < iSize; i++)
    {
        cout<<brr[i]<<" ";
    }
    cout<<endl;
}




int main()
{
    int arr[6]={1,4,0,5,9,8};
    int brr[5]={8,9,5,4,2};


    reversearr(arr,6);
    reversebrr(brr,5);

    prntarr(arr,6);
    prntbrr(brr,5);

    return 0;
}
