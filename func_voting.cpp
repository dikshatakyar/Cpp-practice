#include<bits/stdc++.h>
using namespace std;

void vote(int x) {
    if(x>=18) {
    cout<<"you are eligible to vote"<<endl;    
    }
    else
    {
        cout<<"you are not eligible to vote"<<endl;
    }
    return ;
    
}

int main() {
    int age;
    cout<<"enter your age"<<endl;
    cin>>age;

    vote(age);
    return 0;
}