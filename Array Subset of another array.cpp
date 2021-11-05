string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int,int>u;
    for(int i=0;i<n;i++){
        u[a1[i]]++;
    }
    for(int i=0;i<m;i++){
        if(u[a2[i]]<1)
            return "No";
    }
    return "Yes";
}
