/*********************************************************************
File name: finding_the_index.cpp
Author: Samrakshan Rijal 
Date: 10/26/2024

Purpose:
    This program finds and returns the index of a specified integer in a large integer array.
Command Parameters:
    None.
Input:
    - The user inputs an integer they wish to search for in the array.
Results:
    - If the integer is found, the program prints its index.
    - If the integer is not found, the program notifies the user.
Notes:
    - The program uses a linear search to find the index of the integer.
*********************************************************************/


#include<iostream>



/*********************************************************************
int fndindex(int garr[], int iSize, int ikey);
Purpose:
    This function searches for a given integer (ikey) in an array and 
    returns its index if found; otherwise, it returns -1.
Parameters:
    I   int garr[]: The array in which the search is performed.
    I   int iSize: The size of the array.
    I   int ikey: The integer value to search for in the array.
Return Value:
    - int: The index of the integer if found, otherwise -1.
Notes:
    - Assumes that all elements in the array are unique.
    - The function uses a simple linear search algorithm.
*********************************************************************/

 int fndindex(int garr[], int iSize, int ikey){
 int ifix = ikey;
 for (int i = 0; i< iSize; i++){
  if(ifix== garr[i]){
    return i;
  } 
 }
  return -1;
 };


int main(){

// declaring random integer array called arr
  int arr[] = {
    11, 12, 1, 13, 141, 51, 41, 32, 9, 28, 
    37, 45, 56, 68, 70, 82, 90, 100, 123, 134,
    145, 155, 166, 178, 189, 200, 214, 225, 236, 245,
    256, 267, 278, 289, 300, 310, 320, 330, 340, 350,
    360, 370, 380, 390, 400, 410, 420, 430, 440, 450,
    460, 470, 480, 490, 500, 511, 521, 531, 541, 551,
    561, 571, 581, 591, 601, 610, 620, 630, 640, 650,
    660, 670, 680, 690, 700, 711, 721, 731, 741, 751,
    761, 771, 781, 791, 801, 811, 821, 831, 841, 851,
    861, 871, 881, 891, 901, 911, 921, 931, 941, 951
};

//calculating the size of array 
int iSize= sizeof(arr)/ sizeof(arr[0]);
int iKey{};
std::cout<< "Please enter the number which you wanna return the index: " ;
std::cin>> iKey;
int iAnswer = fndindex(arr, iSize,iKey);


//printing the index 
if(iAnswer == -1){
  std::cout<<"We could not find your number."<<std::endl;
}
  else{
  std::cout<<"We found your number. Its index is: "<<iAnswer<<std::endl;

  }

return 1;
}
