#include <iostream>
int fibonacci(int n){
     if (n<2) return 1;
	
	return fibonacci(n-1)+fibonacci(n-2);

}
void new_function(){

	std::cout << "input of an old message"<< std::endl;

}
