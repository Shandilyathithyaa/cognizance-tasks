#include<iostream>

int main() {
	int s=0,x;
	std::cin>>x;
	for(int i=5;i>0;i--)
	{
		s+=x/i;
		x%=i;	
	}
	std::cout<<s;
	return 0;
}
