//
//  09_(2021)0908_1.cpp
//  Project
//
//  Created by LU,CHENG-HUNG on 2021/9/8.
//

#include <iostream>
#include <iomanip>
#include <string>
using std::cout;
using std::endl;

int main()
{
    int v1,v2,temp;
    
    v1=12;v2=36;
    cout<<"數字交換前 :v1="<<v1<<"，v2="<<v2<<endl;
    temp=v1;
    v1=v2;
    v2=temp;
    cout<<"數字交換後 :v1="<<v1<<"，v2="<<v2<<endl;
    system("pause");
    return 0;
}
