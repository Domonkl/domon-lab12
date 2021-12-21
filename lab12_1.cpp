#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
string grade[9] = {" A "," B+ "," B "," C+ "," C "," D+ "," D "," F "," W "};
cout << "Press Enter 3 times to reveal your future.";
int i;

for (i = 0;i<3;i++){
    cin.get();
}
if(i == 3){
    srand(time(0));
    int y = rand()%9;
    cout << "You will get" << grade[y] <<"in this 261102.";
    return 0;
}
}
 
 