#include <iostream>
#include <iomanip>
using std::cout;
using std::endl;

main()
{
    int v1,v2,temp;
    
    v1=12;v2=36;
    cout<<"數字交換前 :v1="<<v1<<"，v2="<<v2<<endl;
    temp=v1;
    v1=v2;
    v2=temp;
    cout<<"數字交換後 :v1="<<v1<<"，v2="<<v2<<endl;
    system("Pause");
}
