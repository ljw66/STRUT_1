void test_ballocmin_up(void);
void test_ballocmin_down(void);


void test_ballocmin_up(void){

	aunit_printf("\n##FUNCTION_START_ballocmin\n");
 }

void test_ballocmin_down(void){
	aunit_printf("\n##FUNCTION_END_ballocmin\n");
 }



void abnormal_ballocmin_case(int index);

void abnormal_ballocmin_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_ballocmin_12(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct tagbstring *b;
	int len;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct tagbstring *valueList_0[]={(struct tagbstring *)b_PTRTO};
	unsigned int listLength_0=1;
	int valueList_1[]={8};
	unsigned int listLength_1=1;
	unsigned char *valueList_2[]={(unsigned char *)"valid_ptr"};
	unsigned int listLength_2=1;
	int valueList_3[]={10};
	unsigned int listLength_3=1;
	int valueList_4[]={12};
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
	realloc_call_counter = 0;

	aunit_printf("###TEST_TREE_test_ballocmin_12,false,0\n");
	aunit_printf("#CASE_START_test_ballocmin_12\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			b=(struct tagbstring *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			len=(int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(b_PTRTO[0]).data=(unsigned char *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(b_PTRTO[0]).slen=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(b_PTRTO[0]).mlen=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		returnValue = ballocmin(b,len);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("ballocmin","b->mlen",11,b->mlen)
	TEST_ASSERT_EQUAL_INT("ballocmin","returnValue",0,returnValue)
	TEST_ASSERT_EQUAL_LONG("ballocmin","b->data","new_valid_ptr",b->data)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("realloc","realloc_call_counter",realloc_call_counter)

	aunit_printf("#CASE_END_test_ballocmin_12\n");
}

void aunit_test_func_run(int caseIndex){

	test_ballocmin_up();

	switch(caseIndex){
	case 12:
		test_ballocmin_12();
		break;
	default:
		abnormal_ballocmin_case(caseIndex);
		break;
	}

	test_ballocmin_down();
}

