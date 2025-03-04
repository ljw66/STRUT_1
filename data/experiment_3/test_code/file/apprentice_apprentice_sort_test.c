void test_apprentice_sort_up(void);
void test_apprentice_sort_down(void);


void test_apprentice_sort_up(void){

	aunit_printf("\n##FUNCTION_START_apprentice_sort\n");
 }

void test_apprentice_sort_down(void){
	aunit_printf("\n##FUNCTION_END_apprentice_sort\n");
 }



void abnormal_apprentice_sort_case(int index);

void abnormal_apprentice_sort_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_apprentice_sort_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *a;
	void *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_mdump_call_counter = 0;
	file_magwarn1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_sort_2,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_sort_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = apprentice_sort(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_sort","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("file_magwarn1","file_magwarn1_call_counter",file_magwarn1_call_counter)

	aunit_printf("#CASE_END_test_apprentice_sort_2\n");
}

void test_apprentice_sort_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *a;
	void *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_mdump_call_counter = 0;
	file_magwarn1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_sort_3,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_sort_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = apprentice_sort(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_sort","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("file_magwarn1","file_magwarn1_call_counter",file_magwarn1_call_counter)

	aunit_printf("#CASE_END_test_apprentice_sort_3\n");
}

void test_apprentice_sort_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *a;
	void *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_mdump_call_counter = 0;
	file_magwarn1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_sort_4,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_sort_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = apprentice_sort(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_sort","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("file_magwarn1","file_magwarn1_call_counter",file_magwarn1_call_counter)

	aunit_printf("#CASE_END_test_apprentice_sort_4\n");
}

void test_apprentice_sort_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	void *a;
	void *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	file_magic_strength_call_counter = 0;
	parse_apple_call_counter = 0;
	memcmp_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;
	file_mdump_call_counter = 0;
	file_magwarn1_call_counter = 0;

	aunit_printf("###TEST_TREE_test_apprentice_sort_5,false,0\n");
	aunit_printf("#CASE_START_test_apprentice_sort_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		returnValue = apprentice_sort(a,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("apprentice_sort","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("file_magic_strength","file_magic_strength_call_counter",file_magic_strength_call_counter)
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("memcmp","memcmp_call_counter",memcmp_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)
	OB_INT_EXPR("file_mdump","file_mdump_call_counter",file_mdump_call_counter)
	OB_INT_EXPR("file_magwarn1","file_magwarn1_call_counter",file_magwarn1_call_counter)

	aunit_printf("#CASE_END_test_apprentice_sort_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_apprentice_sort_up();

	switch(caseIndex){
	case 2:
		test_apprentice_sort_2();
		break;
	case 3:
		test_apprentice_sort_3();
		break;
	case 4:
		test_apprentice_sort_4();
		break;
	case 5:
		test_apprentice_sort_5();
		break;
	default:
		abnormal_apprentice_sort_case(caseIndex);
		break;
	}

	test_apprentice_sort_down();
}

