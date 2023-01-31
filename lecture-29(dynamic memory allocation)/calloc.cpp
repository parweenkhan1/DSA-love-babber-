#include<iostream>
using namespace std;
int main(){
    int *ptr = (int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        cout<<ptr[i]<<endl;
    }
    free(ptr);
    return 0;
}