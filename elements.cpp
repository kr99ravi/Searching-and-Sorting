#include<iostream>
#define N 10
using namespace std;

void Bubble(int arr[])
{
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void Selection(int arr[])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            if (arr[i] < arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void Insertion(int arr[])
{
    
  for(int i=1;i<N;i++)
  {
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current && j>=0)
      {
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;
  }
}

void Linear(int arr[], int key)
{
    for (int i = 0; i < N; i++)
    {
        if (arr[i] == key){
            cout<<"found at index: "<<i;
            exit(0);}
    }
    cout<<key<<" is not present in the array.";
}

void Binary(int arr[], int key)
{
    int start = 0, end = N - 1;
  
       
        while (start <= end)
        { 
            int mid = (start + end) / 2;
            if (arr[mid] == key){
                 cout<<"Found at index: "<< mid;
               exit(0);
            }
              
            else if (arr[mid] > key)
                end = mid - 1;
            else if (arr[mid] < key)
                start = mid + 1;
       
    }
    cout<<key<<" is not found in the array.";
}

void Display(int arr[])
{
    cout<<"     ********Printing Array********"<<endl;
    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << endl;
    }
}

int main()
{
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        arr[i] = rand() % 100;
    }

    char c;
    while (1)
    {
       int key=64;
        cout << "\n1.Bubble Sort\n2.Selection Sort\n3.Insertion Sort\n4.Linear Search\n5.Binary Search\n6.To Print Array\n7.Exit" << endl;
        cout << "        ***************Enter Your Choice************      " << endl;
        cin >> c;
       
        switch (c)
        {
        case '1':
            cout << "Searching..." << endl;
            Bubble(arr);
            break;
        case '2':
            Selection(arr);
            break;
        case '3':
            Insertion(arr);
            break;
        case '4':
            Linear(arr, key);
            break;
        case '5':
            Binary(arr, key);
            break;
        case '6':
            Display(arr);
            break;
        case '7':
            exit(0);
        }
    }

    return 0;
}
