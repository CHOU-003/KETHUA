#include <iostream>
#include <cmath>

using namespace std;

void Tong1() {
    double sum =0, n;
    cout << "Nhap n: "; cin >> n;
    for(int i=1; i<=n; i++){
        double x = 1.0 / (2.0 * i);
        sum += x;
    }
    
    cout << "Tong la: " << sum;
}

void Tong2() {
    int n,mul = 1;
    int sum = 0;
    cout << "Nhap n: "; cin >> n;
    for(int i=1; i<=n; i++){
        mul = mul*i;
        sum += mul;
    }
    
      cout << "Tong la: " << sum;
}

bool kt(int k){
     for(int i=2; i<= k/2; i++){
         if(k % i==0){
             return false;
         }
     }
     
    return true;
}

void LietKe() {
    int n;
    cout << "Nhap n: "; cin >> n;
    for(int i=2; i<n; i++){
        if(kt(i)){
        cout << "i= " <<i << "; ";
        }
    }
    cout << endl;
}

void Tong3(){
    int n;
    cout << "Nhap n: "; cin >> n;
    int sum = 0;
    while(n > 0){
        sum += (n%10);
        n /=10;
    }
    
    cout << "Tong la: "<< sum; 
}

int TimUocSo(int a, int b){
    if(b == 0){
        return a;
    }else {
        return TimUocSo(b, a%b);
    }
}

int main()
{
    int chon;
    cout << "Nhập số câu muốn xem: ";
    cin>>chon;
    
    switch(chon) {
        case 1:
            Tong1();
            break;
        case 2:
            Tong2();
            break;
        case 3:
            LietKe();
            break;
        case 4:
            Tong3();
            break;
        case 5:
            int a, b;
            cout << "Nhap a: ";
            cin >> a;
            cout << "Nhap b: ";
            cin >> b;
            int KQ = TimUocSo(a,b);
            cout << "Uco so can tim la: "<< KQ;
    }

    return 0;
}
