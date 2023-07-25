#define SIZE 4
#define SHIFT 2
#include <defs.h>
#include <stub.c>
void main(){
	int A[SIZE*SIZE] = {0, 1, 2, 3,
			0, 1, 2, 3,
			0, 1, 2, 3,
			0, 1, 2, 3,
	};
	int B[SIZE*SIZE] = {1, 2, 3, 4,
		5, 6, 7, 8,
		9, 10, 11, 12,
		13, 14, 15, 16,
	};
	int result[SIZE*SIZE];
	int i=0;
	int j;
	int k;
	int sum;
	int kk;
	unsigned int count = 0;
	
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
	
	for (i=0; i<SIZE; i++){
		for (j=0; j<SIZE; j++){
			sum = 0;
			for(k = 0;k<SIZE;k++)
				sum += A[(i*SIZE) + k] * B[(k*SIZE) + j];
			result[(i*SIZE) + j] = sum;
		}
	}
    	
	reg_mprj_datal = 0xAB600000;

    reg_mprj_datal = 0xAB610000;
}

