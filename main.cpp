//
//  main.cpp
//  cal
//
//  Created by saesol on 2018. 5. 25..
//  Copyright © 2018년 scit3. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    char A;
    cout<<"첫번째 수";cin>>num1;
    cout<<"연산자";cin>>A;
    cout<<"두번쨰 수";cin>>num2;
    
    if(A=='+')
    {
        cout<<num1+num2;
    }
    if(A=='-')
    {
        cout<<num1-num2;
    }
    if(A=='*')
    {
        cout<<num1*num2;
    }
}
