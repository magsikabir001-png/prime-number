  #include<iostream>
  using namespace std;
  int main(){
	int n;
	cout<<"enter n";
	cin>>n;
	for(int i=2; i<=n; i++){
	if(n%2==0){
		break;
	}
}
	if(n%2!=0) {
		cout<<"prime no"<<endl;
	} else{
		cout<<"not"<<endl;
	}
	return 0;
}