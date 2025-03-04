void test_List_toArray_up(void);
void test_List_toArray_down(void);


void test_List_toArray_up(void){

	aunit_printf("\n##FUNCTION_START_List_toArray\n");
 }

void test_List_toArray_down(void){
	aunit_printf("\n##FUNCTION_END_List_toArray\n");
 }



void abnormal_List_toArray_case(int index);

void abnormal_List_toArray_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_List_toArray_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;

	//声明返回值局部变量，若为基本类型赋默认值
	void **returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)NULL};
	unsigned int listLength_0=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_1,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			list=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		returnValue = List_toArray(list);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_1\n");
}

void test_List_toArray_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;

	//声明返回值局部变量，若为基本类型赋默认值
	void **returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0x1234};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)NULL};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_2,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(list_PTRTO[0]).val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(list_PTRTO[0]).next=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = List_toArray(list);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_2\n");
}

void test_List_toArray_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;

	//声明返回值局部变量，若为基本类型赋默认值
	void **returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)NULL};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x5678};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x1234};
	unsigned int listLength_2=1;
	struct List_T *valueList_3[]={(struct List_T *)&struct_List_T1};
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
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_3,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_List_T1.next=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_List_T1.val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(list_PTRTO[0]).next=(struct List_T *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = List_toArray(list);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_3\n");
}

void test_List_toArray_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;

	//声明返回值局部变量，若为基本类型赋默认值
	void **returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)NULL};
	unsigned int listLength_0=1;
	void *valueList_1[]={(void *)0x5678};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x1234};
	unsigned int listLength_2=1;
	struct List_T *valueList_3[]={(struct List_T *)&struct_List_T1};
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
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_4,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_List_T1.next=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_List_T1.val=(void *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(list_PTRTO[0]).val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(list_PTRTO[0]).next=(struct List_T *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = List_toArray(list);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_4\n");
}

void test_List_toArray_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct List_T *list;

	//声明返回值局部变量，若为基本类型赋默认值
	void **returnValue = 0;

	//值序列相关
	struct List_T *valueList_0[]={(struct List_T *)&struct_List_T2};
	unsigned int listLength_0=1;
	struct List_T *valueList_1[]={(struct List_T *)NULL};
	unsigned int listLength_1=1;
	void *valueList_2[]={(void *)0x9ABC};
	unsigned int listLength_2=1;
	void *valueList_3[]={(void *)0x5678};
	unsigned int listLength_3=1;
	void *valueList_4[]={(void *)0x1234};
	unsigned int listLength_4=1;
	struct List_T *valueList_5[]={(struct List_T *)&struct_List_T1};
	unsigned int listLength_5=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	malloc_call_counter = 0;
	List_length_call_counter = 0;

	aunit_printf("###TEST_TREE_test_List_toArray_5,false,0\n");
	aunit_printf("#CASE_START_test_List_toArray_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			struct_List_T1.next=(struct List_T *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			struct_List_T2.next=(struct List_T *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_List_T2.val=(void *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_List_T1.val=(void *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(list_PTRTO[0]).val=(void *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(list_PTRTO[0]).next=(struct List_T *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = List_toArray(list);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	OB_INT_EXPR("List_toArray","returnValue",returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("malloc","malloc_call_counter",malloc_call_counter)
	OB_INT_EXPR("List_length","List_length_call_counter",List_length_call_counter)

	aunit_printf("#CASE_END_test_List_toArray_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_List_toArray_up();

	switch(caseIndex){
	case 1:
		test_List_toArray_1();
		break;
	case 2:
		test_List_toArray_2();
		break;
	case 3:
		test_List_toArray_3();
		break;
	case 4:
		test_List_toArray_4();
		break;
	case 5:
		test_List_toArray_5();
		break;
	default:
		abnormal_List_toArray_case(caseIndex);
		break;
	}

	test_List_toArray_down();
}

