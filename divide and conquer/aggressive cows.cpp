#include<bits/stdc++.h>
using namespace std;
bool canplace(int stall[], int n, int cows, int sep)
{
     int cowsplaced = 1; //Considering the first cow is placed at 1st stall
     int last_cow_placed = stall[0];
     for(int i = 1; i<n; i++)
     {
          int current_stall = stall[i];
          if(current_stall - last_cow_placed >= sep)
          {
               cowsplaced++;
               last_cow_placed = current_stall;
               if(cowsplaced == cows)
               {
                    return true;
               }
          }

}
return false;
}

int main(){
     int num;
     cin>>num;
     int cows;
     cin>>cows;
     int stalls[num];
     int i;
     for(i=0;i<num;i++)
     {
          cin>>stalls[i];
     }
     sort(stalls, stalls+num);
     int s = 0;
     int ans = 0;
     int e = stalls[num-1] - stalls[0];                // Search Space of distance . Starting distance = 0, when two cows placed in same stall. Max distance is when 1st cow is placed on 1st stall and the other one is placed on the last stall
     while(s<=e)
     {    int mid = (s+e)/2;
          if(canplace(stalls,num,cows, mid))
          {
               ans = mid; //So that the ans can be updated if some other minimum distance greater than ans is found during next search
               s = mid+1;
          }
          else
          {
               e = mid-1;
          }
     }
     cout<<ans<<endl;
     return 0;
}
