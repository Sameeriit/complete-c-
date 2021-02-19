//type of control statement
//three type
//1.selection statement
/*
if
if/else
switch case
*/
//2.repetition statement
/*
for loop
while loop
do-while loop
*/
//3.sequence statement
/*
break
continue
*/
//let see one by one
//1...>>
/*#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter the value :"<< endl;
    cin>> x >> y;
    if(x>y)
    cout<<"x is greater...!"<< endl;
    else
    cout<<"x is smaller...!"<< endl;


}
*/
//switch case
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The Value  :";
    cin>>n;
    switch(n)
    {
        case 1: cout<<"sameer"<<endl; break;
        case 2: cout<<"Amir" <<endl; break;
        case 3: cout<<"majid"<<endl; break;
        default : cout<<"not persent...! ";
    }
}*/
//2...>>
/*#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"enter the value which yiu want to count...!"<< endl;
    cin>>n;
    for(i=0;i<=n;i++)
    cout<<i << endl;
    
} */
//3...>>
/*#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<< "enter the value of n :";
    cin>> n;
    int i=1;
    while(i<=n){
        cout<<" "<< i;
        i+=1;
    }
}*/
//do-while
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter The value :"<<endl;
    cin>> n;
    int i=1;
    do{
        cout<< "I LOVE YOU"<< endl;
        i+=1;
    }while(i<=n);
}

