//
//  09_(2021)0915_2.cpp
//  Project
//
//  Created by LU,CHENG-HUNG on 2021/9/15.
//

#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;
#include "09_(2021)0915_2.hpp"
int main()
{
    int int_Dividend = 7;
    int int_Divisor = 3;
//--start--
    printf("兩數相加為：");
    cout <<  int_Dividend + int_Divisor << endl;
    printf("兩數相減為：");
    cout <<  int_Dividend - int_Divisor << endl;
    printf("兩數相乘為：");
    cout <<  int_Dividend * int_Divisor << endl;
    printf("兩數取餘數為：");
    cout <<  int_Dividend % int_Divisor << endl;
//--end--
    system("Pause");
return 0;
}
