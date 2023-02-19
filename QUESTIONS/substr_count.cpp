#include<iostream>
using namespace std;


int countSubstring(string main_str, string sub_str)
{
    
    int cnt=0, i,j;
    for(i=j=0; main_str[i]; i++)
    {
        if(main_str[i]==sub_str[j])
            j++;
        else if(main_str[i]==sub_str[0])
            j=1;
        else
            j=0;

        if(sub_str[j]=='\0')
            cnt++;
    }
    
    return cnt;
}

int main()
{
    string main_str = "thelongreadonion";
    string sub_str = "on";

    cout<<"\nThe count : "<<countSubstring(main_str, sub_str)<<endl;
    return 0;
}