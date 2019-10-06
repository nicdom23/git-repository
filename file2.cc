#include <iostream>

int main(){
std::string s1{};
int size{1};
int first{};
for(std::string line; std::getline(std::cin,line);)
{
	if (first == 0)
		first ++;
			
	else if(s1 == line)
		size++;
	else if (s1 != line){
		std::cout << "("<< size << ")"<< " " << s1<< std::endl;
		size = 1;
		}
	s1 = line;
}


return 0;
}
