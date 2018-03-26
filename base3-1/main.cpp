//
//  main.cpp
//  base3-1
//
//  Created by suchao on 3/26/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n a1 d\n";
    int n,a,d,b;
    int sum = 0;
    cin >> n >> a >> d;
    b = a;
    for(int i=0; i<n; i++){
        sum = sum + b;
        b = b + d;
    }
    
    cout << "sum = " << sum << endl;
    
    
    return 0;
}
