import java.util.Scanner;

public class selectionsort
{
		public static void sort(int array[])
	{
		int n=array.length;
		int temp,i,pos,j;
		
		for(i=0;i<n;i++)
		{
		pos=i;
		for(j=i+1;j<n;j++)
		{
			if(array[j]<array[pos])
			{
				pos=j;
				
		}
	}
	temp=array[i];
	array[i]=array[pos];
	array[pos]=temp;
	
}
  }
  
  public static void main(String[] args)
	{
	
		int n,i;
		Scanner scan = new Scanner(System.in);
		System.out.println("Enter the size of array: ");
		n = scan.nextInt();
		int array[]=new int[n];
		System.out.println("\nEnter the elements: ");
		for(i=0;i<n;i++)
		{
		array[i]=scan.nextInt();
		}
	    sort(array);
	    System.out.println("\nThe sorted array is: ");
	    for(i=0;i<n;i++)
	    {
	    System.out.print(array[i]+" ");
		}
	}
}
