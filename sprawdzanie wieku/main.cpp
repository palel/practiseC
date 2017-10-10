

#include <iostream>

using namespace std;
int wiek;
main()
{
    cout<<"ile masz lat:";
    cin>>wiek;
    
        
    if(wiek<18)
    {
        cout<<"Jestes niepelnoletni i nie możesz zostac prezydentem";
    }
    else if ((wiek >=18)&&(wiek<35))
    {
        cout<<"Jestes pelnoletni ale nie mozesz zostac prezydentem";
    }
    
    else
    {
        cout<<"Jestes pelnoletni i mozesz zostac prezydentem";
    }
    
    return 0;
}

