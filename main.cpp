//#include <bits/stdc++.h>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    list <int> list1,list2,list3;
//    int temp;
//    while(cin >> temp)
//    {
//        list1.push_back(temp);
//        if(getchar() == '\n')
//            break;
//    }
//    while(cin >> temp)
//    {
//        list2.push_back(temp);
//        if(getchar() == '\n')
//            break;
//    }
//
//    list<int>::iterator li1 = list1.begin();
//    list<int>:: iterator li2 = list2.begin();
//
//    for(int i=0;i < list1.size()+list2.size();i++)
//    {
//        if(li1==list1.end())
//        {
//            list3.push_back(*li2);
//            li2++;
//            continue;
//        }
//        if(li2 == list2.end())
//        {
//            list3.push_back(*li1);
//            li1++;
//            continue;
//        }
//
//        if(*li1 <= *li2)
//        {
//            list3.push_back(*li1);
//            li1++;
//
//        }
//
//        else
//        {
//            list3.push_back(*li2);
//            li2++;
//        }
//    }
//
//    int i=0;
//    for(list<int> ::iterator li3 = list3.begin();li3 != list3.end();li3++)
//    {
//        if(i++)
//            printf(" ");
//        printf("%d",*li3);
//    }
//
//    return 0;
//}



//#include<bits/stdc++.h>
//
//using namespace std;
//
//int Partition(vector<int> &arr,int n,int p,int r)
//{
//    int i,j,k;
//    int x;
//    x = arr[r];
//    i = p - 1;
//
//    for( j = p; j < r; j++)
//    {
//        if(arr[j] < x)
//        {
//            i++;
//            swap(arr[i],arr[j]);
//        }
//    }
//    swap(arr[i+1],arr[r]);
//    return i+1;
//}
//
//
//
//
//void QuickSort(vector<int> &arr,int n,int p,int r)
//{
//    int q;
//    if( p < r )
//    {
//        q = Partition(arr,n,p,r);
//        QuickSort(arr,n,p,q-1);
//        QuickSort(arr,n,q+1,r);
//    }
//}
//
//
//int main()
//{
//
//    int n;
//
//    cin >> n;
//
//    vector<int> arr(n);
//
//    for(int i=0; i<n; i++)
//    {
//        cin >> arr[i];
//    }
//
//
//    QuickSort(arr,n,0,n-1);
//
//    for(int i=0; i < n; i++)
//    {
//        if(i)
//            printf(" ");
//
//        printf("%d",arr[i]);
//    }
//    return 0;
//}

