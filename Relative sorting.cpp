using namespace std;
int main(){
	int n;
	cin>>n;
	while(n--){
		int size1,size2;
		cin>>size1>>size2;
		int *arr=new int[size1];
		int *arr1=new int[size2];
		map<int,int>m;
		for(int i=0;i<size1;i++)cin>>arr[i];
		for(int i=0;i<size1;i++)m[arr[i]]++;
		for(int i=0;i<size2;i++){
			cin>>arr1[i];
			if(m.find(arr1[i])!=m.end()){
			while(m[arr1[i]]>0){
			cout<<arr1[i]<<" ";
			m[arr1[i]]--;
		}
		m.erase(arr1[i]);}
	}
	for(auto i:m){
		int f=i.second;
		while(f--){
			cout<<i.first<<" ";
		}
	}
	cout<<endl;
}
}
