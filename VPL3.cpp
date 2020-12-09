#include <iostream>
using namespace std;

int main() {
     long value1 = 200000, value2;  
     long *long_ptr = &value1;
     cout<<*long_ptr<<" ";
     value2 = *long_ptr;
     cout<<value2<<" ";
     cout<<&value1<<" ";
     cout<<long_ptr<<" ";
     cout<<(long_ptr== &value1)<<" ";
     unsigned int values[5] = {2,4,6,8,10};
     unsigned int *v_ptr;
     for(int i = 0;i<5;i++) {
          cout<<values[i]<<" ";
     }
     v_ptr=values;
     for(int i=0;i<5;i++){
          cout<<*(v_ptr+i)<<" ";
     }

     for(int i=0;i<5;i++){
          cout<<*(values+i)<<" ";
     }

     for(int i=0;i<5;i++){
          cout<<v_ptr[i]<<" ";
     }

     cout<<values[4]<<" "<<*(values+4)<<" "<<v_ptr[4]<<" "<<*(v_ptr+4)<<" "; 

     v_ptr += 3;
     cout<<v_ptr<<" ";
     cout<<*v_ptr<<" ";
     v_ptr -= 3;
     cout<<v_ptr<<" ";
     cout<<*v_ptr<<" ";

     return 0;
}
