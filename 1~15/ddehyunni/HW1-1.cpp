#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int month,used,charge,tax;
	cout<<"Please enter a month(1~12): ";
	cin>>month;
	cout<<"Please enter a kWh (integer): ";
	cin>>used;
	if (month==3 || month==4 || month==5 || month==6 || month==9 || month==10 || month==11){
		if (used<=200) {charge=910+floor(93.3*used);
		}
		else if (used<=400){charge=1600+floor(93.3*200+187.9*(used-200));
		}
		else{charge=7300+floor(93.3*200+187.9*200+280.6*(used-400));
		}
	}
	else{
		if (used<=200) {charge=910+floor(93.3*used);
		}
		else if (used<=400){charge=1600+floor(93.3*200+187.9*(used-200));
		}
		else if(used<=1000){charge=7300+floor(93.3*200+187.9*200+280.6*(used-400));
		}
		else{charge=7300+floor(93.3*200+187.9*200+280.6*600+709.5*(used-1000));
		}
	}
	tax=floor(charge*0.1+0.5)+(floor(charge*0.037/10))*10;
	cout<<"Electric charge is "<<charge+tax;
	return 0;
}
