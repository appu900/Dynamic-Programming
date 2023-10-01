#include<bits/stdc++.h>
using namespace std;



int sumOf(int n){
    if( n == 0) return 0;
    return n + sumOf(n-1);
}


void reverseArray(vector<int>&nums,int start,int end){
    if(start >= end) return;
    swap(nums[start],nums[end]);
    reverseArray(nums,start+1,end-1);
}


bool checkStringPalindrom(string &s,int i){
    if( i >= s.size()/2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return checkStringPalindrom(s,i+1);
}


int fibonnaciSeries(int n){
    if( n == 0) return 0;
    if( n == 1) return 1;
    return fibonnaciSeries(n-1) + fibonnaciSeries(n-2);
}


int factorial(int n){
    if( n == 1) return 1;
    return n * factorial(n-1);
}




int main(){

    vector<int>nums{1,2,3,4};
    reverseArray(nums,0,nums.size()-1);
    

    string s = "madam";
    cout<<checkStringPalindrom(s,0)<<endl;


    cout<<fibonnaciSeries(4)<<endl;


    cout<<factorial(5);
    




    
}