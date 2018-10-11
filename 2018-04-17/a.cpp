#include <iostream>
#include <ctime>
 
using namespace std;
 
int main()
{
    char *registro;
    time_t tAct = time(NULL);
cout << "Tiempo actual: " << asctime(localtime(&tAct));
registro=asctime(localtime(&tAct));
cout<<registro;
 
system("pause");
 
return 0;
}
