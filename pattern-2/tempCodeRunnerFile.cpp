  for(int row = 0; row < n; row++)
    {
        for(int col = 0; col < n-row-1; col++)
        {
            cout << "_";
        }
        int changeNum = row+1;
        for(int col = 0 ; col < changeNum; col--)
        {
            cout << col+1;
        }
       
        cout <<endl;