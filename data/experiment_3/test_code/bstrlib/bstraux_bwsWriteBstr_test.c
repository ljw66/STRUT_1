void test_bwsWriteBstr_up(void);
void test_bwsWriteBstr_down(void);


void test_bwsWriteBstr_up(void){

	aunit_printf("\n##FUNCTION_START_bwsWriteBstr\n");
 }

void test_bwsWriteBstr_down(void){
	aunit_printf("\n##FUNCTION_END_bwsWriteBstr\n");
 }



void abnormal_bwsWriteBstr_case(int index);

void abnormal_bwsWriteBstr_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bwsWriteBstr_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	struct tagbstring *valueList_7[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_7=1;
	void *valueList_8[]={(void *)0};
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
	case_id=2;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bassign_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_2,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).parm=(void *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_2\n");
}

void test_bwsWriteBstr_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"data"};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int (*valueList_4[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_4=1;
	int valueList_5[]={0};
	unsigned int listLength_5=1;
	int valueList_6[]={10};
	unsigned int listLength_6=1;
	int valueList_7[]={10};
	unsigned int listLength_7=1;
	struct tagbstring *valueList_8[]={(struct tagbstring *)NULL};
	unsigned int listLength_8=1;
	void *valueList_9[]={(void *)0};
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
	case_id=3;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bassign_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_3,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ws_PTRTO[0]).isEOF=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b_PTRTO[0]).mlen=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ws_PTRTO[0]).parm=(void *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_3\n");
}

void test_bwsWriteBstr_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"data"};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
	unsigned int listLength_5=1;
	int (*valueList_6[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_6=1;
	int valueList_7[]={1};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	int valueList_9[]={10};
	unsigned int listLength_9=1;
	struct tagbstring *valueList_10[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_10=1;
	void *valueList_11[]={(void *)0};
	unsigned int listLength_11=1;
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
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=4;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bassign_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_4,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).isEOF=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ws_PTRTO[0]).parm=(void *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_4\n");
}

void test_bwsWriteBstr_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={10};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"data"};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
	unsigned int listLength_5=1;
	int (*valueList_6[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	int valueList_9[]={0};
	unsigned int listLength_9=1;
	struct tagbstring *valueList_10[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_10=1;
	void *valueList_11[]={(void *)0};
	unsigned int listLength_11=1;
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
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=5;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bassign_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_5,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).isEOF=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ws_PTRTO[0]).parm=(void *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_5\n");
}

void test_bwsWriteBstr_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct bwriteStream *ws;
	struct tagbstring *b;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	struct bwriteStream *valueList_1[]={(struct bwriteStream *)ws_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={20};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	unsigned char *valueList_4[]={(unsigned char *)"data"};
	unsigned int listLength_4=1;
	int valueList_5[]={5};
	unsigned int listLength_5=1;
	int (*valueList_6[])(const void *, unsigned int, unsigned int, void *)={(int (*)(const void *, unsigned int, unsigned int, void *))"writeFn"};
	unsigned int listLength_6=1;
	int valueList_7[]={0};
	unsigned int listLength_7=1;
	int valueList_8[]={10};
	unsigned int listLength_8=1;
	int valueList_9[]={10};
	unsigned int listLength_9=1;
	struct tagbstring *valueList_10[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_10=1;
	void *valueList_11[]={(void *)0};
	unsigned int listLength_11=1;
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
	unsigned char useLast_10=0;
	unsigned char useLast_11=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=6;
	//初始化各桩函数调用计数器
	bcatblk_call_counter = 0;
	bassign_call_counter = 0;
	bconcat_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bwsWriteBstr_6,false,0\n");
	aunit_printf("#CASE_START_test_bwsWriteBstr_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ws=(struct bwriteStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			struct_tagbstring1.mlen=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).data=(unsigned char *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ws_PTRTO[0]).writeFn=(int (*)(const void *, unsigned int, unsigned int, void *))valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ws_PTRTO[0]).isEOF=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b_PTRTO[0]).mlen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ws_PTRTO[0]).minBuffSz=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ws_PTRTO[0]).buff=(struct tagbstring *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ws_PTRTO[0]).parm=(void *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = bwsWriteBstr(ws,b);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bwsWriteBstr","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bcatblk","bcatblk_call_counter",bcatblk_call_counter)
	OB_INT_EXPR("bassign","bassign_call_counter",bassign_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)

	aunit_printf("#CASE_END_test_bwsWriteBstr_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_bwsWriteBstr_up();

	switch(caseIndex){
	case 2:
		test_bwsWriteBstr_2();
		break;
	case 3:
		test_bwsWriteBstr_3();
		break;
	case 4:
		test_bwsWriteBstr_4();
		break;
	case 5:
		test_bwsWriteBstr_5();
		break;
	case 6:
		test_bwsWriteBstr_6();
		break;
	default:
		abnormal_bwsWriteBstr_case(caseIndex);
		break;
	}

	test_bwsWriteBstr_down();
}

