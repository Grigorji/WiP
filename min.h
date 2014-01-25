#include<iostream>
int min(int* wsk)
{
    int min;
        cout<<"Function MIN"<<endl;
        for(int i=0;i<sizeof(wsk)/sizeof(*wsk);i++)
        {
            if(i>i+1){
               min=i+1;
            }else{
                min=i;
            }
        }
        return min;
}
