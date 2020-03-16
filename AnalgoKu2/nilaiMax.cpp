    #include <iostream>
    using namespace std;
   
    
    int main(){
    	int max, elemen, i=2;
    	
    	cout << "Jumlah elemen : "; cin >> elemen;
    	
    	int array[elemen];
    	
    	
    	for (int n = 0; n < elemen; n++){
    		cin >> array[n];
		}
		
		max = array[0];
		
		for(int n = 0; n < elemen; n++){
			if (array[n] > max){
				max = array[n];
			}
		}
		
		cout << "Nilai max :" << max;
		
	}
