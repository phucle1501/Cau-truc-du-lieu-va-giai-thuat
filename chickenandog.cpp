#include <iostream>
using namespace std;
int main() {
       int total,totallegs;
       cin>>total>>totallegs;
       bool flag=false;
       int chicken;
       for (chicken=1;chicken<36;chicken++)
       {
           if(chicken*2+(total-chicken)*4==totallegs)
           {
               flag=true;
               break;
           }
       }
       
       int dog;
       dog=(totallegs-2*total)/2;
       chicken=total-dog;
        if(dog>0 && chicken>0)
        {
            cout<<"chicken = "<<chicken<<","<<" dog = "<<dog;
        }
        else cout<<"invalid";
        return 0;
    
}
