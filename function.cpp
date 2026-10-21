#include <iostream>
using namespace std;

// all prime no. in (2,n) are to be done!
int fibonarcci(int n){
    if (n==0||n==1){
        return 0;
    }
    int a=0;
    int b=1;
    cout<<a<<" ";
    cout<<b<<" ";
    for (int i=0;i<n-2;i++){
        int sum = a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    return 0;

}


bool primecheck(int n){
    if (n<=1){
        return false;
    }
    else if (n==2)
    {
      return true;
    }
    else{
    int check=n-1;
    while (check>2){

        if (n%check==0){
            return false;
        }
        check--;
    }
    return true;
}
}

int fact(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n * fact(n-1);
}

int nCr_cal(int n,int r){
    int nCr= (fact(n))/(fact(r)*fact(n-r));
    return nCr;
}

int sumofdt(int n){
    if (n == 0) {
        return 0;
    }
    int sum=0;
    while (n > 0) {
        sum=sum+n%10;
        n /= 10;    
    }
   
    return sum;
}

int sum(int a ,int b){
    int z=a+b;
    return z;
}

void great(const char* name){
    cout<<"Hello user, "<<name<<endl;
    return;
}

int main(){
    int x;
    int y;
    cin>>x;
    cout<<"X : ";
    cout<<x;
    cout<<endl;
    cin>>y;
    cout<<"Y: ";
    cout<<y;
    cout<<endl;
    great("jiyansh\n");
    cout<<"Sum of x and y: "<<sum(x,y)<<endl;
    cout<<"Sum of digits in x: "<<sumofdt(x)<<endl;
    cout<<"Sum of digits in y: "<<sumofdt(y)<<endl;
    cout<<"Factorial of x: "<<fact(x)<<endl;
    cout<<"Factorial of y: "<<fact(y)<<endl;
    cout<< "xCy combination: "<<nCr_cal(5,3)<<endl;
    cout<<"Is x prime?: "<<boolalpha<<primecheck(x)<<endl;
    cout<<"Is y prime?: "<<boolalpha<<primecheck(y)<<endl;
    cout << "Fabonarcci till xth position be: "; fibonarcci(x); cout<<endl;
    cout << "Fabonarcci till yth position be: "; fibonarcci(y); cout<<endl;
}