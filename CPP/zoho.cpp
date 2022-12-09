#include<iostream>
using namespace std;

// int main(){

// int x, *y;

// y=&x;

// x=10;

// cout<<"here"<<++(*y);

// }




// void fun(int *p, int m){

// m += 5;

// *p += m;

// }

// int main(){

// int i=5, j=10;

// fun(&i, j);

// cout<<i+j;

// return 0;

// }




// int main(){

// int x=5;

// int *const p=&x;

// *p += 5;

// cout<<x;

// }




// int main(){

// int a[5]={10, 20, 30, 40, 50}, *p;

// p=a;

// cout<<*(p+2);

// }




// #define NULL "Welcome";

// int main()

// {

//  char *ptr = NULL;

//  printf("%s",ptr);

//  return 0;

// }




// int main(){

// int *p;

// char *ch;

// float *f;

// cout<<sizeof(p)<<" " <<sizeof(ch)<<" "<<sizeof(f);

// return 0;

//}
//Assume size of char is 1, size of int is 2, size of float is 4 and size of pointer is 4



// int main(){

// char *s[ ] ={"knowledge", "is", "power"};

// char **p;

// p=s;

// cout<<++*p;

// cout<<*p++;

// cout<<++*p;

// }



// void f(int *p, int *q){

// p=q;

// *p=2;

// }

// int i=0, j=1;

// int main(){

// f(&i, &j);

// cout<<i<<" "<<j;

// }



// int main(){

// int *p1, p2;

// return 0;

// }



// int main(){

// int a[5]={1, 2, 3, 4, 5};

// int  *p;

// p=a;

// ++*p;

// p += 2;

// cout<<*p;

// }




// int main(){

// int a[]={10, 20, 30, 40, 50, 60}, *ptr;

// ptr =(int *)(&a+1);

// cout<<*(ptr-1);

// }




// int main(){

// int (*p)[10][20];

// printf("%d", sizeof(*p));

// printf("%d", sizeof(p));

// }




// void fun(int x, int y){

// int *p;

// x=0;

// p=&x;

// y=*p;

// *p=1;

// cout<<x<<" "<<y;

// }

// int main(){

// fun(5, 6);

// }


int main(){
    int find(int j){
        if(j>1){
            j=find(j/10)+(j%10);
        }
        else {
            j=0;
        }
        return j;

    }
    void main(){
        int i = 1024;
        int k;
        k = find(i);
        printf("%d",k);
    }
}