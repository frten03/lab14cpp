template <typename T>
void insertionSort(T d[],int N){
	for(int i=1;i<N;i++){
		int key = d[i] ;
		int j = i - 1 ;
		while(j>=0 and d[j] < key){
			d[j+1] = d[j] ;
			j-- ;
		}
		d[j+1] = key ;

		cout << "Pass " << i << ":" ;
		for(int j=0;j<N;j++){
			cout << d[j] << " " ;
		}
		cout << "\n" ;

	}
}