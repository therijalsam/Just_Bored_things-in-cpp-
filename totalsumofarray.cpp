#include<iostream>


void totalsum(int arr[], int iSize){
 int answer =0;
 for(int i=0; i<iSize; i++){
    answer += arr[i];
 }
  std::cout<<"Your total answer is "<<answer<<std::endl;

}



//main function
int main(){
 int iSize{};
 std::cout<<"How many number do you want to add: ";
 std::cin>>iSize;
  int arr[iSize];
  std::cout<<"Enter you numbers: ";
  for(int i=0; i< iSize; i++){
    std::cin>>arr[i];
  }
    totalsum(arr, iSize);
    return 0;
}
