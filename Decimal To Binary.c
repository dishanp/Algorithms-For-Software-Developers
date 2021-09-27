void toBinary(int n)
{
    int no[32]={0};
    int i=0;
    while(n){
        no[i++]=n%2;
        n/=2;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",no[j]);
    }
}
