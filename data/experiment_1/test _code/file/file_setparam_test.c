void test_setparam_up(void);
void test_setparam_down(void);


void test_setparam_up(void){

	aunit_printf("\n##FUNCTION_START_setparam\n");
 }

void test_setparam_down(void){
	aunit_printf("\n##FUNCTION_END_setparam\n");
 }



void abnormal_setparam_case(int index);

void abnormal_setparam_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_setparam_7(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	char *p;


	//值序列相关
	char *valueList_0[]={(char *)"unknown=123"};
	unsigned int listLength_0=1;
	unsigned int valueList_1[]={0};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={0};
	unsigned int listLength_2=1;
	int valueList_3[]={0};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
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
	atoi_call_counter = 0;
	strncmp_call_counter = 0;
	file_errx_call_counter = 0;
	strchr_call_counter = 0;

	aunit_printf("###TEST_TREE_test_setparam_7,false,0\n");
	aunit_printf("#CASE_START_test_setparam_7\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			p=(char *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			pm[0].value=(unsigned int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			pm[1].value=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			pm[1].set=(int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			pm[0].set=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		setparam(p);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("atoi","atoi_call_counter",atoi_call_counter)
	OB_INT_EXPR("strncmp","strncmp_call_counter",strncmp_call_counter)
	OB_INT_EXPR("file_errx","file_errx_call_counter",file_errx_call_counter)
	OB_INT_EXPR("strchr","strchr_call_counter",strchr_call_counter)

	aunit_printf("#CASE_END_test_setparam_7\n");
}

void aunit_test_func_run(int caseIndex){

	test_setparam_up();

	switch(caseIndex){
	case 7:
		test_setparam_7();
		break;
	default:
		abnormal_setparam_case(caseIndex);
		break;
	}

	test_setparam_down();
}

