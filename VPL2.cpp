#include <iostream>
using namespace std;

int main(){
    int num;
    int j=0;
    cin >> num;
    for (int i=0;i<num;i++) {
        for(int j=-1;j!=i;j++){
            cout<<"*";
            }
        cout<<endl;
        }
    for (int i=0;i<num;i++) {
        for(int j=num-1;j!=i;j--){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}