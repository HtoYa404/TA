#include <iostream>

double dGet_A(int iNumber){
	static double list[] = {1.1, 5.2, 9.3, 4.4, 3.5, 7.6, 0.7, 2.8, 8.9, 6.0};
	return list[iNumber % 10];
}

int main(void){
	const int m = 256;
  	const int mu = 65;
  	int y = 7;
  	int nv = 10;
  
  	for(int n = 0; n < nv;++n){
		double s = 0;
		for(int i = 0; i <=n; ++i){
			s += dGet_A(i) * y;
		} 
		int yn = (int)(s + mu)%m;
		double xn = (double)yn / m;
		y = yn;
		std::cout << "random value: " << xn << "\n";
  	}
  	return 0;
}

