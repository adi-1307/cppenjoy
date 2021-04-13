
 #include<bits/stdc++.h>
using namespace std;
int main()

{
  priority_queue<int,vector<int>,greater<int>>pq;//to create min heap<datatype,container data type ,comparator>
 int value;
 for(int i=0;i<5;i++)
 {
   cin>>value;
   pq.push(value);
 }
  priority_queue<int,vector<int>,greater<int>>pq1(pq);//copying the value of a priority queue in aother queue
 while(!pq.empty())
 {
   cout<<pq.top()<<" ";//it returns the minimum element from the heap
   pq.pop();//it removes the minimum element from the heap

 }
    cout<<endl;
 while(!pq1.empty())
 {
   cout<<pq1.top()<<" ";//it returns the minimum element from the heap
   pq1.pop();//it removes the minimum element from the heap
  
 }
    cout<<endl;

    // swapping two priority queues
  priority_queue<int,vector<int>,greater<int>>pq2;
   for(int j=0;j<5;j++)
  {
    cin>>value;
    pq2.push(value);
  }
  pq1.swap(pq2);
  while(!pq2.empty())
 {
   cout<<pq2.top()<<" ";//it returns the minimum element from the heap
   pq2.pop();//it removes the minimum element from the heap
  
 }


}