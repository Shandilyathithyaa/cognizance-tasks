#include<iostream>

int main() {
	int s=0,x,i=6;
	std::cin>>x;
	do
	{
		i--;
		s+=x/i;
		x%=i;	
	}while(x%i!=0);
	std::cout<<s;
	return 0;
}
