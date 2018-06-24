// Question Link :https://practice.geeksforgeeks.org/problems/circular-tour/1
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int tour(petrolPump p[],int n)
{
  
  
  bool ar[n];
  for( int i = 0;i<n;i++)
  {
    int pet = 0 ;
    int dist = 0 ;
    int index ;
    int front = i ;
    int rear = i;
      
    if(rear == n) rear=0;
    
    bool flag = true;
    do {
        pet  += p[rear].petrol;
        dist += p[rear].distance;
        if(pet<dist)
            {
                flag = false;
                break;
            }
            rear++;
        if(rear == n)
            rear = 0;
                    
        }while(front != rear) ;
            
    if(flag) return i ; 
            
  }
  
  return -1 ;
}
