#include <iostream>

int main(int args, char* argv[]){
	unsigned int summ = 0;
        unsigned int prod = 1u;
	if (args > 1){
		char *number=argv[1];
		int index =0;
		char ch;
		while((ch = number[index])!='\0' and index<11){
			if(ch>='0' and ch<='9'){
				summ += (ch-'0');
				prod *= (ch-'0');
			}
			else{ std::cout<<"wrong number '"<< argv[1] << "'" << std::endl;return 1;}
			++index;
		}
		std::cout<< summ << ", " << prod << std::endl;
	}
	else{
		unsigned int number;
		//std::cout<<"Input  number: "<<std::endl;
		std::cin>>number;

		do{
			summ+=number%10;
			prod*=number%10;
			number/=10;
		} while(number !=0);

		std::cout<<summ<<", "<<prod<<std::endl;

		return 0;

	}
}
