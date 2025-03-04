void test_md5_init_up(void);
void test_md5_init_down(void);


void test_md5_init_up(void){

	aunit_printf("\n##FUNCTION_START_md5_init\n");
 }

void test_md5_init_down(void){
	aunit_printf("\n##FUNCTION_END_md5_init\n");
 }



void abnormal_md5_init_case(int index);

void abnormal_md5_init_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_md5_init_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;


	//值序列相关
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_init_1,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_init(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",0x10325476,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",0x98BADCFE,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",0xEFCDAB89,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",0x67452301,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_init_1\n");
}

void test_md5_init_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;


	//值序列相关
	unsigned long long int valueList_0[]={456789};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={123};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=2;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_init_2,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_init(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",0x10325476,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",0x98BADCFE,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",0xEFCDAB89,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",0x67452301,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_init_2\n");
}

void test_md5_init_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;


	//值序列相关
	unsigned long long int valueList_0[]={0};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0x22222222};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0x11111111};
	unsigned int listLength_3=1;
	unsigned int valueList_4[]={0x44444444};
	unsigned int listLength_4=1;
	unsigned int valueList_5[]={0x33333333};
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
	case_id=3;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_init_3,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(ctx_PTRTO[0]).state[1]=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(ctx_PTRTO[0]).state[0]=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ctx_PTRTO[0]).state[3]=(unsigned int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ctx_PTRTO[0]).state[2]=(unsigned int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		md5_init(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",0x10325476,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",0x98BADCFE,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",0xEFCDAB89,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",0x67452301,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_init_3\n");
}

void test_md5_init_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;


	//值序列相关
	unsigned long long int valueList_0[]={0xFFFFFFFFFFFFFFFF};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0xFFFFFFFF};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_init_4,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_init(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",0x10325476,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",0x98BADCFE,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",0xEFCDAB89,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",0x67452301,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_init_4\n");
}

void test_md5_init_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	MD5_CTX *ctx;


	//值序列相关
	unsigned long long int valueList_0[]={67890};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={12345};
	unsigned int listLength_1=1;
	//值个数不够时是否沿用最后一个值 1=使用 0=不使用
	unsigned char useLast_0=0;
	unsigned char useLast_1=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器

	aunit_printf("###TEST_TREE_test_md5_init_5,false,0\n");
	aunit_printf("#CASE_START_test_md5_init_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			(ctx_PTRTO[0]).bitlen=(unsigned long long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			(ctx_PTRTO[0]).datalen=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		md5_init(ctx);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[3]",0x10325476,(ctx->state)[3])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[2]",0x98BADCFE,(ctx->state)[2])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[1]",0xEFCDAB89,(ctx->state)[1])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","(ctx->state)[0]",0x67452301,(ctx->state)[0])
	TEST_ASSERT_EQUAL_UNSIGNED_INT("md5_init","ctx->datalen",0,ctx->datalen)
	TEST_ASSERT_EQUAL_UNSIGNED_LONGLONG("md5_init","ctx->bitlen",0,ctx->bitlen)

	//预期用例中各桩函数调用次数

	aunit_printf("#CASE_END_test_md5_init_5\n");
}

void aunit_test_func_run(int caseIndex){

	test_md5_init_up();

	switch(caseIndex){
	case 1:
		test_md5_init_1();
		break;
	case 2:
		test_md5_init_2();
		break;
	case 3:
		test_md5_init_3();
		break;
	case 4:
		test_md5_init_4();
		break;
	case 5:
		test_md5_init_5();
		break;
	default:
		abnormal_md5_init_case(caseIndex);
		break;
	}

	test_md5_init_down();
}

