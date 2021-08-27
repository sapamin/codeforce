#include <bits/stdc++.h>
#include <vector>
#include <stdio.h>
using namespace std;
int main()
{

int w;
int N;
int k=0;
int count1=0;
int inputn=0;
int a,b,c,d;
int tmp=0;
int even;
scanf("%d %d",&w,&N);
vector<int> width;
vector<int> height;

for(int i=0;i<w;++i){
	scanf("%d ",&inputn);
	width.push_back(inputn%2);
}
for(int j=0;j<w;++j){
	scanf("%d ",&inputn);
	height.push_back(inputn%2);
}

while (k<N)
{
    scanf("%d %d % %d",&a,&b,&c,&d);
    if (a>c)
    {
        tmp=c;
        c=a;
        a=tmp; 		
	}
	else
	{
		continue;
	}

    if (b>d)
    {
	    tmp=b;
        b=d;
        d=tmp;
    }
    else
	{
		continue;
	}
    
	even=0;
    
    for(int A=a;A<=c;A++)
	{
		for(int B=b;B<=d;B++)
		{
			if(width[A-1]==height[B-1])
			{
			even++;
		    }
		    else
		    {
		    	continue;
			}
			
		}
	}
	if(even>=((c-a)+(d-b))*2)
	{
		printf("YES\n");
	}

	else
	{
		printf("NO\n");
	}

k++;    
}

return 0;
}
