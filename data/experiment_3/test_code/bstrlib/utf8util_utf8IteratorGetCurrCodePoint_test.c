void test_utf8IteratorGetCurrCodePoint_up(void);
void test_utf8IteratorGetCurrCodePoint_down(void);


void test_utf8IteratorGetCurrCodePoint_up(void){

	aunit_printf("\n##FUNCTION_START_utf8IteratorGetCurrCodePoint\n");
 }

void test_utf8IteratorGetCurrCodePoint_down(void){
	aunit_printf("\n##FUNCTION_END_utf8IteratorGetCurrCodePoint\n");
 }



void abnormal_utf8IteratorGetCurrCodePoint_case(int index);

void abnormal_utf8IteratorGetCurrCodePoint_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_utf8IteratorGetCurrCodePoint_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_1,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_1\n");
}

void test_utf8IteratorGetCurrCodePoint_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	int valueList_2[]={-1};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_2,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_2\n");
}

void test_utf8IteratorGetCurrCodePoint_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_3,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_3\n");
}

void test_utf8IteratorGetCurrCodePoint_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	int valueList_2[]={5};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_4,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(iter_PTRTO[0]).next=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).error=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_4\n");
}

void test_utf8IteratorGetCurrCodePoint_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x61};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={1};
	unsigned int listLength_6=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_5,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(iter_PTRTO[0]).next=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).error=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).start=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).slen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0x61,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_5\n");
}

void test_utf8IteratorGetCurrCodePoint_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xA9};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xC3};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_6,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).next=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).error=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).start=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xE9,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_6\n");
}

void test_utf8IteratorGetCurrCodePoint_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x82};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xAC};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xE2};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={3};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_7,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).next=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).error=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).start=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(iter_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0x20AC,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_7\n");
}

void test_utf8IteratorGetCurrCodePoint_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x88};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x90};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x8D};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xF0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={4};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_8,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			iter_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).next=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).error=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(iter_PTRTO[0]).start=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(iter_PTRTO[0]).slen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0x10348,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_8\n");
}

void test_utf8IteratorGetCurrCodePoint_9(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x28};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xC3};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={2};
	unsigned int listLength_7=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	unsigned char useLast_5=0;
	unsigned char useLast_6=0;
	unsigned char useLast_7=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=9;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_9,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_9\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(iter_PTRTO[0]).next=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).error=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).start=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_9\n");
}

void test_utf8IteratorGetCurrCodePoint_10(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0x28};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0xAC};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0xE2};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={3};
	unsigned int listLength_8=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=10;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_10,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_10\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(iter_PTRTO[0]).next=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).error=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).start=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(iter_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_10\n");
}

void test_utf8IteratorGetCurrCodePoint_11(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct utf8Iterator *iter;
	int errCh;

	//声明返回值局部变量，若为基本类型赋默认值
	cpUcs4 returnValue = 0;

	//值序列相关
	struct utf8Iterator *valueList_0[]={(struct utf8Iterator *)iter_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0xFFFD};
	unsigned int listLength_1=1;
	unsigned char valueList_2[]={0xBC};
	unsigned int listLength_2=1;
	unsigned char valueList_3[]={0x28};
	unsigned int listLength_3=1;
	unsigned char valueList_4[]={0x8C};
	unsigned int listLength_4=1;
	unsigned char valueList_5[]={0xF0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	int valueList_9[]={4};
	unsigned int listLength_9=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=11;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_utf8IteratorGetCurrCodePoint_11,false,0\n");
	aunit_printf("#CASE_START_test_utf8IteratorGetCurrCodePoint_11\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			iter=(struct utf8Iterator *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			errCh=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			iter_PTRTO_0_data_PTRTO[3]=(unsigned char)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			iter_PTRTO_0_data_PTRTO[1]=(unsigned char)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			iter_PTRTO_0_data_PTRTO[2]=(unsigned char)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			iter_PTRTO_0_data_PTRTO[0]=(unsigned char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(iter_PTRTO[0]).next=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(iter_PTRTO[0]).error=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(iter_PTRTO[0]).start=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(iter_PTRTO[0]).slen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = utf8IteratorGetCurrCodePoint(iter,errCh);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("utf8IteratorGetCurrCodePoint","returnValue",0xFFFD,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_utf8IteratorGetCurrCodePoint_11\n");
}

void aunit_test_func_run(int caseIndex){

	test_utf8IteratorGetCurrCodePoint_up();

	switch(caseIndex){
	case 1:
		test_utf8IteratorGetCurrCodePoint_1();
		break;
	case 2:
		test_utf8IteratorGetCurrCodePoint_2();
		break;
	case 3:
		test_utf8IteratorGetCurrCodePoint_3();
		break;
	case 4:
		test_utf8IteratorGetCurrCodePoint_4();
		break;
	case 5:
		test_utf8IteratorGetCurrCodePoint_5();
		break;
	case 6:
		test_utf8IteratorGetCurrCodePoint_6();
		break;
	case 7:
		test_utf8IteratorGetCurrCodePoint_7();
		break;
	case 8:
		test_utf8IteratorGetCurrCodePoint_8();
		break;
	case 9:
		test_utf8IteratorGetCurrCodePoint_9();
		break;
	case 10:
		test_utf8IteratorGetCurrCodePoint_10();
		break;
	case 11:
		test_utf8IteratorGetCurrCodePoint_11();
		break;
	default:
		abnormal_utf8IteratorGetCurrCodePoint_case(caseIndex);
		break;
	}

	test_utf8IteratorGetCurrCodePoint_down();
}

