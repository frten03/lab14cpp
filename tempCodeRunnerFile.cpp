void findLocalMax(const double A[][N], bool B[][N]){
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			if(i==0 or i==N-1 or j==0 or j==N-1) B[i][j] = false ;
			else{if(A[i][j]>A[i-1][j] and A[i][j]>A[i+1][j] and A[i][j]>A[i][j-1] and A[i][j]>A[i][j+1]) B[i][j] = true ;
			else B[i][j] = false ;}
		}
	}
}