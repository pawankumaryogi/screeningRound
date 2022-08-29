#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if (n == 1 )
		return false;

	for (int i = 2; i < n; i++) {
	
		if (n % i == 0)
			return false;
	}
	return true;
}

int main()
{
	int N;
  cout<<"Enter an integer number"<<endl;
  cin>>N;

	for (int i = 1; i <= N*2; i++) {
		if (isPrime(i))
    {
      if(i==2)
      cout<<i-1<<" ";
      else
			cout<< i << " ";
    }
	}

	return 0;
}
