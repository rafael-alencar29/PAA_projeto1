#include <iostream>
#include <stdio.h>
using namespace std;

typedef long long  tipo1;
typedef long long  tipo2;

tipo1 Binary_Search(tipo2 arr[],tipo1 low, tipo1 high, tipo2 key){
    tipo1 pos = -1;

    while(low <= high){
	     tipo1 mid = (high + low)/2;
      	if(arr[mid] == key){
      	    pos = mid;
      	    high = mid - 1;
      	}
      	else if(arr[mid] < key)	low = mid + 1;
      	else high = mid - 1;
    }
    return pos;
}
int main(){
    tipo1 N, Q;
    cin>>N>>Q;
    tipo2 arr[N],key;

    for(tipo1 i=0;i<N;++i)
		    scanf("%lld",&arr[i]);
    while(Q--){
	       scanf("%lld",&key);
         printf("%lld\n",Binary_Search(arr,0,N-1,key));
    }
    return 0;
}
