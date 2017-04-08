//
//  main.cpp
//  binary
//
//  Created by 한 석민 on 2014. 7. 22..
//  Copyright (c) 2014년 한 석민. All rights reserved.
//

#include <iostream>
#include <vector>

int binsearch(const std::vector<int>& A, int x){
    int n = A.size();
    
    int lo = -1, hi=n;
    
    while (lo+1 < hi) {
        int mid=(lo+hi)/2; //get the middle index
        if (A[mid]<x) //comparing the middle value of middle index with the value need to search for
            lo=mid; //found the value
        else
            hi=mid; //found the value
    }// if it didnt find the number in array, repeat the process until nothing left in array
    return hi;
}

int main(int argc, const char * argv[])
{

    // insert code here...
    const std::vector<int> A={1,2,3,4,5,6,7,8};
    int k = binsearch(A, 5);
    std::cout << "Hello, World!\n";
    std::cout<<k<<"\n";
    return 0;
    
}
