void test_clear_up(void);
void test_clear_down(void);


void test_clear_up(void){

	aunit_printf("\n##FUNCTION_START_clear\n");
 }

void test_clear_down(void){
	aunit_printf("\n##FUNCTION_END_clear\n");
 }



void abnormal_clear_case(int index);

void abnormal_clear_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_clear_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Vector *vec;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)0};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	init_call_counter = 0;
	delete_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clear_1,false,0\n");
	aunit_printf("#CASE_START_test_clear_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(vec_PTRTO[0]).current=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(vec_PTRTO[0]).len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(vec_PTRTO[0]).contents=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		clear(vec);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("init","init_call_counter",init_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)

	aunit_printf("#CASE_END_test_clear_1\n");
}

void test_clear_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Vector *vec;


	//值序列相关
	int valueList_0[]={3};
	unsigned int listLength_0=1;
	int valueList_1[]={5};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	init_call_counter = 0;
	delete_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clear_2,false,0\n");
	aunit_printf("#CASE_START_test_clear_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(vec_PTRTO[0]).current=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(vec_PTRTO[0]).len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(vec_PTRTO[0]).contents=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		clear(vec);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("init","init_call_counter",init_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)

	aunit_printf("#CASE_END_test_clear_2\n");
}

void test_clear_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Vector *vec;


	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	int valueList_1[]={1};
	unsigned int listLength_1=1;
	int *valueList_2[]={(int *)1};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	init_call_counter = 0;
	delete_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clear_3,false,0\n");
	aunit_printf("#CASE_START_test_clear_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(vec_PTRTO[0]).current=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(vec_PTRTO[0]).len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(vec_PTRTO[0]).contents=(int *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		clear(vec);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("init","init_call_counter",init_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)

	aunit_printf("#CASE_END_test_clear_3\n");
}

void test_clear_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	Vector *vec;


	//值序列相关
	Vector *valueList_0[]={(Vector *)0};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	init_call_counter = 0;
	delete_call_counter = 0;

	aunit_printf("###TEST_TREE_test_clear_4,false,0\n");
	aunit_printf("#CASE_START_test_clear_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			vec=(Vector *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		clear(vec);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("init","init_call_counter",init_call_counter)
	OB_INT_EXPR("delete","delete_call_counter",delete_call_counter)

	aunit_printf("#CASE_END_test_clear_4\n");
}

void aunit_test_func_run(int caseIndex){

	test_clear_up();

	switch(caseIndex){
	case 1:
		test_clear_1();
		break;
	case 2:
		test_clear_2();
		break;
	case 3:
		test_clear_3();
		break;
	case 4:
		test_clear_4();
		break;
	default:
		abnormal_clear_case(caseIndex);
		break;
	}

	test_clear_down();
}

