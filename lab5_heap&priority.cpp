#include<bits/stdc++.h>
using namespace std;
#define int long long int

template<typename T>
class Heap
{
private:
    vector<T>arr;
    int n;

    void heapify(int i)
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if (l<n && arr[l]>arr[largest])
            largest=l;

        if (r<n && arr[r]>arr[largest])
            largest=r;

        if (largest!=i)
        {
            swap(arr[i],arr[largest]);
            heapify(largest);
        }
    }


    void heapify(int n,int i)
    {
        int largest=i;
        int l=2*i+1;
        int r=2*i+2;

        if (l< n && arr[l]>arr[largest])
            largest=l;
        if (r<n && arr[r]>arr[largest])
            largest=r;

        if (largest!=i)
        {
            swap(arr[i],arr[largest]);
            heapify(n,largest);
        }
    }

public:
    Heap()
    {
        arr.clear();
        n=0;
    }

    void clean()
    {
        arr.clear();
        n=0;
    }

    void buildHeap()
    {
        int startIdx=(n/2)-1;

        for (int i=startIdx; i>=0; i--)
        {
            heapify(i);
        }
    }

    void push(int val)
    {
        arr.push_back(val);
        n++;
        buildHeap();
    }

    void display()
    {
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        cout<<endl;
        return;
    }

    void heapSort()
    {
        for (int i=n/2-1; i>=0; i--)
            heapify(n,i);

        for (int i = n - 1; i >= 0; i--)
        {
            swap(arr[0],arr[i]);
            heapify(i,0);
        }
    }

    T front()
    {
        return *arr.begin();
    }

    void deleteRoot()
    {
        T lastElement=arr[n-1];
        arr[0]=lastElement;
        n=n-1;
        arr.pop_back();
        heapify(0);
    }

    void deleteElement(int idx)
    {
        T lastElement=arr[n-1];
        arr[idx]=lastElement;
        n=n-1;
        arr.pop_back();
        buildHeap();
    }

    void insertNode(int Key)
    {
        arr.push_back(Key);
        n=n+1;
        buildHeap();
    }

    void updateNode(int idx,int val)
    {
        arr[idx]=val;
        buildHeap();
    }

    void displayHeap()
    {
        while(!arr.empty())
        {
            cout<<*arr.begin()<<endl;
            deleteRoot();
        }
        return;
    }
    void SortDesc()
    {
        for (int step = 1; step < n; step++)
        {
            int key = arr[step];
            int j = step - 1;
            while (key > arr[j] && j >= 0)
            {

                arr[j + 1] = arr[j];
                --j;
            }
            arr[j + 1] = key;
        }
    }
};

void generateTable()
{
    clock_t begin1,end1,begin2,end2,begin3,end3;
    double cputime1,cputime2,cputime3;
    vector<vector<double>>table(10,vector<double>(5));
    int t=10;
    int z=0;
    int factor=5000;
    Heap<int>h1;
    Heap<int>h2;
    Heap<int>h3;

    while(t--)
    {
        h1.clean();
        h2.clean();
        h3.clean();

        for(int i=0; i<factor; i++)
        {
            int val;
            val=rand();
            h1.push(val);
            h2.push(val);
            h3.push(val);
        }

        h1.heapSort();
        h2.SortDesc();

        begin1=clock();
        h1.heapSort();
        end1=clock();
        cputime1=(double)(end1-begin1)/CLOCKS_PER_SEC;

        begin2=clock();
        h2.heapSort();
        end2=clock();
        cputime2=(double)(end2-begin2)/CLOCKS_PER_SEC;

        begin3=clock();
        h3.heapSort();
        end3=clock();
        cputime3=(double)(end3-begin3)/CLOCKS_PER_SEC;

        table[z][0]=z+1;
        table[z][1]=factor;
        table[z][2]=cputime1;
        table[z][3]=cputime2;
        table[z][4]=cputime3;
        z++;
        factor+=5000;
    }

    cout<<"SI No.\t\t"<<"Input\t\t"<<"Sorted\t\t"<<"Rev Sorted\t\t"<<"Random"<<endl;
    for(int i=0; i<table.size(); i++)
    {
        for(int j=0; j<table[i].size(); j++)
        {
            cout<<table[i][j]<<"\t\t";
        }
        cout<<endl;
    }

}

signed main()
{
    clock_t begin1,end1,begin2,end2,begin3,end3;
    double cputime1,cputime2,cputime3;

    int ch;
    int n;
    Heap<int>h;
    do
    {
        cout<<"PRESS 0 TO QUIT"<<endl;
        cout<<"PRESS 1 GENERATE n ELEMENTS IN THE ARRAY"<<endl;
        cout<<"PRESS 2 DISPLAY THE ARRAY"<<endl;
        cout<<"PRESS 3 SORT IN ASCENDING ORDER USING MAXHEAP SORT"<<endl;
        cout<<"PRESS 4 SORT IN DESCENDING ORDER USING ANY ALGORITHM"<<endl;
        cout<<"PRESS 5 TO DISPLAY THE TIME TAKEN TO SORT THE RANDOM DATA IN ASCENDING ORDER"<<endl;
        cout<<"PRESS 6 TO DISPLAY THE TIME TAKEN TO SORT THE SORTED DATA IN ASCENDING ORDER"<<endl;
        cout<<"PRESS 7 TO DISPLAY THE TIME TAKEN TO SORT THE SORTED DATA IN DESCENDING ORDER"<<endl;
        cout<<"PRESS 8 TO DISPLAY THE TIME TAKEN FOR ALL CASES IN TABULAR FORM"<<endl;
        cout<<"PRESS 9 TO EXTRACT THE LARGEST ELEMENT"<<endl;
        cout<<"PRESS 10 TO REPLACE A VALUE AT A NODE WITH A GIVEN VALUE"<<endl;
        cout<<"PRESS 11 TO INSERT A NEW ELEMENT"<<endl;
        cout<<"PRESS 12 TO DELETE AN ELEMENT"<<endl;
        cout<<"ENTER YOUUR CHOICE :- "<<endl;
        cin>>ch;
        switch(ch)
        {
        case 1:
        {
            srand(time(0));
            h.clean();
            cin>>n;
            for(int i=0; i<n; i++)
            {
                int val;
                val=rand();
                h.push(val);
            }
            break;
        }
        case 2:
        {
            h.display();
            break;
        }
        case 3:
        {
            h.heapSort();
            h.display();
            break;
        }
        case 4:
        {
            h.SortDesc();
            h.display();
            break;
        }
        case 5:
        {
            begin1=clock();
            h.heapSort();
            end1=clock();
            cputime1=(double)(end1-begin1)/CLOCKS_PER_SEC;
            cout<<"Time taken :- "<<cputime1<<" seconds"<<endl;
            break;
        }
        case 6:
        {
            h.heapSort();
            begin2=clock();
            h.heapSort();
            end2=clock();
            cputime2=(double)(end2-begin2)/CLOCKS_PER_SEC;
            cout<<"Time taken :- "<<cputime2<<" seconds"<<endl;
            break;
        }
        case 7:
        {
            h.SortDesc();
            begin3=clock();
            h.heapSort();
            end3=clock();
            cputime3=(double)(end3-begin3)/CLOCKS_PER_SEC;
            cout<<"Time taken :- "<<cputime3<<" seconds"<<endl;
            break;
        }
        case 8:
        {
            generateTable();
            break;
        }
        case 9:
        {
            cout<<"Largest element in the heap :- ";
            cout<<h.front()<<endl;
            break;
        }
        case 10:
        {
            cout<<"Enter the index and value :- "<<endl;
            int idx,val;
            cin>>idx>>val;
            h.updateNode(idx,val);
            cout<<"Updated heap :- "<<endl;
            h.display();
            break;
        }
        case 11:
        {
            cout<<"Enter the value :- "<<endl;
            int val;
            cin>>val;
            h.insertNode(val);
            cout<<"Updated heap :- "<<endl;
            h.display();
            break;
        }
        case 12:
        {
            cout<<"Enter the index :- "<<endl;
            int idx;
            cin>>idx;
            h.deleteElement(idx);
            cout<<"Updated heap :- "<<endl;
            h.display();
            break;
        }
        }
    }
    while(ch!=0);
    return 0;
}
