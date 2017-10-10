

#include <iostream>

using namespace std;

int uczniowie,cukierki, x, y;
int main() 
{
    cout << "ilu uczniow jest w klasie: ";
    cin>> uczniowie; 
    
    cout<< "ile cukierkow kupila mama:";
    cin>> cukierki;
    
    x = cukierki/(uczniowie-1);
    cout<<"cukierkow dla kazdego ucznia:"<<x;
    
    y = cukierki-x*(uczniowie-1);
    cout<<endl<<"dla jasia na wiczor:"<<y;
    
    return 0;
}

