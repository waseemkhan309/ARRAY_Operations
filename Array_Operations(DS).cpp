	#include<iostream>
	using namespace std;
	class Array{
		public:
			int a[20]={18,30,15,70,12};
			int i,x,posi,n=5;
//			traversing the array
			void Traversing(){				
				for(int i=0;i<n;i++){
					cout<<"arr["<<i<<"] = "<<a[i]<<endl;
				}
			}
//			insertion at randam posi
			void insert(int x){
				n=5;
				cout<<"Random Position = ";cin>>posi;
				cout<<"Value is "<<x<<endl;
				
				if(posi<=0||posi>=n){
					cout<<"invalid Position "<<endl;
				}else{
				n=n+1;
				for(int i=n;i>=posi;i--)
				{
					a[i]=a[i-1];
				}
				a[posi-1]=x;
			Traversing();   //   Display after insertion
			}
							}
							
//          Deletion from Random position
			void delet(){
				cout<<"Deletion Position =";cin>>posi;
				for(int i=posi-1;i<=n;i++){
					a[i]=a[i+1];
				}
				n=n-1;
				Traversing();   //   Display after Deletion
				
			}
// 			search 
			void search(){
				cout<<"Value search = ";cin>>x;
				for(int i=0;i<n;i++){
					if(a[i]==x){
						cout<<x<<" value Found  at "<<i<<" index."<<endl;
						
					}
					
				}
			}
// updating
			void updating(int x){
				cout<<"Enter position Updating value = ";cin>>posi;
				a[posi-1]=x;
				Traversing();
			}
			
	};
	
	
	int main(){
		Array a;
		a.Traversing(); // Traversing
		a.insert(100); //  Insertion
		a.delet();     //   Deletion
		a.search();		//  Searching
		a.updating(34);  //  Updating
		return 0;
	}