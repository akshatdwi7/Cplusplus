#include<iostream>
using namespace std;
 
 void cube(int cub , string hi){
    if(cub>=5){
    cub= cub *cub*cub;} 
    else {
        cout<< "this not greater than 5";
        cout<<cub<<hi;
    }

}
int main(){
cube(2," ");

}
