#include <defs.h>
#include <stub.c>
#define SIZE 10
int A[SIZE] = {893, 40, 3233, 4267, 2669, 2541, 9073, 6023, 5681, 4622};
int partition(int low,int hi){
	int pivot = A[hi];
	int i = low-1,j;
	int temp;
	for(j = low;j<hi;j++){
		if(A[j] < pivot){
			i = i+1;
			temp = A[i];
			A[i] = A[j];
			A[j] = temp;
		}
	}
	if(A[hi] < A[i+1]){
		temp = A[i+1];
		A[i+1] = A[hi];
		A[hi] = temp;
	}
	return i+1;
}

void  qsort(int low, int hi){
	if(low < hi){
		int p = partition(low, hi);
		qsort(low,p-1);
		qsort(p+1,hi);
	}
}

void main(){
	reg_mprj_io_31 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_30 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_29 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_28 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_27 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_26 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_25 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_24 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_23 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_22 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_21 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_20 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_19 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_18 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_17 = GPIO_MODE_MGMT_STD_OUTPUT;
    	reg_mprj_io_16 = GPIO_MODE_MGMT_STD_OUTPUT;
    	
	reg_spi_enable = 1;
    	reg_wb_enable = 1;
    	
	reg_mprj_xfer = 1;
	
	while (reg_mprj_xfer == 1);
	
	qsort(0,SIZE-1);
    	
	reg_mprj_datal = 0xAB600000;

    reg_mprj_datal = 0xAB610000;
}

