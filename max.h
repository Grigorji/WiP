#include<iostream>
int max(int* wsk)
{
    int max;
        cout<<"Function MAX"<<endl;
        for(int i=0;i<sizeof(wsk)/sizeof(*wsk);i++)
        {
            if(i>i+1){
               max=i+1;
            }else{
                max=i;
            }
        }
        return max;
}

