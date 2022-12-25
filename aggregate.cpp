#include<iostream>
using namespace std;
main(){
string name;
float matricmarks;
float intermarks;
float ecatmarks;
float aggregate;
cout<<"Enter your Name:  "<<endl;
cin>> name;
cout<<"Enter your Matric Marks:  "<<endl;
cin>> matricmarks;
cout<<"Enter your Inter Marks:  "<<endl;
cin>> intermarks;
cout<<"Enter your Ecat Marks:  "<<endl;
cin>> ecatmarks;
aggregate=(ecatmarks*50/400)+(intermarks*40/1100)+(matricmarks*10/1100);
cout<<"Your Aggreate is:   "<<aggregate<<endl;
}