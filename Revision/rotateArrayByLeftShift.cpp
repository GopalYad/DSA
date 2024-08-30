 int shift = d%n;
    int tem[100000];
    int index=0;
    for(int i =0 ; i < shift ; i++){
     tem[index]=arr[i];
     index++;
    
    }
    for(int i= 0 ; i <n-shift ; i++){
        arr[i] =arr[i+shift];
    }
    for(int i = 0 ; i<shift ; i++){
        arr[n-shift+i] =tem[i];
    }