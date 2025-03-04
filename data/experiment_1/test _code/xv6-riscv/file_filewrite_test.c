void test_filewrite_up(void);
void test_filewrite_down(void);


void test_filewrite_up(void){

	aunit_printf("\n##FUNCTION_START_filewrite\n");
 }

void test_filewrite_down(void){
	aunit_printf("\n##FUNCTION_END_filewrite\n");
 }



void abnormal_filewrite_case(int index);

void abnormal_filewrite_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_filewrite_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={1000};
	unsigned int listLength_1=1;
	int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={0};
	unsigned int listLength_3=1;
	struct inode *valueList_4[]={(struct inode *)&struct_inode1};
	unsigned int listLength_4=1;
	int valueList_5[]={1};
	unsigned int listLength_5=1;
	short int valueList_6[]={0};
	unsigned int listLength_6=1;
	char valueList_7[]={1};
	unsigned int listLength_7=1;
	char valueList_8[]={0};
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
	case_id=1;
	//初始化各桩函数调用计数器
	pipewrite_call_counter = 0;
	begin_op_call_counter = 0;
	writei_call_counter = 0;
	end_op_call_counter = 0;
	iunlock_call_counter = 0;
	ilock_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filewrite_1,false,0\n");
	aunit_printf("#CASE_START_test_filewrite_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).off=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).ip=(struct inode *)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).ref=(int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).major=(short int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(f_PTRTO[0]).readable=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(f_PTRTO[0]).writable=(char)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		returnValue = filewrite(f,addr,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filewrite","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pipewrite","pipewrite_call_counter",pipewrite_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filewrite_1\n");
}

void test_filewrite_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={2000};
	unsigned int listLength_1=1;
	int valueList_2[]={50};
	unsigned int listLength_2=1;
	struct inode *valueList_3[]={(struct inode *)&struct_inode1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	char valueList_5[]={1};
	unsigned int listLength_5=1;
	char valueList_6[]={1};
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
	pipewrite_call_counter = 0;
	begin_op_call_counter = 0;
	writei_call_counter = 0;
	end_op_call_counter = 0;
	iunlock_call_counter = 0;
	ilock_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filewrite_2,false,0\n");
	aunit_printf("#CASE_START_test_filewrite_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).ip=(struct inode *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).ref=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).readable=(char)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).writable=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		returnValue = filewrite(f,addr,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filewrite","returnValue",50,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pipewrite","pipewrite_call_counter",pipewrite_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filewrite_2\n");
}

void test_filewrite_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct file *f;
	unsigned long int addr;
	int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	struct file *valueList_0[]={(struct file *)f_PTRTO};
	unsigned int listLength_0=1;
	unsigned long int valueList_1[]={3000};
	unsigned int listLength_1=1;
	int valueList_2[]={100};
	unsigned int listLength_2=1;
	struct inode *valueList_3[]={(struct inode *)&struct_inode1};
	unsigned int listLength_3=1;
	int valueList_4[]={1};
	unsigned int listLength_4=1;
	short int valueList_5[]={11};
	unsigned int listLength_5=1;
	char valueList_6[]={1};
	unsigned int listLength_6=1;
	char valueList_7[]={1};
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
	case_id=3;
	//初始化各桩函数调用计数器
	pipewrite_call_counter = 0;
	begin_op_call_counter = 0;
	writei_call_counter = 0;
	end_op_call_counter = 0;
	iunlock_call_counter = 0;
	ilock_call_counter = 0;
	panic_call_counter = 0;

	aunit_printf("###TEST_TREE_test_filewrite_3,false,0\n");
	aunit_printf("#CASE_START_test_filewrite_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			f=(struct file *)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			addr=(unsigned long int)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			n=(int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			(f_PTRTO[0]).ip=(struct inode *)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			(f_PTRTO[0]).ref=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(f_PTRTO[0]).major=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(f_PTRTO[0]).readable=(char)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(f_PTRTO[0]).writable=(char)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		returnValue = filewrite(f,addr,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("filewrite","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("pipewrite","pipewrite_call_counter",pipewrite_call_counter)
	OB_INT_EXPR("begin_op","begin_op_call_counter",begin_op_call_counter)
	OB_INT_EXPR("writei","writei_call_counter",writei_call_counter)
	OB_INT_EXPR("end_op","end_op_call_counter",end_op_call_counter)
	OB_INT_EXPR("iunlock","iunlock_call_counter",iunlock_call_counter)
	OB_INT_EXPR("ilock","ilock_call_counter",ilock_call_counter)
	OB_INT_EXPR("panic","panic_call_counter",panic_call_counter)

	aunit_printf("#CASE_END_test_filewrite_3\n");
}

void aunit_test_func_run(int caseIndex){

	test_filewrite_up();

	switch(caseIndex){
	case 1:
		test_filewrite_1();
		break;
	case 2:
		test_filewrite_2();
		break;
	case 3:
		test_filewrite_3();
		break;
	default:
		abnormal_filewrite_case(caseIndex);
		break;
	}

	test_filewrite_down();
}

