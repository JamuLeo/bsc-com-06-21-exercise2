
#include<iostream>
#include<string>
using namespace std;

int main(){

//allocating memory to an integer 
int *fnum=new int;

//prompting a user for an input for an integer
cout<<"Enter a value for the integer: ";
    cin>>*fnum;

//allocating memory to a string
    string *myText= new string;

//prompting a user for an input for an integer
cout<<"Enter a value for the string: ";
    cin>>*myText;

//outpus onto the console
cout<<"The integer value is : "<<*fnum<<endl;
cout<<"The string value is : "<<*myText<<endl;

//deallocating memory
    delete fnum;
    delete myText;

//setting our pointer to null
    fnum=nullptr;
    myText=nullptr;

    return 0;
}