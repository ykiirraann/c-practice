#include<stdio.h>

void main(){
    int i =0,j=0,c=0;
    char str[]={"Zoho Corp Pvt Ltd"};
    while(str[i]!='\0'){
        j=i;
        while((str[j]!=' ') && (str[j]!='\0')){
            j++;
        }
        if(str[j]==' ')c++;
        i=j+1;
    }
    printf("%d\n",c);
}