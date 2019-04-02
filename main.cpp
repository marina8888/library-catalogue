//
// Created by Marina Kovaleva on 2019-04-01.
//

#include "class.h"
#include <iostream>
using namespace std;

void m(int c){
    &c=200;
};

int main(){
    int marina;
    int* PointerNamemarina;
    PointerNamemarina=&marina;
    marina=2;
m(PointerNamemarina);
 cout<<PointerNamemarina<<endl;

 return 0;
}

