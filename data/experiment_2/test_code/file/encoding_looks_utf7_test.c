void test_looks_utf7_up(void);
void test_looks_utf7_down(void);


void test_looks_utf7_up(void){

	aunit_printf("\n##FUNCTION_START_looks_utf7\n");
 }

void test_looks_utf7_down(void){
	aunit_printf("\n##FUNCTION_END_looks_utf7\n");
 }



void abnormal_looks_utf7_case(int index);

void abnormal_looks_utf7_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_looks_utf7_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"abcd"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
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

	aunit_printf("###TEST_TREE_test_looks_utf7_1,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_1\n");
}

void test_looks_utf7_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/vX"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
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

	aunit_printf("###TEST_TREE_test_looks_utf7_2,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_2\n");
}

void test_looks_utf7_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/v8"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
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

	aunit_printf("###TEST_TREE_test_looks_utf7_3,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("looks_utf7","ulen",0,ulen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_3\n");
}

void test_looks_utf7_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/v+"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
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

	aunit_printf("###TEST_TREE_test_looks_utf7_4,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("looks_utf7","ulen",0,ulen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_4\n");
}

void test_looks_utf7_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/v/"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
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

	aunit_printf("###TEST_TREE_test_looks_utf7_5,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",1,returnValue)
	TEST_ASSERT_EQUAL_LONG("looks_utf7","ulen",0,ulen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_5\n");
}

void test_looks_utf7_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/v8"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_utf7_6,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_6\n");
}

void test_looks_utf7_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"+/v8"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_utf7_7,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_7\n");
}

void test_looks_utf7_8(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	unsigned char *buf;
	unsigned int nbytes;
	file_unichar_t *ubuf;
	size_t *ulen;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned char *valueList_0[]={(unsigned char *)"abcde"};
	unsigned int listLength_0=1;
	size_t *valueList_1[]={(size_t *)ulen_PTRTO};
	unsigned int listLength_1=1;
	file_unichar_t *valueList_2[]={(file_unichar_t *)ubuf_PTRTO};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned long int valueList_4[]={0};
	unsigned int listLength_4=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	unsigned char useLast_2=0;
	unsigned char useLast_3=0;
	unsigned char useLast_4=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=8;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_looks_utf7_8,false,0\n");
	aunit_printf("#CASE_START_test_looks_utf7_8\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			buf=(unsigned char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ulen=(size_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			ubuf=(file_unichar_t *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			nbytes=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			ubuf_PTRTO[0]=(unsigned long int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = looks_utf7(buf,nbytes,ubuf,ulen);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("looks_utf7","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_looks_utf7_8\n");
}

void aunit_test_func_run(int caseIndex){

	test_looks_utf7_up();

	switch(caseIndex){
	case 1:
		test_looks_utf7_1();
		break;
	case 2:
		test_looks_utf7_2();
		break;
	case 3:
		test_looks_utf7_3();
		break;
	case 4:
		test_looks_utf7_4();
		break;
	case 5:
		test_looks_utf7_5();
		break;
	case 6:
		test_looks_utf7_6();
		break;
	case 7:
		test_looks_utf7_7();
		break;
	case 8:
		test_looks_utf7_8();
		break;
	default:
		abnormal_looks_utf7_case(caseIndex);
		break;
	}

	test_looks_utf7_down();
}

