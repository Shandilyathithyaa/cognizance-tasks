#include<iostream>

int main() {
	int s=0,x,i=5;
	std::cin>>x;
	while(x%i!=0)
	{
		s+=x/i;
		x%=i;	
		i--;
	}
	std::cout<<s;
	return 0;
}
