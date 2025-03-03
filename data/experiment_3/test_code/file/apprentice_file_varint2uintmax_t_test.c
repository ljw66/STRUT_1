void test_file_varint2uintmax_t_up(void);
void test_file_varint2uintmax_t_down(void);


void test_file_varint2uintmax_t_up(void){

	aunit_printf("\n##FUNCTION_START_file_varint2uintmax_t\n");
 }

void test_file_varint2uintmax_t_down(void){
	aunit_printf("\n##FUNCTION_END_file_varint2uintmax_t\n");
 }



void abnormal_file_varint2uintmax_t_case(int index);

void abnormal_file_varint2uintmax_t_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_file_varint2uintmax_t_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x81};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x00};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x82};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_1,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x4081,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_1\n");
}

void test_file_varint2uintmax_t_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x81};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x00};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x82};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_2,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x4081,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_2\n");
}

void test_file_varint2uintmax_t_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_3,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_3\n");
}

void test_file_varint2uintmax_t_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_4,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_4\n");
}

void test_file_varint2uintmax_t_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x81};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x83};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x82};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_5,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[3]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			us[1]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x204081,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_5\n");
}

void test_file_varint2uintmax_t_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x00};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x81};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x83};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0x82};
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
	case_id=6;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_6,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[3]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			us[1]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x204081,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_6\n");
}

void test_file_varint2uintmax_t_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x7f};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_7,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x7f,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_7\n");
}

void test_file_varint2uintmax_t_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x7f};
	unsigned int listLength_2=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_8,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x7f,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_8\n");
}

void test_file_varint2uintmax_t_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={52};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x81};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x00};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x01};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_9,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x81,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_9\n");
}

void test_file_varint2uintmax_t_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *us;
	int t;
	size_t *l;

	//声明返回值局部变量，若为基本类型赋默认值
	uintmax_t returnValue = 0;

	//值序列相关
	int valueList_0[]={0};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)l_PTRTO};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x81};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x00};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x01};
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
	parse_apple_call_counter = 0;
	parse_strength_call_counter = 0;
	parse_ext_call_counter = 0;
	parse_mime_call_counter = 0;

	aunit_printf("###TEST_TREE_test_file_varint2uintmax_t_10,false,0\n");
	aunit_printf("#CASE_START_test_file_varint2uintmax_t_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			t=(int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			l=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			us[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			us[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			us[1]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = file_varint2uintmax_t(us,t,l);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("file_varint2uintmax_t","returnValue",0x81,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("parse_apple","parse_apple_call_counter",parse_apple_call_counter)
	OB_INT_EXPR("parse_strength","parse_strength_call_counter",parse_strength_call_counter)
	OB_INT_EXPR("parse_ext","parse_ext_call_counter",parse_ext_call_counter)
	OB_INT_EXPR("parse_mime","parse_mime_call_counter",parse_mime_call_counter)

	aunit_printf("#CASE_END_test_file_varint2uintmax_t_10\n");
}

void aunit_test_func_run(int caseIndex){

	test_file_varint2uintmax_t_up();

	switch(caseIndex){
	case 1:
		test_file_varint2uintmax_t_1();
		break;
	case 2:
		test_file_varint2uintmax_t_2();
		break;
	case 3:
		test_file_varint2uintmax_t_3();
		break;
	case 4:
		test_file_varint2uintmax_t_4();
		break;
	case 5:
		test_file_varint2uintmax_t_5();
		break;
	case 6:
		test_file_varint2uintmax_t_6();
		break;
	case 7:
		test_file_varint2uintmax_t_7();
		break;
	case 8:
		test_file_varint2uintmax_t_8();
		break;
	case 9:
		test_file_varint2uintmax_t_9();
		break;
	case 10:
		test_file_varint2uintmax_t_10();
		break;
	default:
		abnormal_file_varint2uintmax_t_case(caseIndex);
		break;
	}

	test_file_varint2uintmax_t_down();
}

