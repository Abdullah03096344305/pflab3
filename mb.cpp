#include<iostream>
using namespace std;
main(){
int mb;
int kb;
double kilobytes;
double megabytes;
cout<<"--------------------------------------------------------------\n";
cout<<"Enter data in Megabytes:  "<<endl;
cin>>mb;
kb=(mb*1024)*(1024)*(8);
cout<<"Your data in Kilobytes:  "<<kb<<endl;
cout<<"--------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"----------------------------------------------------------------\n";
cout<<"Enter data in bytes" <<endl;
cin>>kilobytes;
megabytes=(kilobytes/1024)/(1024)/8;
cout<<"Your data in Megaytes:  "<<megabytes <<endl;


}