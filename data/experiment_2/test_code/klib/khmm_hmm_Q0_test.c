void test_hmm_Q0_up(void);
void test_hmm_Q0_down(void);


void test_hmm_Q0_up(void){

	aunit_printf("\n##FUNCTION_START_hmm_Q0\n");
 }

void test_hmm_Q0_down(void){
	aunit_printf("\n##FUNCTION_END_hmm_Q0\n");
 }



void abnormal_hmm_Q0_case(int index);

void abnormal_hmm_Q0_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_hmm_Q0_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	double **valueList_2[]={(double * *)0};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double *valueList_4[]={(double *)0};
	unsigned int listLength_4=1;
	double **valueList_5[]={(double * *)0};
	unsigned int listLength_5=1;
	int valueList_6[]={0};
	unsigned int listLength_6=1;
	double *valueList_7[]={(double *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={0};
	unsigned int listLength_8=1;
	double **valueList_9[]={(double * *)0};
	unsigned int listLength_9=1;
	double valueList_10[]={0};
	unsigned int listLength_10=1;
	double **valueList_11[]={(double * *)0};
	unsigned int listLength_11=1;
	int valueList_12[]={0};
	unsigned int listLength_12=1;
	int valueList_13[]={0};
	unsigned int listLength_13=1;
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
	//调用初始化函数

	//为case_count全局变量赋值
	case_id=1;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_1,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).E=(double * *)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(he_PTRTO[0]).A=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).A0=(double *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(hp_PTRTO[0]).a=(double * *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(he_PTRTO[0]).m=(int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).a0=(double *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).n=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).e=(double * *)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(he_PTRTO[0]).Q0=(double)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).ae=(double * *)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(hp_PTRTO[0]).n=(int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(hp_PTRTO[0]).m=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_1\n");
}

void test_hmm_Q0_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	double **valueList_7[]={(double * *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={1};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
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
	case_id=2;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_2,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).e=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).Q0=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he_PTRTO[0]).A0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).ae=(double * *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",-0.693147,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_2\n");
}

void test_hmm_Q0_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	double **valueList_7[]={(double * *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={2};
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
	case_id=3;
	//初始化各桩函数调用计数器
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_3,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).e=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).Q0=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he_PTRTO[0]).A0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).ae=(double * *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",-1.203973,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_3\n");
}

void test_hmm_Q0_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={3};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	double **valueList_7[]={(double * *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={3};
	unsigned int listLength_8=1;
	int valueList_9[]={3};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={3};
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
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_4,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).e=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).Q0=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he_PTRTO[0]).A0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).ae=(double * *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",-1.609438,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_4\n");
}

void test_hmm_Q0_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={1};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	double **valueList_7[]={(double * *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={2};
	unsigned int listLength_8=1;
	int valueList_9[]={1};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={2};
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
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_5,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).e=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).Q0=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he_PTRTO[0]).A0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).ae=(double * *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",-0.693147,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_5\n");
}

void test_hmm_Q0_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	hmm_par_t *hp;
	hmm_exp_t *he;

	//声明返回值局部变量，若为基本类型赋默认值
	double returnValue = 0;

	//值序列相关
	hmm_par_t *valueList_0[]={(hmm_par_t *)hp_PTRTO};
	unsigned int listLength_0=1;
	hmm_exp_t *valueList_1[]={(hmm_exp_t *)he_PTRTO};
	unsigned int listLength_1=1;
	int valueList_2[]={2};
	unsigned int listLength_2=1;
	double **valueList_3[]={(double * *)0};
	unsigned int listLength_3=1;
	double valueList_4[]={0};
	unsigned int listLength_4=1;
	double *valueList_5[]={(double *)0};
	unsigned int listLength_5=1;
	double **valueList_6[]={(double * *)0};
	unsigned int listLength_6=1;
	double **valueList_7[]={(double * *)0};
	unsigned int listLength_7=1;
	int valueList_8[]={1};
	unsigned int listLength_8=1;
	int valueList_9[]={2};
	unsigned int listLength_9=1;
	double *valueList_10[]={(double *)0};
	unsigned int listLength_10=1;
	int valueList_11[]={1};
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
	log_call_counter = 0;

	aunit_printf("###TEST_TREE_test_hmm_Q0_6,false,0\n");
	aunit_printf("#CASE_START_test_hmm_Q0_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			hp=(hmm_par_t *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			he=(hmm_exp_t *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			(he_PTRTO[0]).n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(hp_PTRTO[0]).e=(double * *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(he_PTRTO[0]).Q0=(double)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(he_PTRTO[0]).A0=(double *)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(hp_PTRTO[0]).a=(double * *)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(hp_PTRTO[0]).ae=(double * *)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(he_PTRTO[0]).m=(int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(hp_PTRTO[0]).n=(int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(hp_PTRTO[0]).a0=(double *)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(hp_PTRTO[0]).m=(int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		returnValue = hmm_Q0(hp,he);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_DOUBLE("hmm_Q0","returnValue",-0.510826,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("log","log_call_counter",log_call_counter)

	aunit_printf("#CASE_END_test_hmm_Q0_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_hmm_Q0_up();

	switch(caseIndex){
	case 1:
		test_hmm_Q0_1();
		break;
	case 2:
		test_hmm_Q0_2();
		break;
	case 3:
		test_hmm_Q0_3();
		break;
	case 4:
		test_hmm_Q0_4();
		break;
	case 5:
		test_hmm_Q0_5();
		break;
	case 6:
		test_hmm_Q0_6();
		break;
	default:
		abnormal_hmm_Q0_case(caseIndex);
		break;
	}

	test_hmm_Q0_down();
}

