void test_writei_up(void);
void test_writei_down(void);


void test_writei_up(void){

	aunit_printf("\n##FUNCTION_START_writei\n");
 }

void test_writei_down(void){
	aunit_printf("\n##FUNCTION_END_writei\n");
 }



void abnormal_writei_case(int index);

void abnormal_writei_case(int index){
#ifdef INVALID_CASE
	INVALID_CASE(index)
#else
	aunit_printf("ERROR:case_%d Not Exists\n",index);
#endif /** INVALID_CASE */
}

void test_writei_1(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={200};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={50};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_1,false,0\n");
	aunit_printf("#CASE_START_test_writei_1\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_1\n");
}

void test_writei_2(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={4294967295};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	case_id=2;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_2,false,0\n");
	aunit_printf("#CASE_START_test_writei_2\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_2\n");
}

void test_writei_3(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={100};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={100000};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	case_id=3;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_3,false,0\n");
	aunit_printf("#CASE_START_test_writei_3\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",-1,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_3\n");
}

void test_writei_4(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={50};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={50};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	case_id=4;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_4,false,0\n");
	aunit_printf("#CASE_START_test_writei_4\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_4\n");
}

void test_writei_5(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={50};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={50};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	case_id=5;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_5,false,0\n");
	aunit_printf("#CASE_START_test_writei_5\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",0,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_5\n");
}

void test_writei_6(void){
	//重复调用计数变量名
 	unsigned int aUnItCoUnTeR;
	//声明参数对应的局部变量，若为基本类型赋默认值
	struct inode *ip;
	int user_src;
	unsigned long int src;
	unsigned int off;
	unsigned int n;

	//声明返回值局部变量，若为基本类型赋默认值
	int returnValue = 0;

	//值序列相关
	unsigned long int valueList_0[]={0};
	unsigned int listLength_0=1;
	struct inode *valueList_1[]={(struct inode *)ip_PTRTO};
	unsigned int listLength_1=1;
	unsigned int valueList_2[]={50};
	unsigned int listLength_2=1;
	unsigned int valueList_3[]={50};
	unsigned int listLength_3=1;
	int valueList_4[]={0};
	unsigned int listLength_4=1;
	short int valueList_5[]={1};
	unsigned int listLength_5=1;
	unsigned int valueList_6[]={1};
	unsigned int listLength_6=1;
	short int valueList_7[]={1};
	unsigned int listLength_7=1;
	unsigned int valueList_8[]={1};
	unsigned int listLength_8=1;
	short int valueList_9[]={1};
	unsigned int listLength_9=1;
	int valueList_10[]={1};
	unsigned int listLength_10=1;
	unsigned int valueList_11[]={100};
	unsigned int listLength_11=1;
	short int valueList_12[]={1};
	unsigned int listLength_12=1;
	int valueList_13[]={1};
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
	case_id=6;
	//初始化各桩函数调用计数器
	bread_call_counter = 0;
	bmap_call_counter = 0;
	log_write_call_counter = 0;
	brelse_call_counter = 0;
	iupdate_call_counter = 0;
	either_copyin_call_counter = 0;

	aunit_printf("###TEST_TREE_test_writei_6,false,0\n");
	aunit_printf("#CASE_START_test_writei_6\n");
	//循环计数器,为用户变量/返回值赋值
	for(aUnItCoUnTeR=0;aUnItCoUnTeR<1;aUnItCoUnTeR++){
		if(aUnItCoUnTeR<listLength_0 || useLast_0){
			src=(unsigned long int)valueList_0[aUnItCoUnTeR<listLength_0?aUnItCoUnTeR:listLength_0-1];

		}
		if(aUnItCoUnTeR<listLength_1 || useLast_1){
			ip=(struct inode *)valueList_1[aUnItCoUnTeR<listLength_1?aUnItCoUnTeR:listLength_1-1];

		}
		if(aUnItCoUnTeR<listLength_2 || useLast_2){
			off=(unsigned int)valueList_2[aUnItCoUnTeR<listLength_2?aUnItCoUnTeR:listLength_2-1];

		}
		if(aUnItCoUnTeR<listLength_3 || useLast_3){
			n=(unsigned int)valueList_3[aUnItCoUnTeR<listLength_3?aUnItCoUnTeR:listLength_3-1];

		}
		if(aUnItCoUnTeR<listLength_4 || useLast_4){
			user_src=(int)valueList_4[aUnItCoUnTeR<listLength_4?aUnItCoUnTeR:listLength_4-1];

		}
		if(aUnItCoUnTeR<listLength_5 || useLast_5){
			(ip_PTRTO[0]).minor=(short int)valueList_5[aUnItCoUnTeR<listLength_5?aUnItCoUnTeR:listLength_5-1];

		}
		if(aUnItCoUnTeR<listLength_6 || useLast_6){
			(ip_PTRTO[0]).dev=(unsigned int)valueList_6[aUnItCoUnTeR<listLength_6?aUnItCoUnTeR:listLength_6-1];

		}
		if(aUnItCoUnTeR<listLength_7 || useLast_7){
			(ip_PTRTO[0]).nlink=(short int)valueList_7[aUnItCoUnTeR<listLength_7?aUnItCoUnTeR:listLength_7-1];

		}
		if(aUnItCoUnTeR<listLength_8 || useLast_8){
			(ip_PTRTO[0]).inum=(unsigned int)valueList_8[aUnItCoUnTeR<listLength_8?aUnItCoUnTeR:listLength_8-1];

		}
		if(aUnItCoUnTeR<listLength_9 || useLast_9){
			(ip_PTRTO[0]).type=(short int)valueList_9[aUnItCoUnTeR<listLength_9?aUnItCoUnTeR:listLength_9-1];

		}
		if(aUnItCoUnTeR<listLength_10 || useLast_10){
			(ip_PTRTO[0]).valid=(int)valueList_10[aUnItCoUnTeR<listLength_10?aUnItCoUnTeR:listLength_10-1];

		}
		if(aUnItCoUnTeR<listLength_11 || useLast_11){
			(ip_PTRTO[0]).size=(unsigned int)valueList_11[aUnItCoUnTeR<listLength_11?aUnItCoUnTeR:listLength_11-1];

		}
		if(aUnItCoUnTeR<listLength_12 || useLast_12){
			(ip_PTRTO[0]).major=(short int)valueList_12[aUnItCoUnTeR<listLength_12?aUnItCoUnTeR:listLength_12-1];

		}
		if(aUnItCoUnTeR<listLength_13 || useLast_13){
			(ip_PTRTO[0]).ref=(int)valueList_13[aUnItCoUnTeR<listLength_13?aUnItCoUnTeR:listLength_13-1];

		}
		returnValue = writei(ip,user_src,src,off,n);
	}
	//输出监视的表达式的值,如果用例的该表达式已有预期,则忽略
	TEST_ASSERT_EQUAL_INT("writei","returnValue",50,returnValue)

	//预期用例中各桩函数调用次数
	OB_INT_EXPR("bread","bread_call_counter",bread_call_counter)
	OB_INT_EXPR("bmap","bmap_call_counter",bmap_call_counter)
	OB_INT_EXPR("log_write","log_write_call_counter",log_write_call_counter)
	OB_INT_EXPR("brelse","brelse_call_counter",brelse_call_counter)
	OB_INT_EXPR("iupdate","iupdate_call_counter",iupdate_call_counter)
	OB_INT_EXPR("either_copyin","either_copyin_call_counter",either_copyin_call_counter)

	aunit_printf("#CASE_END_test_writei_6\n");
}

void aunit_test_func_run(int caseIndex){

	test_writei_up();

	switch(caseIndex){
	case 1:
		test_writei_1();
		break;
	case 2:
		test_writei_2();
		break;
	case 3:
		test_writei_3();
		break;
	case 4:
		test_writei_4();
		break;
	case 5:
		test_writei_5();
		break;
	case 6:
		test_writei_6();
		break;
	default:
		abnormal_writei_case(caseIndex);
		break;
	}

	test_writei_down();
}

