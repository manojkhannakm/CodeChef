#include<bits/stdc++.h>
using namespace std;
#define MAX 1000005
#define rep(i,a,b) for(i=a;i<=b;i++)
#define repr(i,a,b) for(i=a;i>=b;i--)
#define ll long long
int N,Q;
char str[MAX];
ll V[5][MAX] , POS[26] , SC[5][5][MAX];
char S[]={'c','h','e','f'} , a ,b;
int Count[5] , L, R;
 
void process(){
 
	int i,j,k;
 
	rep(i,1,4)
		POS[S[i-1]-'a'] = i;	// let us number the character in the chef's special string as c = 1 , h = 2 , e = 3 , f = 4 (Mapping function)
 
	rep(i,1,N)
		V[POS[str[i-1]-'a']][i] = 1;	// V[i][j] -> keep trace for the occurence of ith character in the chef's string at position is present or not.
 
	repr(i,N,1){
		rep(j,1,4)			//  SC[i][j][k] -> it keep trace for the number of characters j after position k if kth position's character is i
			SC[POS[str[i-1]-'a']][j][i] = Count[j];
		Count[POS[str[i-1]-'a']]++;
	}
 
	rep(i,1,4)
		rep(j,1,4)
			repr(k,N-1,1)
				SC[i][j][k]+=SC[i][j][k+1];	// This is to maintain suffix sum for the fast processing
	rep(i,1,4)
		rep(j,1,N)
			V[i][j]+=V[i][j-1];			// this is prefix sum for the fast processing of the query

	rep(i, 1, 4)
	{
		rep(j, 1, 4)
		{
			rep(k, 1, N)
			{
				printf("%lld ", SC[i][j][k]);
			}

			printf("\n");
		}

		printf("\n");
	}
}
 
int main(){
	scanf("%s",str) ;	// str-> chef's special string
	N = strlen(str);
	assert(N>=1&&N<MAX);
	int i;
	rep(i,1,N)
		assert(str[i-1] == 'c' || str[i-1] == 'h' || str[i-1] == 'e' || str[i-1] == 'f' ) ;
	process();	// preprocessing
 
	scanf("%d",&Q) ;
	assert(Q>=1&&Q<MAX);
	while(Q--){
		getchar() ;
		scanf("%c %c%d%d",&a,&b,&L,&R);		// symbols have the same meaning as mentioned in the problem statement
		//cout << a << " " << b << endl ;
		assert(L>=1&&L<=N);			// assertion
		assert(R>=1&&R<=N);			// assertion
		assert(L<R);				// assertion
		assert((a=='c' || a=='h' || a=='e' || a=='f') && (b=='c' || b=='h' || b=='e' || b=='f') );
		assert(a!=b);
		ll total = 0;
		total = SC[POS[a-'a']][POS[b-'a']][L] - SC[POS[a-'a']][POS[b-'a']][R+1] ;	// this will give us the total count of b after all a's in the range L to R.
		total = total - ((V[POS[a-'a']][R] - V[POS[a-'a']][L-1] ) * (V[POS[b-'a']][N] - V[POS[b-'a']][R] ));	// for each occurence of a we have subtracted the total occurence of b after R (this will be constant for all a's so we can use the above formualla directly).
		printf("%lld\n",total) ;  	// This is total number of good strings as asked in the query.
	}
	return 0;
}
