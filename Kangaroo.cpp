#include<iostream>
#include<math.h>
using namespace std;

string kangaroo(int x1, int v1, int x2, int v2){

    if(v1 == v2) return "NO"; 
    float a = (float)(x2-x1) / (v1-v2);

    if(a >= 1 && floor(a)==ceil(a) ) return "YES";
    return "NO";
}
int main(){

    int x1,v1,x2,v2;
    cin >> x1;
    cin >> v1;
    cin >> x2;
    cin >> v2;

    string result = kangaroo(x1,v1,x2,v2);
    cout << result;

}