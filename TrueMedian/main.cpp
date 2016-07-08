//
//  main.cpp
//  TrueMedian
//
//  Created by Brent Perry on 7/8/16.
//  Copyright © 2016 Brent Perry. All rights reserved.
//

#include "../../../std_lib_facilities.h"

int main()
{
    vector<double> temps;
    for (double temp; cin >> temp;)
        temps.push_back(temp);
    
    sort(temps);
    if (temps.size() % 2 == 0) {
        double temp1 = temps[int (temps.size() / 2)];
        double temp2 = temps[int ((temps.size() / 2) - 1)];
        cout << "Median temperature: " << (temp1 + temp2) / 2.0 << "\n";
    } else {
        cout << "Median temperature: " << temps[temps.size()/2.0] << "\n";
    }
}
