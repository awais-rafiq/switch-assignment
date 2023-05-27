//program check number is even or odd

//#include<iostream>
//using namespace std;
//int main()
//{
//	int n;
//	cout<<"enter the number."<<endl;
//	cin>>n;
//	if(n%2==0)
//	cout<<"number is even.";
//	else
//	cout<<"number is odd.";
//}


#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the number."<<endl;
	cin>>n;
	if(n%2==0)
	cout<<n<<" is an even number.";
	else if(n%2!=0)
	cout<<n<<" is an odd number .";
	  else
    cout<<"your output  is invalid please enter only integer value.";


}
