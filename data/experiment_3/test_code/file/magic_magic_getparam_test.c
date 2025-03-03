void test_magic_getparam_up(void);
void test_magic_getparam_down(void);


void test_magic_getparam_up(void){

	aunit_printf("\n##FUNCTION_START_magic_getparam\n");
 }

void test_magic_getparam_down(void){
	aunit_printf("\n##FUNCTION_END_magic_getparam\n");
 }



void abnormal_magic_getparam_case(int index);

void abnormal_magic_getparam_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_magic_getparam_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int param;
	void *val;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={150};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_magic_getparam_9,false,0\n");
	aunit_printf("#CASE_START_test_magic_getparam_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errno=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			param=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).regex_max=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = magic_getparam(ms,param,val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("magic_getparam","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("magic_getparam","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_magic_getparam_9\n");
}

void test_magic_getparam_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int param;
	void *val;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={4};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={250};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_magic_getparam_10,false,0\n");
	aunit_printf("#CASE_START_test_magic_getparam_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errno=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			param=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).elf_notes_max=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = magic_getparam(ms,param,val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("magic_getparam","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("magic_getparam","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_magic_getparam_10\n");
}

void test_magic_getparam_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int param;
	void *val;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={8};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={350};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_magic_getparam_11,false,0\n");
	aunit_printf("#CASE_START_test_magic_getparam_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errno=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			param=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).elf_shsize_max=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = magic_getparam(ms,param,val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("magic_getparam","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("magic_getparam","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_magic_getparam_11\n");
}

void test_magic_getparam_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct magic_set *ms;
	int param;
	void *val;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	void *valueList_0[]={(void *)0};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	struct magic_set *valueList_3[]={(struct magic_set *)ms_PTRTO};
	unsigned int listLength_3=1;
	unsigned short int valueList_4[]={450};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=12;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_magic_getparam_12,false,0\n");
	aunit_printf("#CASE_START_test_magic_getparam_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			val=(void *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errno=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			param=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			ms=(struct magic_set *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ms_PTRTO[0]).elf_shnum_max=(unsigned short int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = magic_getparam(ms,param,val);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("magic_getparam","errno",0,errno)
	TEST_ASSERT_EQUAL_INT("magic_getparam","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_magic_getparam_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_magic_getparam_up();

	switch(caseIndex){
	case 9:
		test_magic_getparam_9();
		break;
	case 10:
		test_magic_getparam_10();
		break;
	case 11:
		test_magic_getparam_11();
		break;
	case 12:
		test_magic_getparam_12();
		break;
	default:
		abnormal_magic_getparam_case(caseIndex);
		break;
	}

	test_magic_getparam_down();
}

