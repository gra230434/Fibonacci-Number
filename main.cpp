//
//  main.cpp
//  string
//
//  Created by WeiKevin on 2015/11/19.
//  Copyright © 2015年 WeiKevin. All rights reserved.
//

#include <iostream>
#include <string>
#include <cstring>
#include <cstdio>
using namespace::std;

unsigned int fibonacci(int input){
    unsigned int answer=0,first=1,second=1;
    if (input==1) {
        return first;
    }else if (input==2){
        return second;
    }else{
        for (int i=1; i<=input-2; i++) {
            answer=first+second;
            first=second;second=answer;
        }
    }

    return answer;
}


int main(int argc, const char * argv[]) {
    // insert code here...
    int input;
    
    while (cin>>input) {
        cout<<fibonacci(input)<<endl;
    }
    
    return 0;
}