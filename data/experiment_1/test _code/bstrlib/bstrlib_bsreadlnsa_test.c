void test_bsreadlnsa_up(void);
void test_bsreadlnsa_down(void);


void test_bsreadlnsa_up(void){

	aunit_printf("\n##FUNCTION_START_bsreadlnsa\n");
 }

void test_bsreadlnsa_down(void){
	aunit_printf("\n##FUNCTION_END_bsreadlnsa\n");
 }



void abnormal_bsreadlnsa_case(int index);

void abnormal_bsreadlnsa_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_bsreadlnsa_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *r;
	struct bStream *s;
	struct tagbstring *term;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)r_PTRTO};
	unsigned int listLength_0=1;
	struct bStream *valueList_1[]={(struct bStream *)s_PTRTO};
	unsigned int listLength_1=1;
	struct tagbstring *valueList_2[]={(struct tagbstring *)term_PTRTO};
	unsigned int listLength_2=1;
	unsigned char *valueList_3[]={(unsigned char *)"buff_data"};
	unsigned int listLength_3=1;
	int valueList_4[]={5};
	unsigned int listLength_4=1;
	int valueList_5[]={10};
	unsigned int listLength_5=1;
	unsigned char *valueList_6[]={(unsigned char *)"term_data"};
	unsigned int listLength_6=1;
	int valueList_7[]={5};
	unsigned int listLength_7=1;
	unsigned char *valueList_8[]={(unsigned char *)"r_data"};
	unsigned int listLength_8=1;
	int valueList_9[]={5};
	unsigned int listLength_9=1;
	int valueList_10[]={10};
	unsigned int listLength_10=1;
	int valueList_11[]={10};
	unsigned int listLength_11=1;
	int valueList_12[]={10};
	unsigned int listLength_12=1;
	struct tagbstring *valueList_13[]={(struct tagbstring *)&struct_tagbstring1};
	unsigned int listLength_13=1;
	void *valueList_14[]={(void *)"s_parm"};
	unsigned int listLength_14=1;
	int valueList_15[]={0};
	unsigned int listLength_15=1;
	size_t  (*valueList_16[])(void *, unsigned int, unsigned int, void *)={(size_t (*)(void *, unsigned int, unsigned int, void *))"s_readFnPtr"};
	unsigned int listLength_16=1;
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
	unsigned char useLast_12=0;
	unsigned char useLast_13=0;
	unsigned char useLast_14=0;
	unsigned char useLast_15=0;
	unsigned char useLast_16=0;
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=7;
	//初始化各桩函数调用计数器
	buildCharField_call_counter = 0;
	bdelete_call_counter = 0;
	bconcat_call_counter = 0;
	memcpy_call_counter = 0;
	balloc_call_counter = 0;
	bsreadlna_call_counter = 0;

	aunit_printf("###TEST_TREE_test_bsreadlnsa_7,false,0\n");
	aunit_printf("#CASE_START_test_bsreadlnsa_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			r=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			s=(struct bStream *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			term=(struct tagbstring *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			struct_tagbstring1.data=(unsigned char *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(r_PTRTO[0]).slen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			struct_tagbstring1.mlen=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(term_PTRTO[0]).data=(unsigned char *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			struct_tagbstring1.slen=(int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(r_PTRTO[0]).data=(unsigned char *)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(term_PTRTO[0]).slen=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(term_PTRTO[0]).mlen=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(r_PTRTO[0]).mlen=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(s_PTRTO[0]).maxBuffSz=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(s_PTRTO[0]).buff=(struct tagbstring *)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		if(aUnItCoUnTeR<listLength_14 || useLast_14){
			(s_PTRTO[0]).parm=(void *)valueList_14[aUnItCoUnTeR<listLength_14?aUnItCoUnTeR:listLength_14-1];

		}
		if(aUnItCoUnTeR<listLength_15 || useLast_15){
			(s_PTRTO[0]).isEOF=(int)valueList_15[aUnItCoUnTeR<listLength_15?aUnItCoUnTeR:listLength_15-1];

		}
		if(aUnItCoUnTeR<listLength_16 || useLast_16){
			(s_PTRTO[0]).readFnPtr=(size_t (*)(void *, unsigned int, unsigned int, void *))valueList_16[aUnItCoUnTeR<listLength_16?aUnItCoUnTeR:listLength_16-1];

		}
		returnValue = bsreadlnsa(r,s,term);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("bsreadlnsa","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("buildCharField","buildCharField_call_counter",buildCharField_call_counter)
	OB_INT_EXPR("bdelete","bdelete_call_counter",bdelete_call_counter)
	OB_INT_EXPR("bconcat","bconcat_call_counter",bconcat_call_counter)
	OB_INT_EXPR("memcpy","memcpy_call_counter",memcpy_call_counter)
	OB_INT_EXPR("balloc","balloc_call_counter",balloc_call_counter)
	OB_INT_EXPR("bsreadlna","bsreadlna_call_counter",bsreadlna_call_counter)

	aunit_printf("#CASE_END_test_bsreadlnsa_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_bsreadlnsa_up();

	switch(caseIndex){
	case 7:
		test_bsreadlnsa_7();
		break;
	default:
		abnormal_bsreadlnsa_case(caseIndex);
		break;
	}

	test_bsreadlnsa_down();
}

