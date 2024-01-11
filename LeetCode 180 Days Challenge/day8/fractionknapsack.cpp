struct Item{
    int value;
    int weight;
};
*/
bool mysort(Item a, Item b)
{
    return (a.value/(double)a.weight)>(b.value/(double)b.weight);
}

// function to return fractionalweights
double fractionalKnapsack(int w, Item arr[], int n)
{double sum=0;
   sort(arr,arr+n,mysort);
   int i=0;
   while(i<n&&w>0)
   {    if(w>=arr[i].weight)
    {sum+=arr[i].value;
        w=w-arr[i].weight;
    }
    else
       {sum+=(arr[i].value/(double)arr[i].weight)*w;
           w=0;
       }
       i++;
   }
   return sum;
}
