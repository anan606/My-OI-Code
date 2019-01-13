
            a[i][j]+=max(a[i-1][j-1],max(a[i-1][j],a[i-1][j+1]));
        }
    }
    cout<<max(a[n][m/2],max(