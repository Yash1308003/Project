#include<iostream>
#include<conio.h>
using namespace std;

int main(){
//declaring variable for calculation
int sum=0;
int diff=0;
double div;
double c,d;
int mul=1;
int a,b,n,m;
int rem;

//taking input from user
do{

cout<<"1. Addition"<<endl<<"2. subtraction"<<endl<<"3. Multiplication"<<endl<<"4. Division"<<endl<<"5. Remainder"<<endl<<"6. Exit the program"<<endl;
cout<<"Enter your choice: ";
cin>>n;
if(n==1){
   //Addition logic
    cout<<"Enter how many numbers you want to add: ";
    cin>>m;
    for(int i=1;i<=m;i++){

       cout<<"Enter "<<i<<" number: ";
       cin>>a;
        sum += a;
     }
    cout<<"Sum is "<<sum<<endl;
}

else if(n==2){
    //Subtraction logic
    cout<<"Enter number you want to subtract from: ";
    cin>>a;
    cout<<"Enter number you want to subtract: ";
    cin>>b;
    cout<<"Difference is "<<a-b<<endl;
}

else if(n==3){
    cout<<"Enter how may numbers you want to multiply: ";
    cin>>m;
    for(int i=1;i<=m;i++){
        cout<<"Enter "<<i<<" number to multiply: ";
        cin>>a;
        mul *= a;
    }
    cout<<"Product is: "<<mul<<endl;
}

else if(n==4){
    cout<<"Enter divisor: ";
    cin>>d;
    cout<<"Enter dividend: ";
    cin>>c;
    div=c/d;
    cout<<"Quotient is "<<div<<endl;
}

else if(n==5){
    cout<<"Enter divisor: ";
    cin>>a;
    cout<<"Enter dividend: ";
    cin>>b;
    rem = b%a;
    cout<<"Remainder is "<<rem<<endl;
}

else if(n==6){
    cout<<"Program has ended!!!"<<endl;
}

else{
    cout<<"Wrong input entered!!!"<<endl;
}

cout<<endl<<"Press any key to continue...."<<endl<<endl;
_getch();
}while(n!=6);

return 0;
}
