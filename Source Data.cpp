#include <iostream>
#include <math.h>

using namespace std;

string inputanChecker;
 
int i,j,x=0,True=0, des=0;

int main() {
	string sourceData= "10010101001011110101010001"; 
    cout <<"masukkan nilai yang ingin dicari : ";
    cin >>inputanChecker;
    	for (int i= 0; i<sourceData.size(); i++) {
        	for (int j=0; j<inputanChecker.size(); j++) {
           		if (inputanChecker[j]==sourceData[i+j]) {
                x++;
            } 	else {
                x=0;
                break;
            }
        }
        		if (x==inputanChecker.size()) {
            True=1;
            	break;
        	} 	else {
            True=0;
        }
    }
    if (True==1) {
        cout<<"nilai "<<inputanChecker<<" ditemukan didalam Source Data.\n";
        int y=inputanChecker.size()-1;
        for (int j=inputanChecker.size()-1; j>=0; j--) {
            if (inputanChecker[j]=='1') {
                des=des + pow(2, (j-y)*-1);
            } else
            {
                des = des +0;
            }
        }
        cout<<"Nilai desimalnya adalah : "<<des;
    } else cout<<"Nilai " <<inputanChecker<<" tidak ditemukan didalam Source Data";
    return 0;
}
