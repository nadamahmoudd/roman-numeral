#include <iostream>
#include <vector>

using namespace std;

int main(){
// FCI – Programming 1 – 2018 - Assignment 2
// Program Name: team task.cpp
// Last Modification Date: 1/3/2018
// Author1 and ID and Group: Nada Mohamed Mahmoud 20170370 G-14
// Author2 and ID and Group: Aya Amr Mohamed 20170359 G-14
// Teaching Assistant: Eng:
int p;
vector<char> conver;
while(true){
cout<<"Enter the number you want to convert: ";
cin>>p;
if(p<=3000 && p>=1000){
    break;
   }else{
       cout<<"Enter number between 1000 and 3000";
   }
}

while(p>=1000){
p=p-1000;
conver.push_back('M');}
int k=p%100;
p=p/100;
if(p>5){
        for(int q=0;q<(10-p);q++){
            conver.push_back('C');}
        conver.push_back('M');
 }
else if (p==1){
    conver.push_back('C');

 }else if (p<5){
     conver.push_back('D');
     for(int a=0;a<(5-p);a++){
            conver.push_back('C');}
     }
     else if (p==5){
         conver.push_back('D');
         }
int w=k%10;
k=k/10;
if(k>5){
        conver.push_back('L');
        for(int z=0;z<(k-5);z++){
                conver.push_back('x');}
        }
else if (k==1){
    conver.push_back('X');

     }else if (k<5 && k>1){
         for(int b=0;b<(5-k);b++){
                conver.push_back('X');}
         conver.push_back('L');
}else if (k==5){
    conver.push_back('L');
}
if(w>5){
        conver.push_back('V');
        for(int j=0;j<(w-5);j++){
                conver.push_back('I');}
        }
else if (w==1){
        conver.push_back('I');

 }else if (w<5 && w>1){
     for(int j=0;j<(5-w);j++){
            conver.push_back('I');}
     conver.push_back('V');}
     else if (w==5){
            conver.push_back('V');
     }
     for(int o=0;o<conver.size();o++){
            cout<<conver[o];
     }
     }









