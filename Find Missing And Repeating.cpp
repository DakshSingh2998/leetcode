//https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/#
int *findTwoElement(int *arr, int n) {
        // code here
        #define ll long long int
        ll curs=0;
        ll curp=0;
        for(int i=0;i<n;i++){
            curs+=arr[i];
            curp=curp+arr[i]*arr[i];
        }
        ll os=n*(n+1)/2;
        ll op=n*(n+1)*(2*n+1)/6;
        cout<<os<<" "<<curs<<endl;
        cout<<op<<" "<<curp<<endl;
        ll s=curs-os;
        ll p=curp-op;
        int dup=(p/s+s)/2;
        int org=dup-s;
        int *c = new int[2];
        c[0]=dup;
        c[1]=org;
        return c;
    }
