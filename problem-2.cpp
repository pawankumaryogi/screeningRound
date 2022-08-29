#include <bits/stdc++.h>
using namespace std;
int main()
{
	int N;
  cout<<"Enter an integer number"<<endl;
  cin>>N;
  int count = 1;
	for (int i = 1; count <= N; i=i+2) {
		cout<<i<<" "<<endl;
    count++;
	}

	return 0;
}
