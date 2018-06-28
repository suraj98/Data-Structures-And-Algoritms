vector<vector<int> > Solution::prettyPrint(int A) 
{
    int m = 2*A-1;
    int n = 2*A-1;
    int row = m ;
    int col = n ;
    vector<vector<int> >  vec(m,vector<int>(n));
    int row1 = 0 ;
    int col1 = 0 ;
    while( (row>row1)  && (col>col1))
    {
        
      for(int i=col1;i<col;i++)
        { vec[row1][i] = A ;    }
        
        row1++;
        
      for(int i=row1;i<row;i++)
        {  vec[i][col-1] = A ;  }
        
        col--;
       
      
      if(row1<row)
        {
            for(int i=col-1;i>=col1;i--)
             {  vec[row-1][i] = A;  }
             row--;
        }
       
       if(   col1<col)
        {
                 for(int i=row-1;i>=row1;i--)
                 { vec[i][col1] = A;    }
                  col1++;
        }
        
        A--;
    }
    return vec ;
}
