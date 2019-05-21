#include<stdio.h>
struct point //the variable is a structure which stores the value of the abcissa and the ordinate
{
	int a,b;
};
void swap(point&t1, point&t2) //for swapping
{
	point temp;
	temp=t1;
	t1=t2;
	t2=temp;
}
int partition(point w[1000], int low, int high) //used to find the position to divide the array into 2 about a pivot element
{
	int k;
	point pivot = w[high]; //The pivot is chosen as the last element of the array
	int i = low-1;
	
	for(k= low; k<=high-1; k++)
	{
		if(w[k].a < pivot.a || (w[k].a == pivot.a && w[k].b<=pivot.b ) ) //Element smaller than the pivot are moved forward
		{
			i++;
			swap(w[k],w[i]);
		
		}
		
	}
	swap(w[i+1],w[high]); //This brings the pivot element to the right postion in the ordered array
	return (i+1); //returns the position about which the array is to be divided
}
void quicksort(point w[1000], int low, int high)
{
	if(low<high)
	{
		int j= partition(w,low,high);
		quicksort(w,low,j-1);  //Uses recursion and two divided arrays undergo the same process
		quicksort(w,j+1,high); //the old pivot element is not included in these 2 new arrays
	}
}

int main() //The main function
{
 point t[1000];
 int n,i;
 printf("Enter the number of pairs");
 scanf("%d",&n);
 printf("Enter the pairs");
 for(i=0;i<n;i++)
 {
 	 scanf("%d %d",&t[i].a,&t[i].b);    
 } 
 quicksort(t,0,n-1);
 
 for(i=0;i<n;i++)
 {
 	 printf("%d,%d ",t[i].a,t[i].b);
 }	
 return 0;
}
