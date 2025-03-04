void test_retrieve_index_from_hash_up(void);
void test_retrieve_index_from_hash_down(void);


void test_retrieve_index_from_hash_up(void){

	aunit_printf("\n##FUNCTION_START_retrieve_index_from_hash\n");
 }

void test_retrieve_index_from_hash_down(void){
	aunit_printf("\n##FUNCTION_END_retrieve_index_from_hash\n");
 }



void abnormal_retrieve_index_from_hash_case(int index);

void abnormal_retrieve_index_from_hash_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_retrieve_index_from_hash_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_1,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_1\n");
}

void test_retrieve_index_from_hash_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_2,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_2\n");
}

void test_retrieve_index_from_hash_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={4096};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_3,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_3\n");
}

void test_retrieve_index_from_hash_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_4,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",9,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_4\n");
}

void test_retrieve_index_from_hash_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={12345};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={17};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_5,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",8,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_5\n");
}

void test_retrieve_index_from_hash_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={-1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={16};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_6,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_6\n");
}

void test_retrieve_index_from_hash_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={1};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_7,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_7\n");
}

void test_retrieve_index_from_hash_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={18446744073709551615};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={32};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_8,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",15,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_8\n");
}

void test_retrieve_index_from_hash_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={9223372036854775807};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={64};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_9,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",31,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_9\n");
}

void test_retrieve_index_from_hash_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	long long int hash;
	unsigned int capacity;

	//声明返回值局部变量，若为基本类型赋默认值
	unsigned int returnValue = 0;

	//值序列相关
	long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={1024};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_retrieve_index_from_hash_10,false,0\n");
	aunit_printf("#CASE_START_test_retrieve_index_from_hash_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hash=(long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			capacity=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = retrieve_index_from_hash(hash,capacity);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("retrieve_index_from_hash","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_retrieve_index_from_hash_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_retrieve_index_from_hash_up();

	switch(caseIndex){
	case 1:
		test_retrieve_index_from_hash_1();
		break;
	case 2:
		test_retrieve_index_from_hash_2();
		break;
	case 3:
		test_retrieve_index_from_hash_3();
		break;
	case 4:
		test_retrieve_index_from_hash_4();
		break;
	case 5:
		test_retrieve_index_from_hash_5();
		break;
	case 6:
		test_retrieve_index_from_hash_6();
		break;
	case 7:
		test_retrieve_index_from_hash_7();
		break;
	case 8:
		test_retrieve_index_from_hash_8();
		break;
	case 9:
		test_retrieve_index_from_hash_9();
		break;
	case 10:
		test_retrieve_index_from_hash_10();
		break;
	default:
		abnormal_retrieve_index_from_hash_case(caseIndex);
		break;
	}

	test_retrieve_index_from_hash_down();
}

