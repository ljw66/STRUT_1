void test_binstrrcaseless_up(void);
void test_binstrrcaseless_down(void);


void test_binstrrcaseless_up(void){

	aunit_printf("\n##FUNCTION_START_binstrrcaseless\n");
 }

void test_binstrrcaseless_down(void){
	aunit_printf("\n##FUNCTION_END_binstrrcaseless\n");
 }



void abnormal_binstrrcaseless_case(int index);

void abnormal_binstrrcaseless_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_binstrrcaseless_21(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b1;
	int pos;
	struct tagbstring *b2;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b2_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={0};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)b1_PTRTO};
	unsigned int listLength_2=1;
	int valueList_3[]={5};
	unsigned int listLength_3=1;
	int valueList_4[]={3};
	unsigned int listLength_4=1;
	int valueList_5[]={3};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)"abcde"};
	unsigned int listLength_6=1;
	unsigned char *valueList_7[]={(unsigned char *)"xyz"};
	unsigned int listLength_7=1;
	int valueList_8[]={5};
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
	case_id=21;
	//初始化各桩函数调用计数器
	tolower_call_counter = 0;

	aunit_printf("###TEST_TREE_test_binstrrcaseless_21,false,0\n");
	aunit_printf("#CASE_START_test_binstrrcaseless_21\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b2=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pos=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			b1=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b1_PTRTO[0]).mlen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b2_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(b2_PTRTO[0]).slen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(b1_PTRTO[0]).data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(b2_PTRTO[0]).data=(unsigned char *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(b1_PTRTO[0]).slen=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = binstrrcaseless(b1,pos,b2);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("binstrrcaseless","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("tolower","tolower_call_counter",tolower_call_counter)

	aunit_printf("#CASE_END_test_binstrrcaseless_21\n");
}

void aunit_test_func_run(int caseIndex){

	test_binstrrcaseless_up();

	switch(caseIndex){
	case 21:
		test_binstrrcaseless_21();
		break;
	default:
		abnormal_binstrrcaseless_case(caseIndex);
		break;
	}

	test_binstrrcaseless_down();
}

