void test_uartstart_up(void);
void test_uartstart_down(void);


void test_uartstart_up(void){

	aunit_printf("\n##FUNCTION_START_uartstart\n");
 }

void test_uartstart_down(void){
	aunit_printf("\n##FUNCTION_END_uartstart\n");
 }



void abnormal_uartstart_case(int index);

void abnormal_uartstart_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_uartstart_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;

	//值序列相关
	unsigned long int valueList_0[]={5};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={5};
	unsigned int listLength_1=1;
	char valueList_2[]={0};
	unsigned int listLength_2=1;
	char valueList_3[]={0};
	unsigned int listLength_3=1;
	char valueList_4[]={0};
	unsigned int listLength_4=1;
	char valueList_5[]={0};
	unsigned int listLength_5=1;
	char valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={0};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
	unsigned int listLength_8=1;
	char valueList_9[]={0};
	unsigned int listLength_9=1;
	char valueList_10[]={0};
	unsigned int listLength_10=1;
	char valueList_11[]={0};
	unsigned int listLength_11=1;
	char valueList_12[]={0};
	unsigned int listLength_12=1;
	char valueList_13[]={0};
	unsigned int listLength_13=1;
	char valueList_14[]={0};
	unsigned int listLength_14=1;
	char valueList_15[]={0};
	unsigned int listLength_15=1;
	char valueList_16[]={0};
	unsigned int listLength_16=1;
	char valueList_17[]={0};
	unsigned int listLength_17=1;
	char valueList_18[]={0};
	unsigned int listLength_18=1;
	char valueList_19[]={0};
	unsigned int listLength_19=1;
	char valueList_20[]={0};
	unsigned int listLength_20=1;
	char valueList_21[]={0};
	unsigned int listLength_21=1;
	char valueList_22[]={0};
	unsigned int listLength_22=1;
	char valueList_23[]={0};
	unsigned int listLength_23=1;
	char valueList_24[]={0};
	unsigned int listLength_24=1;
	char valueList_25[]={0};
	unsigned int listLength_25=1;
	char valueList_26[]={0};
	unsigned int listLength_26=1;
	char valueList_27[]={0};
	unsigned int listLength_27=1;
	char valueList_28[]={0};
	unsigned int listLength_28=1;
	char valueList_29[]={0};
	unsigned int listLength_29=1;
	char valueList_30[]={0};
	unsigned int listLength_30=1;
	char valueList_31[]={0};
	unsigned int listLength_31=1;
	char valueList_32[]={0};
	unsigned int listLength_32=1;
	char valueList_33[]={0};
	unsigned int listLength_33=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	unsigned char useLast_8=0;
	unsigned char useLast_9=0;
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	unsigned char useLast_17=0;
	unsigned char useLast_18=0;
	unsigned char useLast_19=0;
	unsigned char useLast_20=0;
	unsigned char useLast_21=0;
	unsigned char useLast_22=0;
	unsigned char useLast_23=0;
	unsigned char useLast_24=0;
	unsigned char useLast_25=0;
	unsigned char useLast_26=0;
	unsigned char useLast_27=0;
	unsigned char useLast_28=0;
	unsigned char useLast_29=0;
	unsigned char useLast_30=0;
	unsigned char useLast_31=0;
	unsigned char useLast_32=0;
	unsigned char useLast_33=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	wakeup_call_counter = 0;

	aunit_printf("###TEST_TREE_test_uartstart_7,false,0\n");
	aunit_printf("#CASE_START_test_uartstart_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			uart_tx_r=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			uart_tx_w=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			uart_tx_buf[19]=(char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			uart_tx_buf[4]=(char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			uart_tx_buf[6]=(char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			uart_tx_buf[15]=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			uart_tx_buf[0]=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			uart_tx_buf[27]=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			uart_tx_buf[17]=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			uart_tx_buf[2]=(char)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			uart_tx_buf[29]=(char)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			uart_tx_buf[11]=(char)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			uart_tx_buf[23]=(char)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			uart_tx_buf[13]=(char)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			uart_tx_buf[25]=(char)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			uart_tx_buf[8]=(char)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			uart_tx_buf[31]=(char)valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		if(aUnItCoUnTeR<listLength_17 || useLast_17){
			uart_tx_buf[21]=(char)valueList_17[aUnItCoUnTeR<listLength_17?aUnItCoUnTeR:listLength_17-1];

		}
		if(aUnItCoUnTeR<listLength_18 || useLast_18){
			uart_tx_buf[5]=(char)valueList_18[aUnItCoUnTeR<listLength_18?aUnItCoUnTeR:listLength_18-1];

		}
		if(aUnItCoUnTeR<listLength_19 || useLast_19){
			uart_tx_buf[7]=(char)valueList_19[aUnItCoUnTeR<listLength_19?aUnItCoUnTeR:listLength_19-1];

		}
		if(aUnItCoUnTeR<listLength_20 || useLast_20){
			uart_tx_buf[1]=(char)valueList_20[aUnItCoUnTeR<listLength_20?aUnItCoUnTeR:listLength_20-1];

		}
		if(aUnItCoUnTeR<listLength_21 || useLast_21){
			uart_tx_buf[26]=(char)valueList_21[aUnItCoUnTeR<listLength_21?aUnItCoUnTeR:listLength_21-1];

		}
		if(aUnItCoUnTeR<listLength_22 || useLast_22){
			uart_tx_buf[16]=(char)valueList_22[aUnItCoUnTeR<listLength_22?aUnItCoUnTeR:listLength_22-1];

		}
		if(aUnItCoUnTeR<listLength_23 || useLast_23){
			uart_tx_buf[3]=(char)valueList_23[aUnItCoUnTeR<listLength_23?aUnItCoUnTeR:listLength_23-1];

		}
		if(aUnItCoUnTeR<listLength_24 || useLast_24){
			uart_tx_buf[28]=(char)valueList_24[aUnItCoUnTeR<listLength_24?aUnItCoUnTeR:listLength_24-1];

		}
		if(aUnItCoUnTeR<listLength_25 || useLast_25){
			uart_tx_buf[18]=(char)valueList_25[aUnItCoUnTeR<listLength_25?aUnItCoUnTeR:listLength_25-1];

		}
		if(aUnItCoUnTeR<listLength_26 || useLast_26){
			uart_tx_buf[22]=(char)valueList_26[aUnItCoUnTeR<listLength_26?aUnItCoUnTeR:listLength_26-1];

		}
		if(aUnItCoUnTeR<listLength_27 || useLast_27){
			uart_tx_buf[12]=(char)valueList_27[aUnItCoUnTeR<listLength_27?aUnItCoUnTeR:listLength_27-1];

		}
		if(aUnItCoUnTeR<listLength_28 || useLast_28){
			uart_tx_buf[24]=(char)valueList_28[aUnItCoUnTeR<listLength_28?aUnItCoUnTeR:listLength_28-1];

		}
		if(aUnItCoUnTeR<listLength_29 || useLast_29){
			uart_tx_buf[14]=(char)valueList_29[aUnItCoUnTeR<listLength_29?aUnItCoUnTeR:listLength_29-1];

		}
		if(aUnItCoUnTeR<listLength_30 || useLast_30){
			uart_tx_buf[9]=(char)valueList_30[aUnItCoUnTeR<listLength_30?aUnItCoUnTeR:listLength_30-1];

		}
		if(aUnItCoUnTeR<listLength_31 || useLast_31){
			uart_tx_buf[30]=(char)valueList_31[aUnItCoUnTeR<listLength_31?aUnItCoUnTeR:listLength_31-1];

		}
		if(aUnItCoUnTeR<listLength_32 || useLast_32){
			uart_tx_buf[20]=(char)valueList_32[aUnItCoUnTeR<listLength_32?aUnItCoUnTeR:listLength_32-1];

		}
		if(aUnItCoUnTeR<listLength_33 || useLast_33){
			uart_tx_buf[10]=(char)valueList_33[aUnItCoUnTeR<listLength_33?aUnItCoUnTeR:listLength_33-1];

		}
		uartstart();
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("uartstart","uart_tx_r",5,uart_tx_r)
	TEST_ASSERT_EQUAL_UNSIGNED_LONG("uartstart","uart_tx_w",5,uart_tx_w)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("wakeup","wakeup_call_counter",wakeup_call_counter)

	aunit_printf("#CASE_END_test_uartstart_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_uartstart_up();

	switch(caseIndex){
	case 7:
		test_uartstart_7();
		break;
	default:
		abnormal_uartstart_case(caseIndex);
		break;
	}

	test_uartstart_down();
}

