#include<iostream>
using namespace std;
class MyClass {
public:
    void fun(int arr[],int l) {
        int minIdx = 0;
        for (int i= 1;i<l;i++){
            if (arr[i]<arr[minIdx]){
                minIdx=i;
            }
        }
        swap(arr[minIdx],arr[l-1]);
    }
};

int main(){
    int n;
    cout<<"元素个数：";
    cin>>n;
    int *arr = new int[n];
    cout<<"交换前(各元素用空格隔开)：";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    if (!cin){
        cout<<"数据错误！";
        cout<<endl;
        delete[] arr;
        return 0;
    }
    MyClass obj;
    obj.fun(arr,n);
    cout<<"交换后：";
    for(int i=0;i<n;i++){
        cout << arr[i]<<" ";
    }
    cout<<endl;
    delete[] arr;
    return 0;

}