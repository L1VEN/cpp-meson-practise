#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){
    int n;
    int current;
    int mini;
cout << "mini?\n";
cin >> mini;

int maxi;
cout << "maxi?\n";
cin >> maxi;

    fstream C_file;
    C_file.open("C_file.txt", ios::out);
    srand(time(NULL));
    for (int i = 0; i < n; i++){
    C_file << rand() % (maxi - mini + 1) + mini << " ";

    C_file >> current;
    cout << current * current << endl;

    C_file.close();
return 0;
}
}
