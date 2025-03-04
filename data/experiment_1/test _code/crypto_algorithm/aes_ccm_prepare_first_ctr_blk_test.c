void test_ccm_prepare_first_ctr_blk_up(void);
void test_ccm_prepare_first_ctr_blk_down(void);


void test_ccm_prepare_first_ctr_blk_up(void){

	aunit_printf("\n##FUNCTION_START_ccm_prepare_first_ctr_blk\n");
 }

void test_ccm_prepare_first_ctr_blk_down(void){
	aunit_printf("\n##FUNCTION_END_ccm_prepare_first_ctr_blk\n");
 }



void abnormal_ccm_prepare_first_ctr_blk_case(int index);

void abnormal_ccm_prepare_first_ctr_blk_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ccm_prepare_first_ctr_blk_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *counter;
	BYTE *nonce;
	int nonce_len;
	int payload_len_store_size;


	//值序列相关
	int valueList_0[]={7};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000000000000000000000000000"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"123456789ABCDEF"};
	unsigned int listLength_2=1;
	int valueList_3[]={2};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ccm_prepare_first_ctr_blk_1,false,0\n");
	aunit_printf("#CASE_START_test_ccm_prepare_first_ctr_blk_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nonce_len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			counter=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			payload_len_store_size=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ccm_prepare_first_ctr_blk(counter,nonce,nonce_len,payload_len_store_size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_ccm_prepare_first_ctr_blk_1\n");
}

void test_ccm_prepare_first_ctr_blk_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *counter;
	BYTE *nonce;
	int nonce_len;
	int payload_len_store_size;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
	unsigned int listLength_1=1;
	int valueList_2[]={4};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ccm_prepare_first_ctr_blk_2,false,0\n");
	aunit_printf("#CASE_START_test_ccm_prepare_first_ctr_blk_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nonce_len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			counter=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			payload_len_store_size=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		ccm_prepare_first_ctr_blk(counter,nonce,nonce_len,payload_len_store_size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_ccm_prepare_first_ctr_blk_2\n");
}

void test_ccm_prepare_first_ctr_blk_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *counter;
	BYTE *nonce;
	int nonce_len;
	int payload_len_store_size;


	//值序列相关
	int valueList_0[]={15};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000000000000000000000000000"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
	unsigned int listLength_2=1;
	int valueList_3[]={1};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ccm_prepare_first_ctr_blk_3,false,0\n");
	aunit_printf("#CASE_START_test_ccm_prepare_first_ctr_blk_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nonce_len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			counter=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			payload_len_store_size=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ccm_prepare_first_ctr_blk(counter,nonce,nonce_len,payload_len_store_size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_ccm_prepare_first_ctr_blk_3\n");
}

void test_ccm_prepare_first_ctr_blk_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *counter;
	BYTE *nonce;
	int nonce_len;
	int payload_len_store_size;


	//值序列相关
	int valueList_0[]={7};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"00000000000000000000000000000000"};
	unsigned int listLength_1=1;
	BYTE *valueList_2[]={(BYTE *)"123456789ABCDEF"};
	unsigned int listLength_2=1;
	int valueList_3[]={-1};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ccm_prepare_first_ctr_blk_4,false,0\n");
	aunit_printf("#CASE_START_test_ccm_prepare_first_ctr_blk_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nonce_len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			counter=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			nonce=(BYTE *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			payload_len_store_size=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		ccm_prepare_first_ctr_blk(counter,nonce,nonce_len,payload_len_store_size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_ccm_prepare_first_ctr_blk_4\n");
}

void test_ccm_prepare_first_ctr_blk_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	BYTE *counter;
	BYTE *nonce;
	int nonce_len;
	int payload_len_store_size;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	BYTE *valueList_1[]={(BYTE *)"FFFFFFFFFFFFFFFFFFFFFFFFFFFFFFFF"};
	unsigned int listLength_1=1;
	int valueList_2[]={0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	memcpy_call_counter = 0;
	memset_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ccm_prepare_first_ctr_blk_5,false,0\n");
	aunit_printf("#CASE_START_test_ccm_prepare_first_ctr_blk_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			nonce_len=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			counter=(BYTE *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			payload_len_store_size=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		ccm_prepare_first_ctr_blk(counter,nonce,nonce_len,payload_len_store_size);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("memset","memset_call_counter",memset_call_counter)

	aunit_printf("#CASE_END_test_ccm_prepare_first_ctr_blk_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_ccm_prepare_first_ctr_blk_up();

	switch(caseIndex){
	case 1:
		test_ccm_prepare_first_ctr_blk_1();
		break;
	case 2:
		test_ccm_prepare_first_ctr_blk_2();
		break;
	case 3:
		test_ccm_prepare_first_ctr_blk_3();
		break;
	case 4:
		test_ccm_prepare_first_ctr_blk_4();
		break;
	case 5:
		test_ccm_prepare_first_ctr_blk_5();
		break;
	default:
		abnormal_ccm_prepare_first_ctr_blk_case(caseIndex);
		break;
	}

	test_ccm_prepare_first_ctr_blk_down();
}

