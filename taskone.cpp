#include <iostream>>
using namespace std;

int main(){
int square_side;
cout << "Side = " ;
cin >> square_side;

int square_P = 4 * square_side;
int square_S =  square_side * square_side;

cout << "P = " << square_P <<endl;
cout << "S = " << square_S <<endl;

return 0;
}
