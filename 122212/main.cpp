#include "iostream"

int gcd(int a, int b){

    int min=a;
    int div=1;
    if (b<min){
        min=b;
    }

    for (int i=2;i<=min;i++){
        if  (a%i==0&&b%i==0){
            div=i;
        }
    }
    return div;
}

int mgcd(int a, int b){

    int min=a;
    int div=1;
    while (a!=b){
            if (a<b){
                b=b-a;
            }
            else if (a>b){
                a=a-b;
            }
            div=a;
    }
    return div;
}



int lcm(int a, int b){

    int max=a;
    int div=1;
    if (b>max){
        max=b;
    }

    for (int i=2;;i++){
        if  (i%a==0&&i%b==0){
            div=i;
            break;
        }
    }
    return div;
}

int a[]={4,3,2,1,3,2,4,1,2,3,2,};
int average(){
   const int el_count=sizeof(a)/sizeof(int);
   float avg=0.f;
   for (int i : a){
       avg+=static_cast<float>(i)/static_cast<float>(el_count);
   }
   return avg;
}

int factorials[10];

void fill_factor(){
    const int el_count=sizeof(factorials)/sizeof(int);
    factorials[0]=1;
    for (int i=1;i<el_count;i++){
        factorials[i]=factorials[i-1]*i;
    }

}

int factorial(int n){
    return factorials[n];
}

int bin(int n,int k){
    return factorial(n)/factorial(n-k)/factorial(k);
}

int bin_sum(int n){
    int sum=0;
    for (int i=0;i<=n;i++){
        sum+=bin(n,i);
    }
    return sum;
}

int main(){
    int a;
    int m=30;
    int n=15;
    fill_factor();
    std::cout <<"SUM BIN(9,k)="<<bin_sum(9)<< std::endl;
    std::cout << "GCD(" << m<< "," <<n<<")="<<mgcd(m,n)<< std::endl;
    std::cout << "LCM(" << m<< "," <<n<<")="<<lcm(m,n)<< std::endl;
    std::cout <<"avg="<<average()<< std::endl;
    std::cin>>a;
    return 0;
}