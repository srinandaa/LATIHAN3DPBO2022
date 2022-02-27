#include <bits/stdc++.h>
#include <string>

using namespace std;

#include "processor.cpp"
#include "disk.cpp"
#include "ram.cpp"
#include "pc.cpp"

int main(){
    //inputan hardcode
    Processor p1("Intel Core i3", 2000000);
    Disk d1("SSD", 256, 2500000);
    RAM r1(16, 2000000);
    PC pc1(p1, d1, r1);

    Processor p2("Intel Core i7", 4500000);
    Disk d2("SSD", 512, 4000000);
    RAM r2(16, 2000000);
    PC pc2(p2, d2, r2);

    //output
    cout << "=============================" << endl;
    cout << "       Spesifikasi PC 1" << endl;
    cout << "=============================" << endl;
    pc1.printPC();

    cout << endl;
    cout << "=============================" << endl;
    cout << "       Spesifikasi PC 2" << endl;
    cout << "=============================" << endl;
    pc2.printPC();

    return 0;
}
