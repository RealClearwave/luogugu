#include <bits/stdc++.h>
#define S sys##tem
using namespace std;

int main(){
    for(register int i=0;;++i){
        char c[100];
        sprintf(c,"/tmp/chen_zhe%d.o",i);
        //S(c);
        ofstream gugu(c);
        gugu<<"Hello burnt green bird!"<<endl;
        gugu.close();
    }
    //S("rm -f /tmp/chen_zhe.o");
    S("ls -a /tmp");
}
