void test_delete_up(void);
void test_delete_down(void);


void test_delete_up(void){

	aunit_printf("\n##FUNCTION_START_delete\n");
 }

void test_delete_down(void){
	aunit_printf("\n##FUNCTION_END_delete\n");
 }



void abnormal_delete_case(int index);

void abnormal_delete_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_delete_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={7};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={5};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_1,false,0\n");
	aunit_printf("#CASE_START_test_delete_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_1\n");
}

void test_delete_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={5};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_2,false,0\n");
	aunit_printf("#CASE_START_test_delete_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("delete","(da->items)[2]","0x3000",(da->items)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("delete","da->size",4,da->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_2\n");
}

void test_delete_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={2};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={3};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_3,false,0\n");
	aunit_printf("#CASE_START_test_delete_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("delete","da->size",2,da->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_3\n");
}

void test_delete_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_4,false,0\n");
	aunit_printf("#CASE_START_test_delete_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_4\n");
}

void test_delete_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={4};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_5,false,0\n");
	aunit_printf("#CASE_START_test_delete_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_LONG("delete","(da->items)[0]","0x3000",(da->items)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("delete","da->size",3,da->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_5\n");
}

void test_delete_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	dynamic_array_t *da;
	unsigned int index;


	//值序列相关
	unsigned int valueList_0[]={0};
	unsigned int listLength_0=1;
	dynamic_array_t *valueList_1[]={(dynamic_array_t *)da_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={10};
	unsigned int listLength_2=1;
	void **valueList_3[]={(void * *)0x1000};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={1};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	contains_call_counter = 0;
	free_call_counter = 0;

	aunit_printf("###TEST_TREE_test_delete_6,false,0\n");
	aunit_printf("#CASE_START_test_delete_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			index=(unsigned int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			da=(dynamic_array_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(da_PTRTO[0]).capacity=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(da_PTRTO[0]).items=(void * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(da_PTRTO[0]).size=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		delete(da,index);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("delete","da->size",0,da->size)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("contains","contains_call_counter",contains_call_counter)
	OB_INT_EXPR("free","free_call_counter",free_call_counter)

	aunit_printf("#CASE_END_test_delete_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_delete_up();

	switch(caseIndex){
	case 1:
		test_delete_1();
		break;
	case 2:
		test_delete_2();
		break;
	case 3:
		test_delete_3();
		break;
	case 4:
		test_delete_4();
		break;
	case 5:
		test_delete_5();
		break;
	case 6:
		test_delete_6();
		break;
	default:
		abnormal_delete_case(caseIndex);
		break;
	}

	test_delete_down();
}

