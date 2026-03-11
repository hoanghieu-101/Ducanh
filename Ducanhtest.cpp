#include <iostream>
using namespace std;
int n, a[1000];
void Nhapmang(int a[1000], int &n)
{
	cout<<"Nhap so luong n:"; 
	cin>>n;
	if((n<1)||(n>1000)) {
		cout<<"Du lieu khong hop le"; 
	}
for (int i=0; i<n; i++){
	cout<<"Nhap so luong phan tu a["<<i<<"]:";
	cin>>a[i];  
	}
}
void Xuatmang(int a[1000], int n)
{
	cout<<"Cac phan tu cua mang la:";
	for (int i=0; i<n; i++){
		cout<<a[i]<< " "; 
	} 
}
void Soduongnhonhat(int a[1000], int n)
{
	int min=a[0]; 
	for (int i=0; i<n; i++){
		if((a[i]<min)&&(a[i]>0)){
			min=a[i]; 
		cout<<"\nSo duong nho nhat la:"<<min; 
		} 
		else{
			cout<<"\nSo duong ko co trong mang"; 
		} 
	} 
	
 } 
int main() {
	Nhapmang(a, n); 
	Xuatmang(a, n);
	Soduongnhonhat(a, n); 
}
