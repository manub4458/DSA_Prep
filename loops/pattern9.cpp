#include<iostream>
using namespace std;

int main(){
    int num=8;
   int n=num/2;
    for(int i = 0;i<n;i++){
       
            for(int j = 0;j<n-i-1;j++){
                cout << " ";
         
           
        }
        for(int k=0;k<i+1;k++){
             cout << "* ";
        }
        cout << endl;
    }
    for(int i = 0;i<n;i++){
       
            for(int j = 0;j<i;j++){
                cout << " ";
         
           
        }
        for(int k=0;k<n-i;k++){
             cout << "* ";
        }
        cout << endl;
    }
    
}